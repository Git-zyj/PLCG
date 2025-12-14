/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16754
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
    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (1198388897) : (1198388897)))) : (var_2))) % (var_12)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) -1198388897)) + (((unsigned long long int) arr_8 [i_2] [i_2] [i_2] [i_1])))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) + (((1198388897) - (((/* implicit */int) (unsigned short)58681)))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-1198388898) % (arr_10 [1ULL] [i_3] [i_3 + 1] [i_3 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3 + 2] [i_3 - 1]))))) : (((1198388896) % (arr_10 [i_3] [i_3 - 2] [i_3 + 2] [i_3 - 2])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_20 = ((arr_7 [i_0] [i_0] [i_4]) % (arr_3 [i_0]));
                            arr_17 [i_4] [i_0] [(signed char)6] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_1] [(unsigned short)10] [(unsigned short)10] [i_3 + 1] [i_3])) % (((/* implicit */int) arr_15 [i_4] [i_4] [i_2] [i_3] [i_3 - 1] [i_1]))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            arr_22 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(280925220896768LL)));
                            arr_23 [i_5] [0ULL] [i_1] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3 + 1] [(short)7] [i_3 + 2] [i_3 - 1] [i_3 + 2] [i_5])) ? (((/* implicit */int) (_Bool)0)) : (1198388897)));
                            arr_24 [i_0] [i_0] [i_2] [i_2] [i_0] [i_3] = ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_7 [i_3 - 2] [i_3 + 2] [i_3 - 2]) : (arr_7 [i_3 + 1] [i_3 + 2] [i_3 + 1]));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        arr_27 [10ULL] [i_1] [i_0] [i_6] [i_2] [i_0] = ((/* implicit */unsigned int) (~(var_0)));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (arr_26 [i_0] [i_1] [i_1] [i_6])));
                        var_22 = ((/* implicit */unsigned int) arr_18 [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        var_23 ^= (~(arr_7 [i_7 - 1] [i_7 - 1] [i_7 + 1]));
                        var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_28 [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 1]))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((unsigned short) (+(-1198388898)))))));
                        var_26 = ((/* implicit */int) var_16);
                    }
                }
            } 
        } 
    } 
}
