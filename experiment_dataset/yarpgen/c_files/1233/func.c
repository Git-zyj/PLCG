/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1233
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
    for (long long int i_0 = 3; i_0 < 6; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (var_15)));
            var_21 = var_8;
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 8; i_2 += 2) 
        {
            arr_9 [i_0] [i_2 + 2] = ((/* implicit */unsigned short) ((long long int) arr_5 [i_0 + 3] [i_0 + 1]));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (short i_4 = 1; i_4 < 8; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */short) var_1);
                            var_23 = ((/* implicit */unsigned int) (short)-11);
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(arr_14 [i_0 - 3] [i_0 - 3] [i_3] [i_0] [(unsigned short)0]))))));
                        }
                        for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_6] [i_4] [i_3] [i_0 - 3])) / (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) != (var_7)))) : (((((/* implicit */int) var_4)) >> (((var_12) - (512071428U)))))));
                            arr_22 [9ULL] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_0 - 3] [i_0]))));
                        }
                        arr_23 [i_0 - 2] [i_0] [i_0] [6ULL] [i_2] |= ((/* implicit */int) (~(var_17)));
                    }
                } 
            } 
        }
        arr_24 [i_0] = var_7;
        arr_25 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_17))));
        arr_26 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) max((max((var_16), (((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [1U])))), (var_5)))) < (((/* implicit */int) ((arr_2 [i_0 + 2]) == (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))))))));
        arr_27 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_0 + 2] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (186526346U)))) : (((/* implicit */int) ((unsigned char) var_12)))));
        /* LoopNest 2 */
        for (short i_8 = 4; i_8 < 10; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                {
                    arr_34 [5U] [i_7] [i_7] = ((/* implicit */unsigned int) var_11);
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_30 [i_7] [i_8 + 2] [i_8 + 2])) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned short)32807))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_1)) : (arr_28 [i_7] [i_9]))));
                }
            } 
        } 
    }
    var_28 = ((var_19) ? (((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) var_19)) == (((/* implicit */int) var_19))))))) : (((/* implicit */int) min((var_19), (((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (var_14)))))));
}
