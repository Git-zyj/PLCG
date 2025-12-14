/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130165
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
    var_18 = ((((/* implicit */int) var_8)) <= (((/* implicit */int) ((_Bool) var_1))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((_Bool) var_0);
        var_20 = ((/* implicit */_Bool) min((((arr_0 [i_0]) ? (((/* implicit */int) min(((_Bool)1), (var_1)))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) arr_0 [i_0])))))));
    }
    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) min((var_4), (var_9))))));
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_22 -= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) < ((-(((/* implicit */int) var_7)))))))));
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (((+(((/* implicit */int) arr_4 [(_Bool)1])))) - (((/* implicit */int) min(((_Bool)1), (var_4)))))))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    arr_10 [i_2] [i_3] = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */int) min(((_Bool)1), (var_1)))) : (((/* implicit */int) ((_Bool) var_11)))));
                    var_24 &= ((min(((!(var_3))), (((var_2) || (var_14))))) && (((/* implicit */_Bool) min(((-(((/* implicit */int) arr_0 [i_1])))), (((var_11) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                }
            }
        } 
    } 
}
