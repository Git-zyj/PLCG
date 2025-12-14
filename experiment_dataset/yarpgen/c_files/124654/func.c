/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124654
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
    var_14 = var_7;
    var_15 = var_1;
    var_16 = var_2;
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((min((arr_4 [i_1] [i_0]), (arr_0 [i_0]))) - (min((arr_0 [i_0]), (arr_4 [i_0] [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] [i_2 + 2] [i_3 + 1] [i_0] = (+(-805944402));
                                arr_14 [i_0] [i_3 - 2] [i_2] = ((((/* implicit */_Bool) min((arr_11 [i_1] [i_1] [i_2 - 2] [i_2 - 3] [i_3 + 2]), (arr_11 [i_0] [i_2 + 2] [i_2 - 2] [i_2 - 2] [i_3 + 2])))) ? ((~(arr_11 [i_0] [i_0] [i_2 - 2] [i_2 - 2] [i_3 + 2]))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_2 + 3] [i_2 - 2] [i_3 - 2] [i_3 + 2] [i_3 + 3])) ? (arr_10 [i_0] [i_0] [i_2 - 2] [i_2 - 3] [i_3 + 2] [i_3 + 3]) : (var_6))));
                                var_19 = 151271042;
                                arr_15 [0] [0] [i_2 + 3] [0] [i_3 - 1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) -151271039)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
