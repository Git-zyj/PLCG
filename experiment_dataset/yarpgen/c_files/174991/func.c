/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174991
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
    var_20 = ((/* implicit */unsigned short) max((max((var_11), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) min((((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_19)) - (61))))), (((/* implicit */int) var_9)))))));
    var_21 = (~(((/* implicit */int) var_13)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [(short)4])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1]))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1 - 1])) / (((((/* implicit */_Bool) -8785562408715663203LL)) ? (1180961115) : (((/* implicit */int) var_12))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_2]);
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_3 [i_3] [i_3])), (arr_5 [i_3] [i_3] [14]))), (((/* implicit */long long int) min((var_19), (((/* implicit */signed char) arr_12 [i_3] [i_3]))))))))));
        var_24 += ((/* implicit */unsigned int) var_14);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        var_25 = ((/* implicit */signed char) arr_4 [i_3] [i_3]);
                        /* LoopSeq 4 */
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            arr_22 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_4] [i_4] [i_5 + 4]) & (((/* implicit */long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5 - 3] [i_4] [i_5])))))) : (min((arr_17 [i_5 + 1] [i_5 - 3]), (((/* implicit */long long int) arr_21 [i_3] [i_4] [i_5] [i_5] [i_7]))))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((unsigned int) ((_Bool) (unsigned short)32767))))));
                            var_27 += ((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_3] [i_5 + 1] [0]);
                        }
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            arr_25 [i_4] = ((/* implicit */short) arr_18 [i_8] [i_4] [i_5 + 4] [i_6]);
                            arr_26 [i_3] [i_4] [i_4] [i_4] [i_5] [15] [i_8] = ((/* implicit */_Bool) (+(((((((var_4) | (arr_11 [i_3]))) + (2147483647))) << ((((-(arr_23 [i_3] [(_Bool)1] [i_5] [i_5] [(_Bool)1]))) - (7906995541191887776LL)))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                        {
                            var_28 -= arr_12 [i_3] [i_5];
                            arr_30 [i_3] [i_4] [i_4] [i_6] [1LL] [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((327920020) != (var_0)))))), (((((/* implicit */_Bool) arr_21 [(unsigned short)3] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (arr_7 [i_5] [i_5 - 3] [i_5 - 1])))));
                            arr_31 [i_4] [i_4] [i_4] = ((/* implicit */signed char) min((((unsigned int) arr_28 [i_4] [i_4])), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)48)) - (-1333675120))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_3] [i_3] [i_3] &= ((/* implicit */unsigned char) 652141260U);
                            var_29 = (-(var_10));
                        }
                    }
                } 
            } 
        } 
    }
}
