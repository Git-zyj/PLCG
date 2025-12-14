/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161147
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
    var_17 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_2);
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_18 = var_11;
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_9)) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (var_1)))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_8))));
                    }
                    arr_13 [i_1] [i_1] [i_0] [i_1] = var_0;
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((var_1) & (((/* implicit */unsigned long long int) ((var_15) / (var_8)))))))));
                }
                /* vectorizable */
                for (int i_4 = 4; i_4 < 15; i_4 += 4) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_12);
                    arr_17 [i_0] [i_0] [i_4] [i_4] = var_5;
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_8))));
                }
                for (int i_5 = 4; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) == (((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) * (((/* implicit */int) ((((var_8) ^ (((/* implicit */int) var_6)))) == (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_15))))))))));
                    arr_21 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_8))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_7 = 2; i_7 < 16; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)0))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) >> (((((/* implicit */int) var_16)) - (31393)))));
                            arr_26 [i_0] [i_5] [i_5] [2LL] [(short)14] |= var_6;
                            arr_27 [i_0] [i_0] [(unsigned char)8] [i_5] [(_Bool)1] [i_7] [i_0] = ((/* implicit */short) var_3);
                            var_26 ^= ((/* implicit */unsigned char) var_7);
                        }
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_13))));
                            var_28 = ((/* implicit */unsigned long long int) var_16);
                            var_29 = ((/* implicit */int) min((var_29), (var_7)));
                        }
                        var_30 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_4))))) >= (((var_10) | (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) var_1))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) var_2);
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            var_33 = ((/* implicit */short) ((var_10) + (((/* implicit */long long int) ((((((/* implicit */int) var_14)) - (var_11))) * (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_10))))))))));
                            arr_36 [i_10] [i_0] [i_9] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_13))))) - (((((/* implicit */int) var_16)) & (((/* implicit */int) var_4))))))) || (((/* implicit */_Bool) var_6))));
                        }
                        arr_37 [i_0] [i_1] [i_0] [15LL] = ((/* implicit */long long int) var_8);
                    }
                    var_34 = ((/* implicit */unsigned int) var_8);
                }
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (var_0)))) || (((/* implicit */_Bool) var_2))))) << (((var_10) - (6864037733573417064LL)))));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_14)) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) == (var_13)))))) ^ (var_8)));
}
