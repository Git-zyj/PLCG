/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108009
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
    var_17 = ((/* implicit */unsigned long long int) ((long long int) (-((-(615857994U))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min((((unsigned short) (!(((/* implicit */_Bool) var_15))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [i_0] [i_2]))))))));
                    var_19 = ((/* implicit */int) ((long long int) (-(min((((/* implicit */long long int) var_5)), (var_8))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) ((unsigned int) (signed char)127))), (min((((/* implicit */long long int) var_1)), (var_12))))));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (long long int i_5 = 2; i_5 < 20; i_5 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) ((_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_3] [i_3 + 4] [i_5] [i_3]))))), (max((arr_9 [i_3]), (((/* implicit */unsigned long long int) arr_14 [i_5])))))));
                    var_22 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) ((signed char) var_13))), (((unsigned long long int) var_8))))));
                }
            } 
        } 
    } 
}
