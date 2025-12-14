/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142163
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)63)) & (((/* implicit */int) var_5)))) >> (((max((((/* implicit */int) (unsigned char)177)), (-1))) - (162)))))) : (((unsigned long long int) var_0))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) max(((~(((/* implicit */int) (unsigned char)93)))), (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_1]))))));
                /* LoopSeq 4 */
                for (int i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    var_14 = ((/* implicit */int) arr_1 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) ((unsigned int) arr_7 [i_2 + 3] [i_2] [i_2] [i_2 - 3] [i_2 - 1] [i_2]));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned char) min((var_16), ((unsigned char)1)));
                            var_17 |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (unsigned char)187))));
                            var_18 = ((/* implicit */long long int) (((-(((/* implicit */int) max((arr_9 [i_0] [(unsigned char)8] [i_2] [i_3] [i_4]), (((/* implicit */short) arr_1 [i_0]))))))) * (((/* implicit */int) (unsigned char)19))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 16; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((arr_6 [i_3] [i_2 + 1] [i_1]), (((/* implicit */unsigned long long int) var_3)))))));
                            arr_14 [i_0] [i_0] [4] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((arr_2 [i_5 - 1] [i_1] [(short)9]) ? (arr_8 [1LL] [10]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) (unsigned char)255))));
                        }
                        var_20 &= ((/* implicit */short) (((~(arr_7 [i_0] [i_0] [(signed char)11] [i_0] [i_0] [i_0]))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) - (max((((/* implicit */unsigned long long int) 9221120237041090560LL)), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)16])))))));
                        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)89))));
                    }
                    for (long long int i_6 = 3; i_6 < 14; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_1])), (4065956558209225146LL)))) ? (((/* implicit */int) arr_10 [i_0] [i_2 - 2] [i_6 - 3] [i_2 - 2] [(unsigned char)6] [i_0])) : ((-(((/* implicit */int) arr_3 [i_0])))))));
                        var_23 = ((/* implicit */int) (unsigned short)65535);
                    }
                }
                for (unsigned int i_7 = 3; i_7 < 16; i_7 += 1) 
                {
                    arr_20 [(signed char)13] = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_7] [i_7] [i_7]);
                    var_24 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max(((unsigned char)17), (((/* implicit */unsigned char) var_8))))) ? (max((((/* implicit */unsigned long long int) var_0)), (arr_6 [i_0] [i_1] [5ULL]))) : (((/* implicit */unsigned long long int) ((unsigned int) var_4))))), (((/* implicit */unsigned long long int) ((unsigned char) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171)))))))));
                }
                for (short i_8 = 2; i_8 < 15; i_8 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) max((var_25), (var_11)));
                    arr_23 [i_0] [i_1] [i_8] = ((/* implicit */unsigned char) 2814793529U);
                }
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    var_26 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [9U] [i_1] [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_22 [i_9] [i_0] [i_0] [i_0]))))) : ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_9] [i_0]))))))));
                    var_27 = ((/* implicit */short) (~(max((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (max((((/* implicit */long long int) (unsigned char)224)), (var_1)))))));
                }
                var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_0])) ? (arr_6 [i_0] [i_1] [i_1]) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (34084860461056ULL)))))) || (((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (var_1)))));
            }
        } 
    } 
    var_29 |= ((/* implicit */unsigned char) var_10);
    var_30 = ((/* implicit */long long int) ((var_1) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_4)))))))))));
}
