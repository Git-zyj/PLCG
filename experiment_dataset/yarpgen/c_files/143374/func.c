/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143374
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
    var_11 = ((/* implicit */unsigned long long int) var_2);
    var_12 = ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) 281474976710655ULL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1861577793)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23415)))));
                    var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */int) arr_0 [i_0])) - (((-1744859445) - (-1744859445)))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1])) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (4294967295U))))));
                }
                var_15 ^= ((/* implicit */int) ((min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)64115)), (1744859445)))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_1]))) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) var_0)))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (short i_5 = 2; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) var_8)), (arr_8 [i_4] [i_5 - 1] [i_3 + 3]))))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(1760741125))))));
                                arr_17 [i_0] [i_1] [i_1] [i_3 + 2] [i_3] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 - 1] [i_1] [i_5 - 1]))))) : (((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 2] [i_5] [i_5 - 1])));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned int) (-(511)))), (min((arr_6 [i_0] [i_0] [i_3]), (((/* implicit */unsigned int) arr_11 [i_4] [i_4])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_8 [i_0] [i_1] [i_3]) : (((/* implicit */int) (short)8785)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) ((((-1744859445) + (2147483647))) >> (((((/* implicit */int) var_9)) - (40929))))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (((((1068699682U) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
}
