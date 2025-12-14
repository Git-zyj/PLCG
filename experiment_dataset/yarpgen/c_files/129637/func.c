/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129637
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
    var_12 = 52266742;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_13 = min((var_1), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))));
                                var_14 &= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 101477038)) ? (422855429) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_0])))), (((/* implicit */int) (signed char)35))))) ? (422855442) : (min((max((arr_6 [i_0] [i_1] [i_2] [i_2]), (arr_5 [i_0] [i_1] [i_3]))), (min((422855427), (422855426))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_3 [(signed char)1] [(signed char)8] [i_2])) : (-2147483640)))))));
                    var_16 = ((/* implicit */signed char) min((2147483647), (((/* implicit */int) (signed char)84))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) max((var_17), ((-(((/* implicit */int) arr_13 [i_0] [i_0] [6] [(signed char)5] [(signed char)5]))))));
                                var_18 = ((/* implicit */int) arr_7 [i_0] [12] [i_0] [i_1] [11]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
