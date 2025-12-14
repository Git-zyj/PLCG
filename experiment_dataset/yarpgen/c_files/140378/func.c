/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140378
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
    var_12 = (_Bool)0;
    var_13 = var_0;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 *= (_Bool)1;
        arr_2 [i_0] [i_0] = ((_Bool) (+(((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = (_Bool)1;
        var_15 = ((min(((!(var_10))), (max(((_Bool)1), (arr_0 [i_0] [i_0]))))) && ((_Bool)1));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_5 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [i_3] = ((_Bool) ((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), ((~(((/* implicit */int) arr_17 [i_3] [i_4] [i_3]))))));
                                var_17 += (_Bool)1;
                                var_18 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_10 [i_5] [i_4] [i_3])))) ^ (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max(((~(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_7 [i_1] [i_7 - 1])))))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (var_3)));
                                arr_25 [i_2] [i_3] = max((var_10), (arr_24 [i_3] [i_2] [i_3] [i_7 - 1]));
                                var_21 = min(((!((_Bool)1))), (min((var_4), (max((arr_10 [i_6 + 1] [i_2] [i_1]), (arr_7 [i_1] [i_6 + 1]))))));
                                arr_26 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] = arr_24 [i_3] [i_6 + 1] [i_3] [i_6 + 1];
                            }
                        } 
                    } 
                    var_22 *= (_Bool)1;
                }
            } 
        } 
        var_23 += (!(((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_5)))), (((/* implicit */int) (_Bool)1))))));
    }
}
