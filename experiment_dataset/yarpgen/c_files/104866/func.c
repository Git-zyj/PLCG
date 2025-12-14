/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104866
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_7 [i_1] [i_0] [i_2] [i_2] = ((/* implicit */long long int) (~(arr_4 [i_2])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) arr_6 [i_4] [i_4 - 2] [i_4 - 1] [i_4 - 2])) ? ((~(arr_5 [i_2] [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_4])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)4] [i_0] [i_4] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_2]))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_2] [i_4])) ? (arr_11 [i_0] [(signed char)5] [i_1] [i_2] [i_3] [i_4 + 2]) : (arr_4 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0]))))));
                            }
                        } 
                    } 
                    var_13 = arr_6 [i_0] [i_1] [i_1] [i_2];
                    var_14 = ((/* implicit */signed char) (-(arr_3 [i_0] [i_0] [i_0])));
                }
                arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) - (arr_1 [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [(signed char)16] [i_0])) % (((/* implicit */int) arr_12 [i_0] [15ULL] [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_4 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [(signed char)12] [i_1]))))))))) : ((+(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0] [16ULL] [12ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_0])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27743)) || (((/* implicit */_Bool) (signed char)-1))));
}
