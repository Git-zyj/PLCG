/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185070
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) max((arr_4 [i_1] [i_1]), (((/* implicit */int) (unsigned short)63))))) <= ((-(max((((/* implicit */long long int) 1956691670U)), (arr_1 [i_0] [i_0])))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_3 + 1]);
                                var_12 = ((/* implicit */signed char) var_10);
                                arr_12 [i_0] [i_2] [i_0] [i_2] [i_4] = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0]);
                                arr_13 [i_1] [i_3] [i_2 + 1] [i_1] [i_1] [i_0] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)63)))))))) || (((/* implicit */_Bool) arr_1 [i_0] [i_1]))));
                                arr_14 [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned short) -2142345693))) ? ((~(-1LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 1] [i_3] [i_2 + 1])) ? (((/* implicit */int) (unsigned short)65473)) : (((/* implicit */int) (unsigned short)46812))))))) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_1])))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned short) ((signed char) arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1]));
                    arr_15 [i_2] = ((((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65480))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2 - 1] [i_2 - 1]))))))) * (var_10));
                    var_14 = ((/* implicit */long long int) ((((arr_2 [i_1] [i_1]) + (2147483647))) << (((arr_4 [i_0] [i_2]) - (7135596)))));
                }
                for (signed char i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    arr_20 [i_5] = (((-(((/* implicit */int) ((unsigned short) arr_8 [i_5] [i_1] [i_0] [i_0]))))) % (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (unsigned short)84)) : (arr_9 [i_5 - 1] [i_5 - 1] [i_5 + 2]))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)68)) ? (3504862890U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65452)))));
                }
                for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        arr_25 [i_7] [i_1] [i_6] [i_1] [8] [8] = ((/* implicit */_Bool) (+(((int) arr_9 [i_7] [i_7] [i_7]))));
                        arr_26 [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0] [i_6] [i_7])) <= (-1620603383)));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_2 [i_6] [i_1]))));
                    }
                    var_17 = ((/* implicit */unsigned int) ((unsigned char) 32767));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_10);
    var_19 = ((/* implicit */int) var_3);
}
