/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16828
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
    var_18 += ((unsigned int) min((-6530709928986552613LL), (((/* implicit */long long int) ((_Bool) 1087866695U)))));
    var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) 3207100601U)) : (17128872543725956746ULL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned short) var_1);
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) 1087866700U)), (arr_6 [i_0 - 1] [(_Bool)1] [i_2])))) ? (max((var_17), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1] [(_Bool)1]))))) >= (((((/* implicit */_Bool) ((long long int) arr_2 [i_2] [i_1 - 1] [4]))) ? (((/* implicit */long long int) ((/* implicit */int) (short)13615))) : (-1LL)))));
                }
            } 
        } 
    } 
}
