/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149888
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
    var_17 = ((/* implicit */short) var_4);
    var_18 = ((/* implicit */_Bool) 2124587413);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 2])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1 + 2]))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (4000504448033550905LL)));
                            arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)30775)) : (arr_4 [i_1] [14ULL])))) ? (arr_0 [i_0] [i_1 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (signed char)6)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
