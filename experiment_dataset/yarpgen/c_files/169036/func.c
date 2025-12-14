/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169036
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8381146457234469403ULL)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) : (min((max((((/* implicit */unsigned int) var_11)), (var_17))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1468022013650022698LL)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
                {
                    arr_7 [(signed char)12] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (((((/* implicit */_Bool) (short)-12282)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_3 [i_0] [i_1])))) : (((/* implicit */int) arr_3 [i_0] [i_2]))));
                    arr_8 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_2])) ? (arr_5 [i_1]) : (arr_2 [i_0] [i_0] [i_0]));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))) ? ((+(arr_1 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_14))))));
                }
                for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    arr_17 [i_0] [(unsigned char)8] [14LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_14 [i_0] [i_4] [i_4] [i_4]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_0])) ? (arr_5 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((1468022013650022698LL) < (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_4]))))))) : (-1468022013650022698LL))) : (((/* implicit */long long int) var_3))));
                    arr_18 [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((short) 7832702055503131551ULL))), (var_6)));
                }
                for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    arr_22 [i_0] [i_0] [12ULL] = -1468022013650022715LL;
                    arr_23 [10LL] = ((/* implicit */unsigned char) ((unsigned int) max((arr_20 [i_1]), (arr_20 [i_0]))));
                }
                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))))), (((((/* implicit */unsigned int) (+(690074474)))) ^ (min((var_5), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_1]))))))));
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    arr_27 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_19 [i_6] [i_1] [i_6])))) ^ (((/* implicit */int) var_18))))));
                    arr_28 [i_0] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (max((arr_25 [i_0] [i_1] [i_6]), (arr_0 [i_0] [i_0]))) : ((+((+(-1468022013650022698LL)))))));
                    arr_29 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_6])) ? (arr_13 [i_0] [i_1] [i_6]) : (arr_13 [6LL] [i_1] [(short)7])))) ^ (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_6])) : (var_3)))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */int) var_18))))))));
    var_21 |= ((/* implicit */long long int) ((unsigned int) var_6));
    var_22 = ((/* implicit */signed char) var_0);
}
