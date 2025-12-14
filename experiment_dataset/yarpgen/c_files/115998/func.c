/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115998
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
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) arr_2 [i_1] [i_1]);
                var_21 += ((/* implicit */unsigned int) -1236830315);
                arr_6 [i_1] [18] [i_1] = ((/* implicit */_Bool) ((((_Bool) (~(32512U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (8784175841180803686ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))))))))) : ((~(min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) 2048))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2254769601U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (0U)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)8))))));
    var_23 = ((/* implicit */int) var_8);
}
