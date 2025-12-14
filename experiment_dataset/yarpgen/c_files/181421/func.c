/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181421
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_10 = ((/* implicit */unsigned int) var_9);
            var_11 = ((long long int) ((unsigned char) (signed char)127));
        }
        for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
        {
            arr_7 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (max((arr_2 [i_2 - 1] [i_2 - 3]), (arr_2 [i_2 + 2] [i_2 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)235)) + (((/* implicit */int) (_Bool)0)))))));
            var_12 = ((/* implicit */short) min((((/* implicit */int) ((signed char) arr_1 [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1102921331)) * (var_2)))) ? (((/* implicit */int) (unsigned short)12288)) : (((/* implicit */int) ((short) arr_3 [i_0])))))));
            var_13 = ((/* implicit */int) 134217472U);
        }
        arr_8 [i_0] = ((/* implicit */_Bool) max((((unsigned short) (~(((/* implicit */int) (unsigned short)4161))))), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) -124273803)) >= (((((/* implicit */_Bool) var_8)) ? (4160749852U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))))))))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((((/* implicit */int) (short)-19671)), (arr_6 [i_0] [i_0]))))));
    }
    for (unsigned int i_3 = 4; i_3 < 21; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (unsigned char i_5 = 2; i_5 < 23; i_5 += 4) 
            {
                {
                    arr_17 [i_3 - 2] [i_4] [i_5] [i_5] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5 + 1] [i_3 - 1] [i_3] [i_3])))))) ^ (((var_2) / (((/* implicit */unsigned long long int) arr_15 [i_4] [i_3 - 1] [i_3] [i_3]))))));
                    var_15 = ((int) (signed char)0);
                }
            } 
        } 
        arr_18 [i_3] = ((/* implicit */unsigned long long int) -2147483626);
        var_16 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) (short)-32759)) + (2147483647))) << (((((arr_10 [i_3 - 1]) + (6515891182979929097LL))) - (7LL)))))));
        var_17 = ((/* implicit */int) arr_16 [i_3] [i_3]);
        var_18 &= ((/* implicit */signed char) var_4);
    }
    var_19 = ((/* implicit */unsigned int) max((var_9), (((((/* implicit */_Bool) var_6)) ? (((int) 134217472U)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_6))))))));
}
