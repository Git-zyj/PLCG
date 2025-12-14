/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158897
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)0)), ((-(((unsigned long long int) var_4))))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1591500056)) ? (0) : (((/* implicit */int) (short)4080))));
                    arr_11 [i_0] [(short)0] = ((/* implicit */unsigned char) ((short) 1302625565U));
                    arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (~(var_15)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */long long int) var_13);
        arr_16 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2036094823)) ? (((/* implicit */int) arr_14 [i_3] [i_3])) : (2097151)));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (3554136201U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
            arr_23 [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) (short)4080))));
            arr_24 [i_5] = ((/* implicit */signed char) (-(((((/* implicit */int) var_8)) | (((/* implicit */int) (_Bool)1))))));
        }
        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            var_20 = ((((/* implicit */_Bool) 1063370614U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23817))) : (1063370608U));
            arr_28 [i_4] [(signed char)6] = ((/* implicit */short) var_15);
            var_21 |= ((/* implicit */unsigned char) ((((arr_17 [(unsigned char)3]) / (((/* implicit */int) arr_26 [(signed char)8] [i_6])))) & (((/* implicit */int) ((((/* implicit */int) (unsigned short)46142)) != (((/* implicit */int) (_Bool)1)))))));
            var_22 |= ((/* implicit */unsigned long long int) ((signed char) arr_26 [i_4] [i_4]));
            var_23 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
        }
        var_24 = ((((/* implicit */_Bool) arr_25 [i_4] [i_4])) ? (((/* implicit */int) arr_25 [i_4] [i_4])) : (((/* implicit */int) arr_25 [i_4] [i_4])));
        var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-89))));
        arr_29 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1591500056)) ? (arr_17 [i_4]) : (arr_17 [i_4])));
    }
}
