/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131675
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) ((short) 1926287585))) < (((/* implicit */int) (!(arr_9 [i_2])))))) ? (((((((/* implicit */long long int) -1926287585)) <= (arr_6 [i_3]))) ? (((arr_12 [i_0] [i_1] [i_0] [i_3]) ? (2561913270U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2]))))) : (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_9)))), (min((((/* implicit */int) var_1)), (1926287588))))))));
                            arr_14 [i_3] [i_3] [i_2] [i_3] [i_3] [i_3] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (arr_5 [i_1] [i_1 - 2] [i_1 - 2])))));
                            var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 1])))))))));
                        }
                    } 
                } 
                arr_15 [i_1] [i_0] &= ((/* implicit */unsigned int) (~(max((((((/* implicit */unsigned long long int) -1926287585)) - (arr_0 [i_0]))), (((arr_1 [i_0]) & (970536102250648366ULL)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) min((var_5), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    var_12 &= ((/* implicit */int) var_3);
}
