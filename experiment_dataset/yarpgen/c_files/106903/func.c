/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106903
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_6 [i_1] = ((/* implicit */int) 0ULL);
                    var_17 = ((/* implicit */signed char) ((int) max(((short)-32750), (arr_0 [i_0] [i_2]))));
                    var_18 = ((/* implicit */int) min((var_18), (((((max((((/* implicit */int) min((arr_3 [i_0] [i_0]), ((short)-1816)))), (((int) -8LL)))) + (2147483647))) >> (((((((/* implicit */_Bool) max((arr_2 [i_1]), (((/* implicit */unsigned int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_2] [11]), (((/* implicit */unsigned short) arr_0 [i_2] [i_1])))))) : (min((arr_2 [i_0]), (((/* implicit */unsigned int) 26)))))) - (39118U)))))));
                    arr_7 [(short)13] = ((/* implicit */unsigned short) ((unsigned long long int) ((0ULL) | (((/* implicit */unsigned long long int) arr_1 [i_0])))));
                }
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    arr_10 [i_3] = ((/* implicit */signed char) max((((/* implicit */int) max((arr_3 [i_0] [i_1]), (((/* implicit */short) (signed char)-8))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_3]))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)65535)))) <= (3032680463U)));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 0ULL))));
                    arr_13 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1])) != (((/* implicit */int) arr_9 [i_0] [i_0] [i_4] [i_4]))));
                    arr_14 [i_4] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_4]);
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) arr_9 [i_0] [9LL] [i_4] [i_6 - 1]);
                                arr_20 [i_0] [i_1] [i_4] [i_0] [i_6 + 1] = ((((/* implicit */_Bool) arr_17 [i_5] [i_5 + 1] [i_5] [i_5] [i_5 + 1])) ? (arr_15 [i_5 + 1] [i_5] [i_4] [i_6 + 2]) : (((/* implicit */long long int) 24)));
                                var_22 = ((/* implicit */unsigned short) ((short) arr_17 [i_0] [i_1] [i_1] [i_6 + 3] [i_5 - 1]));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5 - 1] [i_4] [i_5])) ? (((/* implicit */int) arr_18 [(unsigned short)10] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_4])) : (((/* implicit */int) arr_18 [i_5] [i_5 - 1] [i_5 + 1] [8LL] [i_4]))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_4]))) : (arr_16 [i_4])));
                }
                var_25 = ((/* implicit */signed char) 1375133248);
                var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 8392098971847557977LL))) ? (((long long int) arr_11 [i_0] [i_0])) : (((/* implicit */long long int) ((unsigned int) arr_11 [4] [i_0])))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) min((((/* implicit */int) (short)16884)), (555595911)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_7 = 2; i_7 < 17; i_7 += 2) 
    {
        var_28 = ((/* implicit */unsigned short) ((long long int) arr_22 [i_7 + 1] [i_7 - 2]));
        arr_23 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_7 - 2] [i_7 - 2])) != (((/* implicit */int) arr_21 [i_7] [i_7 - 1]))));
    }
    var_29 = var_4;
}
