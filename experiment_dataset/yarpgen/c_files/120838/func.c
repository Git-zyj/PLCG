/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120838
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1]) <= (arr_2 [i_0 + 1])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_1] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_8 [i_2] [i_1] [i_1 + 1] [i_3 + 2] [i_0 + 1] [4ULL])) : (((/* implicit */int) var_0))));
                        arr_10 [i_1] [i_2] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_16 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                            var_17 = ((unsigned long long int) ((unsigned long long int) (_Bool)1));
                            var_18 = ((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_3 + 3]) : (arr_1 [i_3 - 1])));
                            var_19 = ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))) : (((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [3ULL] [i_1] [i_3] [(_Bool)1] [i_3]))))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0 + 1]) : (arr_2 [i_2])));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 1) 
                        {
                            arr_18 [15ULL] [i_1] [i_2] [(_Bool)1] [i_1] [i_0 + 1] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (arr_11 [(_Bool)1] [i_1 + 1] [i_2] [i_3] [i_5 + 2] [0ULL] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                            var_21 &= ((_Bool) (+(var_3)));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            arr_23 [i_0 + 1] [i_6 + 2] [i_2] [i_3] [(_Bool)1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((arr_8 [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6] [i_6] [i_6 - 1]) || ((_Bool)0)));
                            var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                            var_23 = ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (arr_1 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 + 1] [i_1] [i_1] [i_3] [i_6] [(_Bool)1]))));
                        }
                    }
                    var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) ((arr_2 [i_0 + 1]) << (((/* implicit */int) arr_12 [i_0] [i_0] [(_Bool)1] [i_0 + 1] [8ULL] [12ULL]))));
        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [(_Bool)1] [i_0 + 1])) << (((arr_20 [i_0 + 1] [i_0] [i_0 + 1] [4ULL] [i_0]) - (999358943322047371ULL)))));
        arr_24 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) (_Bool)1)));
    }
    var_27 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_10))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (17900078857032825923ULL)))))));
}
