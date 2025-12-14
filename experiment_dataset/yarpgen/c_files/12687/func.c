/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12687
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
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_14 |= ((/* implicit */signed char) var_11);
                    arr_7 [3U] [i_1] [3U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) - (var_0)))) || (((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) <= (var_3))))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        arr_12 [i_0 + 1] [i_1] [i_3] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4199915402U)) ? (402658926) : (((/* implicit */int) (unsigned short)58117)))))));
                        var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) (-((-(((/* implicit */int) var_2))))))) == (((min((((/* implicit */unsigned int) var_1)), (var_13))) - ((-(var_10)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            var_16 |= var_9;
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_4))));
                            arr_21 [i_1 + 1] [i_1 + 1] [i_4] [i_5] [i_1 + 1] = ((/* implicit */int) ((var_8) <= (var_4)));
                        }
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_18 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) var_9)) : (var_0));
                            arr_24 [(unsigned char)12] [(unsigned char)12] [i_6] [(unsigned char)12] [4U] [i_4] [(unsigned char)12] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) var_1))));
                        }
                        var_19 = ((/* implicit */int) (!(((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                        arr_25 [i_0 + 1] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(var_7)))) * (var_0)));
                    }
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((var_8) < (((/* implicit */unsigned long long int) var_10))))))))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (var_10)))) ? (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) var_9)))) : (max((((/* implicit */unsigned long long int) var_6)), (var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11891405796617077598ULL)) ? (var_13) : (((/* implicit */unsigned int) 498597860))))))))));
                    }
                    for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            arr_36 [i_8] [i_8] = ((/* implicit */unsigned char) var_13);
                            arr_37 [i_0] [i_1 + 1] [i_2] [i_8] [i_9] [i_9] = ((/* implicit */short) var_4);
                            var_21 *= ((/* implicit */short) var_3);
                        }
                        for (int i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) 498597860)) != (1832913419U))))))), (max((var_8), (((/* implicit */unsigned long long int) var_11))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))) : (var_0)));
                            var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : ((-(max((var_9), (((/* implicit */unsigned int) var_12))))))));
                        }
                        for (int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            arr_46 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) ((var_13) * (var_13)))), (min((var_4), (((/* implicit */unsigned long long int) var_7))))))));
                            arr_47 [i_8] [i_1 + 1] [i_2] [i_1 + 1] [i_11] = ((/* implicit */int) ((var_0) > (var_4)));
                        }
                        var_24 = ((/* implicit */int) (((-(var_8))) % ((-(var_4)))));
                        arr_48 [5U] [i_1] [i_2] [i_8] = ((/* implicit */short) var_4);
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_13);
}
