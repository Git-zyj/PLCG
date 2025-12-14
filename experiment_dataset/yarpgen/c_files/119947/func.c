/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119947
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((8266665448961726855ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned char)166), (((/* implicit */unsigned char) (_Bool)1))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_2))))) : (min((((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (signed char)-113))))), (arr_0 [i_0])))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max((1416852390), (((/* implicit */int) (unsigned short)0)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((((max((-3174052327678022115LL), (((/* implicit */long long int) 740319478U)))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_6))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (-(1543019698)));
        var_14 = ((/* implicit */long long int) arr_5 [i_1]);
    }
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            {
                arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_9))) + (6308698017114276438LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2 - 1])) != (((/* implicit */int) arr_5 [i_2 + 1])))))));
                /* LoopSeq 1 */
                for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        arr_23 [i_2] [i_2] [i_2] [(signed char)14] = ((/* implicit */unsigned long long int) (short)-10399);
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            arr_27 [i_2] [i_2] [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_2] [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_2])) / (((/* implicit */int) arr_22 [i_2] [i_5] [i_3] [i_4 + 2] [(_Bool)1] [i_2]))));
                            arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = var_10;
                            var_15 = ((short) (-(-40653276)));
                        }
                        arr_29 [11] [11] [i_4] [i_2] = ((/* implicit */unsigned short) (-(arr_18 [i_2] [i_3])));
                        arr_30 [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_9 [i_2 + 1])));
                    }
                    var_16 = ((/* implicit */long long int) max((var_16), ((((-(((long long int) var_5)))) | (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) var_6)), (arr_18 [i_2] [i_3]))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_3] [i_4 + 2])) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) var_7)))))))))))));
                    arr_31 [(unsigned short)2] [12] [12] [i_2] = ((/* implicit */_Bool) ((long long int) (~(arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1]))));
                }
                var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) (short)10399)), (-1543019699)))), (((arr_13 [i_2 - 1]) - (arr_13 [i_2 + 1])))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-42)) ? (((((/* implicit */_Bool) arr_26 [i_2 + 1] [i_2 + 1] [i_3] [i_2 - 1] [i_2] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_17 [i_3])))) : (max((((/* implicit */int) (unsigned char)166)), (-1543019699)))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_5);
}
