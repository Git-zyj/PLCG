/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160197
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
    var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)))))));
    var_11 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                        {
                            arr_16 [i_4] [i_1 + 1] [i_2] [i_2] [i_0] = ((signed char) ((var_8) | (min((((/* implicit */unsigned long long int) (signed char)-50)), (5283959354226164763ULL)))));
                            arr_17 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (~((~(((int) -1415185773))))));
                            arr_18 [i_0] [i_1 + 2] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) var_6);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                        {
                            var_12 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(signed char)0] [i_2 + 1] [i_3 + 1] [i_3 + 1] [i_3]))) | (var_1)));
                            arr_23 [(unsigned short)13] [i_2] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_2 [i_1 + 1] [i_2 + 1]))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_6] = ((/* implicit */short) arr_6 [i_3] [i_0]);
                            var_13 += ((/* implicit */signed char) min(((+(((/* implicit */int) arr_20 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1 + 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        }
                        var_14 |= ((/* implicit */signed char) var_0);
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */_Bool) ((signed char) ((signed char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_27 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_0]))))) ? (min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (7262885195536974411ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)17600)) : (((/* implicit */int) arr_6 [i_0] [i_0]))))))) : (max((arr_8 [i_0] [i_0] [i_0] [i_0]), (18446744073709551615ULL)))));
        arr_28 [i_0] = ((signed char) ((((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))))) ^ (max((var_3), (((/* implicit */unsigned long long int) arr_9 [(signed char)14] [i_0] [(signed char)14] [i_0] [i_0] [i_0]))))));
        arr_29 [i_0] [5LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7931177477980910977ULL)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)65535))));
    }
}
