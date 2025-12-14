/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126919
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned char) max((max((((((/* implicit */int) var_10)) / (((/* implicit */int) var_0)))), (var_7))), (((/* implicit */int) var_9))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        var_15 += ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) << (((var_7) + (806244417)))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_2)) % (((/* implicit */int) var_1))))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (var_7))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))))));
                        arr_13 [i_2] [i_1] [(unsigned char)18] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) var_7))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))));
                    }
                    for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) min((min((var_7), (((/* implicit */int) var_4)))), (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_1))))) : (min((max((((/* implicit */unsigned long long int) var_0)), (var_6))), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned short) var_11))))))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((var_2) ? (((max((((/* implicit */int) var_2)), (var_7))) << (((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_8), (var_10)))))))));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_6)) ? (var_6) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */unsigned long long int) ((var_11) ? (var_7) : (((/* implicit */int) var_11))))) ^ (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_11), (var_0)))) & (((/* implicit */int) var_11)))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 18; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_10)))))))) ? (var_7) : (((/* implicit */int) var_10))));
                                var_21 -= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))) : (var_7))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (var_9))))) < (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_12)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (var_10))))))) + (((/* implicit */unsigned long long int) ((var_7) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (var_6)))))))));
                }
                for (int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    arr_26 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) ((var_11) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))))));
                    arr_27 [i_0] [i_1 - 1] [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */int) var_8)) - (((/* implicit */int) var_4)))), (((((var_7) + (2147483647))) << (((((/* implicit */int) var_1)) - (131)))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        {
                            var_23 &= ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) var_9)), (max((var_12), (((/* implicit */unsigned long long int) var_7)))))), (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))))));
                            var_24 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) / (((/* implicit */int) var_10)))) / (var_7)))) < (max((max((var_12), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_4))))));
                        }
                    } 
                } 
                arr_33 [i_0] &= ((/* implicit */signed char) var_7);
            }
        } 
    } 
    var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_5)))) - (((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_12)))) ? (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_3)))) : (((/* implicit */int) var_5)))))));
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_12)))))) && (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (var_6)))) && (((((/* implicit */unsigned long long int) var_7)) >= (var_12))))))))));
}
