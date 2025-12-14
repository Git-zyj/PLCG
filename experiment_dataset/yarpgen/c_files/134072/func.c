/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134072
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0 - 3] = ((/* implicit */int) ((signed char) arr_2 [i_0 - 2]));
        arr_4 [i_0 - 4] = ((/* implicit */unsigned int) (~(14207848553882920464ULL)));
    }
    for (signed char i_1 = 4; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_14 ^= ((/* implicit */int) max((arr_1 [i_1 - 3]), (((/* implicit */long long int) (signed char)34))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((max((arr_1 [i_1 - 3]), (((/* implicit */long long int) arr_5 [i_1 - 2])))), (((/* implicit */long long int) max((arr_5 [i_1 - 3]), (arr_6 [i_1 - 3] [i_1 + 1])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) arr_5 [i_2]);
            var_17 |= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)87))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_18 = ((/* implicit */int) var_5);
            var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 3604942402U))) ? (((unsigned long long int) (unsigned char)72)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7))))))) ? (min((arr_6 [i_1 - 1] [i_1 - 3]), (arr_6 [i_1 - 2] [i_1 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)87)))), (((/* implicit */int) (!(((/* implicit */_Bool) 14207848553882920464ULL)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)11015))) : (arr_7 [i_1 - 4] [i_3])))) : (17789849521537805097ULL)));
        }
    }
    /* vectorizable */
    for (signed char i_4 = 4; i_4 < 22; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (short)15601)) ? (arr_23 [i_4 - 3]) : (2137567294U))));
                                arr_28 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((int) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))));
                                var_22 = ((/* implicit */long long int) var_0);
                                var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4 - 1])) ? (arr_12 [i_4 + 1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((2081514155810091421ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16111)))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) ((unsigned long long int) arr_8 [i_4 + 1]));
                    arr_29 [i_4 - 3] [i_5 + 1] [i_6] = ((/* implicit */unsigned int) ((((arr_7 [i_5 - 1] [i_4 - 4]) + (9223372036854775807LL))) << (((arr_18 [i_4 - 4] [i_4 - 1] [i_5 - 1]) - (1697811124U)))));
                }
            } 
        } 
        var_25 = arr_21 [i_4 - 4] [i_4 - 4] [i_4 - 1];
    }
    var_26 = ((/* implicit */long long int) (((-(14207848553882920464ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
}
