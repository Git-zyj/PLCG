/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129044
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
    for (long long int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                arr_6 [4ULL] [4ULL] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)62462))));
                arr_7 [4ULL] [(signed char)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3977107799U) / (((/* implicit */unsigned int) 2070021627))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1]))))) : ((~(((/* implicit */int) arr_2 [i_0] [i_1 + 2]))))));
                arr_8 [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)62462))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3073))))), (((((/* implicit */int) (unsigned char)246)) - (((/* implicit */int) arr_3 [i_1] [i_1 + 3] [i_0])))))) : (((((/* implicit */int) arr_4 [i_0 - 1] [i_1 + 3])) / (((/* implicit */int) ((unsigned char) var_14))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (!(((_Bool) ((((/* implicit */_Bool) (unsigned short)3073)) && (((/* implicit */_Bool) var_4)))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            {
                arr_13 [i_2] [i_2 + 1] [i_2 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) min((((_Bool) arr_12 [i_3])), (arr_10 [i_2]))))));
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((_Bool) arr_9 [i_2] [i_2]))))), ((+(min((((/* implicit */int) (unsigned short)62463)), (327000249)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_14);
}
