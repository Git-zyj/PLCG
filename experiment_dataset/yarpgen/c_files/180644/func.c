/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180644
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (unsigned short)63463))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0] [(signed char)10]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_6 [i_0] [(unsigned short)10] [i_0]))));
                    arr_9 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65523))));
                    var_15 = ((/* implicit */int) var_11);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
    {
        var_16 ^= ((/* implicit */_Bool) ((long long int) arr_7 [i_3] [i_3]));
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            var_17 = ((((/* implicit */_Bool) arr_0 [i_4] [0ULL])) ? (arr_0 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_4]))));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)32)) ? (arr_11 [i_3]) : (arr_11 [i_4]))))));
            var_19 = ((/* implicit */long long int) arr_1 [i_3] [i_4]);
        }
        for (int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    {
                        var_20 += ((/* implicit */signed char) (~(((/* implicit */int) arr_23 [i_3] [i_5] [i_7]))));
                        arr_24 [i_3] [i_3] [i_6] [i_6] = ((/* implicit */short) arr_5 [i_6] [(signed char)5]);
                        var_21 *= ((/* implicit */signed char) (-(var_6)));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_3] [8LL] [i_5])) || (((/* implicit */_Bool) var_8)))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */_Bool) (unsigned short)63463);
        }
    }
}
