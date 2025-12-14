/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117019
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
    var_13 -= ((/* implicit */unsigned char) 13755089508380556945ULL);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((var_7) < (((/* implicit */long long int) arr_0 [i_2])))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 2] [i_2])) ? (4691654565328994655ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2 + 2] [i_0]))))) : (((/* implicit */unsigned long long int) -4501654777361734662LL))));
                    arr_8 [i_0] [i_0] = ((/* implicit */int) ((max((arr_3 [i_2 + 2]), (((/* implicit */unsigned long long int) arr_5 [i_2 + 1] [i_1] [i_2])))) != (max((arr_3 [i_2 + 1]), (((/* implicit */unsigned long long int) arr_4 [i_2 - 1] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_4);
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)255)), ((~(((((/* implicit */_Bool) -8530468900991233960LL)) ? (((/* implicit */unsigned long long int) var_10)) : (4691654565328994670ULL)))))));
}
