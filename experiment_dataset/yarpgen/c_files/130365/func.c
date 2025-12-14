/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130365
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
    for (short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    arr_7 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((1728251125U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-2506))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [3U])))));
                    var_15 ^= ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_6 [i_2])))) / (((((/* implicit */int) (signed char)-97)) * (((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_0] [0ULL]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (short)10766)), (1051893430)))) ? (max((1728251128U), (((/* implicit */unsigned int) (unsigned char)135)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 1] [i_1] [i_1] [i_0 + 3]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))) * (((2566716160U) / (((/* implicit */unsigned int) -1051893437)))))));
                    arr_8 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1898729903U)) && (((/* implicit */_Bool) 1728251132U))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    arr_11 [i_0] [(signed char)9] [(signed char)9] [(signed char)9] = ((/* implicit */int) ((((/* implicit */_Bool) 2566716170U)) ? (((((5844484545740871659ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))))) >> (((((((/* implicit */int) arr_4 [(short)2] [(short)2] [i_3] [i_1])) ^ (((/* implicit */int) arr_0 [i_1] [i_1])))) + (27286))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-1)) >= (((((/* implicit */_Bool) 2147483615)) ? (((/* implicit */int) arr_10 [11] [i_1] [i_1] [i_0])) : (-1)))))))));
                    arr_12 [i_3] [i_3] [i_1] [(unsigned char)2] &= (((+((+(-1435772264))))) / (((/* implicit */int) min((arr_4 [i_0] [i_0] [i_1] [i_0 + 1]), (((/* implicit */short) arr_1 [i_0 + 1]))))));
                }
                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_6 [i_0]);
                var_16 |= ((/* implicit */unsigned long long int) arr_1 [i_0 + 2]);
                arr_14 [i_0] = ((/* implicit */int) ((((((1150928209) != (1183967914))) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (short)7556)))) != (-1)));
            }
        } 
    } 
    var_17 = ((min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)120)) : (8388607))), (var_10))) ^ (((/* implicit */int) (short)18467)));
    var_18 = ((/* implicit */unsigned long long int) var_9);
}
