/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143856
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_1] [i_0])))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((((/* implicit */int) arr_4 [i_2])) + (2147483647))) << (((((((/* implicit */int) arr_4 [i_3])) + (29))) - (11))))) != (((/* implicit */int) ((signed char) arr_4 [i_0])))));
                            arr_12 [i_3] [i_2] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_3] [(signed char)7] [i_2] [i_0] [(_Bool)1] [i_0])) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [4LL] [4LL] [i_2]))) < (var_8)))))) ? (min((((/* implicit */unsigned int) arr_6 [i_2])), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)715), (((/* implicit */unsigned short) arr_9 [i_2]))))))));
                            var_19 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) -1273167759)) / (((((/* implicit */long long int) ((/* implicit */int) (signed char)-29))) + (5868545461424181425LL))))) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [6ULL] [i_2] [i_1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) ((((/* implicit */int) var_16)) / (var_10)))));
}
