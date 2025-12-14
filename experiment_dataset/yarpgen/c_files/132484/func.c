/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132484
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_2 [10ULL] [i_1]);
                var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned char) arr_2 [i_0] [i_1]))))) ^ (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_1 [i_0] [i_1]) : (arr_3 [i_1])))))) ? ((+(((((/* implicit */_Bool) arr_1 [18ULL] [i_1])) ? (((/* implicit */unsigned int) arr_1 [i_1] [i_0])) : (1928688208U))))) : ((~(var_0)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 4; i_3 < 10; i_3 += 1) 
        {
            {
                arr_11 [i_2] = ((/* implicit */unsigned short) (-((-(arr_9 [i_3 - 4] [i_2])))));
                arr_12 [i_3 - 4] = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (-1632719809) : (((/* implicit */int) arr_8 [i_2] [i_2])))))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_3]))))) << (((((/* implicit */_Bool) 2532071492U)) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_2]))))))));
            }
        } 
    } 
}
