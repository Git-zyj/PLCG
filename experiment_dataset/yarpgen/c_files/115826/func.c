/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115826
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) var_11);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */long long int) max((max((((/* implicit */int) (unsigned char)77)), (-20))), (var_0)));
                            var_15 = ((/* implicit */unsigned short) var_4);
                        }
                        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 2) 
                        {
                            arr_15 [i_0] [i_3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) ((min((1159769013), (((/* implicit */int) (short)11825)))) >= (((/* implicit */int) ((((/* implicit */int) min(((short)11825), ((short)-11825)))) >= (-1768531246))))));
                            var_16 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((var_3) + (2147483647))) >> (((((/* implicit */int) var_8)) + (22)))))), (min((var_7), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) max(((-(var_11))), (((/* implicit */int) ((var_1) < (((/* implicit */long long int) var_11))))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned char) var_4);
                            var_18 = ((/* implicit */unsigned long long int) var_4);
                            var_19 ^= ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned short)12268)));
                        }
                        arr_18 [i_0] [i_0] [i_0] [(short)4] [i_2] |= ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (var_7)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 2; i_7 < 18; i_7 += 1) 
                        {
                            arr_21 [i_0] [i_1] [i_0] = var_2;
                            arr_22 [i_0] = ((/* implicit */_Bool) var_2);
                            arr_23 [i_0] [i_0] [i_2] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) > (((/* implicit */long long int) var_3)))))) <= (var_6)));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(((/* implicit */int) ((var_10) || (((/* implicit */_Bool) var_11))))))))));
                            var_21 = (~(var_7));
                        }
                        var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((max((var_1), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8)))))))), (((((var_6) * (var_6))) / (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) var_8)))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */int) var_8);
                            var_24 = ((/* implicit */unsigned char) var_6);
                            arr_26 [i_0] = ((/* implicit */unsigned char) ((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_12)), (max((min((var_6), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) var_9)))))))));
    var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (((+(((/* implicit */int) var_10)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
}
