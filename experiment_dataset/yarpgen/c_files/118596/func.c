/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118596
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
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)7173))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_0 [i_0 + 1])))))) / (min((-5737235378153690232LL), (((/* implicit */long long int) (unsigned short)7173))))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 14; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_0] [10LL] [(unsigned short)8] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) arr_13 [i_2] [i_1] [i_3 - 1] [i_0 + 1] [i_1 - 1]))))) ? (((/* implicit */int) max(((unsigned short)7170), (((/* implicit */unsigned short) (short)17387))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (5803634429321780952LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48643)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21749))) <= (1750283229U))))))));
                            arr_16 [i_0] [i_1 + 3] [(unsigned short)4] [i_0] = min((var_11), (((/* implicit */unsigned int) min(((unsigned short)58361), ((unsigned short)7174)))));
                            var_15 |= ((/* implicit */unsigned short) min((((/* implicit */long long int) min(((unsigned short)15626), ((unsigned short)49910)))), (5915576871305228238LL)));
                            arr_17 [i_0] [i_4] = ((/* implicit */unsigned short) max((var_7), ((-(min((((/* implicit */long long int) arr_5 [i_1] [i_2] [i_0])), (arr_7 [i_4])))))));
                        }
                    } 
                } 
                arr_18 [i_0 - 1] [2] [i_0] = ((/* implicit */int) var_8);
                arr_19 [i_0 - 1] [i_0] [i_0] [(_Bool)1] = (i_0 % 2 == 0) ? (((/* implicit */int) ((arr_5 [(short)13] [(short)13] [i_0]) == (((arr_12 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] [i_0] [i_0] [(unsigned short)4]) << ((((-(arr_3 [i_0] [i_1]))) - (1177690948)))))))) : (((/* implicit */int) ((arr_5 [(short)13] [(short)13] [i_0]) == (((((arr_12 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] [i_0] [i_0] [(unsigned short)4]) + (2147483647))) << ((((((-(arr_3 [i_0] [i_1]))) - (1177690948))) - (1))))))));
                var_16 += ((/* implicit */signed char) var_9);
            }
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    for (short i_7 = 2; i_7 < 13; i_7 += 2) 
                    {
                        {
                            arr_27 [i_0] [i_1] [i_5] [i_0] [i_7] = ((/* implicit */int) ((((/* implicit */int) min(((unsigned short)21749), (((/* implicit */unsigned short) (short)128))))) > ((-(((/* implicit */int) var_2))))));
                            arr_28 [i_0] = ((((/* implicit */int) arr_20 [i_0] [i_1 + 2] [0LL] [i_0])) < (((((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (arr_3 [(short)11] [i_7 + 2]) : (arr_6 [i_0] [(unsigned short)0] [i_5]))) - (((/* implicit */int) ((-11) <= (((/* implicit */int) (unsigned short)15648))))))));
                            arr_29 [i_0] [i_5] [i_6] = ((/* implicit */_Bool) (unsigned short)49910);
                        }
                    } 
                } 
            } 
            arr_30 [i_0] = ((/* implicit */signed char) arr_14 [i_0] [2U]);
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((arr_26 [(unsigned short)4] [i_0 + 1] [i_1] [i_0 + 1]) / (-1))), (min((((((/* implicit */int) (short)-14183)) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((signed char)-121), (((/* implicit */signed char) (_Bool)1))))))))))));
            var_18 = ((/* implicit */int) ((arr_10 [i_0] [i_0] [i_1 + 1] [i_1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) arr_21 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_4 [i_1 + 2] [i_0 + 1])))))));
        }
        /* vectorizable */
        for (short i_8 = 1; i_8 < 14; i_8 += 3) /* same iter space */
        {
            arr_33 [i_0 + 1] [i_8 - 1] [i_0] = ((/* implicit */unsigned int) arr_21 [i_0] [i_0 + 1]);
            arr_34 [8] [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0 + 1]);
        }
        arr_35 [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1]))))));
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((var_6), (var_2))))) / (var_9)));
}
