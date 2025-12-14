/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149547
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
    var_11 = ((/* implicit */short) (-(min((max((var_6), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_3] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) arr_12 [i_3])))))));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) arr_0 [i_1 - 3])) : (((/* implicit */int) var_9))))) | (arr_5 [i_1 - 1] [i_1] [i_3])));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) (_Bool)1);
                    var_14 = ((/* implicit */unsigned int) var_10);
                }
                var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_1] [(signed char)6] [i_1 - 1] [2])) : (((/* implicit */int) arr_10 [i_1] [i_0] [i_0] [i_1])))), (min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_10 [i_1] [i_0] [i_0] [i_1 - 3]))))));
            }
        } 
    } 
}
