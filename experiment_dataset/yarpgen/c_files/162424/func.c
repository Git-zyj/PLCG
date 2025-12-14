/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162424
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) var_0)))) : (((var_9) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((arr_7 [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))), (((/* implicit */int) ((arr_1 [(_Bool)1]) && (arr_0 [i_2] [i_0]))))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) : ((+((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))));
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((((arr_9 [i_3]) ? (((/* implicit */int) arr_14 [i_5] [i_3])) : (((/* implicit */int) arr_18 [i_3] [i_4] [i_4] [i_5])))) * ((~(((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) arr_15 [i_4]))));
                    arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(_Bool)1])) - (((/* implicit */int) arr_18 [(_Bool)1] [i_4] [(_Bool)1] [i_5]))))) ? (((/* implicit */int) max((arr_11 [i_5]), (arr_16 [(_Bool)1] [i_4] [i_5])))) : (((/* implicit */int) (!(arr_12 [i_5] [i_4] [i_3])))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(_Bool)1] [i_4] [(_Bool)1])) / (max(((~(((/* implicit */int) arr_16 [i_3] [(_Bool)1] [i_5])))), (((/* implicit */int) arr_13 [i_3] [i_4] [i_3])))))))));
                    arr_20 [i_5] = (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))));
                    var_17 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_11 [i_5])))), (((/* implicit */int) arr_9 [i_3]))));
                }
            } 
        } 
    } 
}
