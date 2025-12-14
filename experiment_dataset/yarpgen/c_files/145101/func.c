/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145101
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
    var_10 -= ((/* implicit */_Bool) (((!(max(((_Bool)1), (var_5))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
    var_11 = ((/* implicit */_Bool) ((max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) min(((_Bool)1), (var_7)))))) << (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = var_2;
                            var_13 = (!(min((((var_0) && ((_Bool)0))), (((_Bool) (_Bool)1)))));
                            arr_9 [i_0] [(_Bool)1] [(_Bool)1] &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */int) min((var_9), (arr_7 [i_0] [i_1] [i_2] [i_2])))) <= (((((/* implicit */int) ((_Bool) var_9))) ^ (((/* implicit */int) (_Bool)1))))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_15 &= ((((((/* implicit */int) var_1)) == (((/* implicit */int) var_1)))) && (var_4));
                                arr_12 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] [i_4] = (!(arr_4 [i_2] [i_0] [i_0]));
                                var_16 -= ((/* implicit */_Bool) ((((/* implicit */int) min((var_5), ((_Bool)1)))) << (((/* implicit */int) arr_8 [i_0 - 1] [(_Bool)1] [i_0] [i_0 - 1]))));
                                arr_13 [i_0] [i_1] [i_2] [(_Bool)1] [i_4] = min(((_Bool)1), (((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))));
                            }
                        }
                    } 
                } 
                arr_14 [i_0] = (!(max((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_4 [(_Bool)1] [i_0 - 1] [i_0 - 1]))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_5)) + (((/* implicit */int) ((_Bool) var_7))))))))));
            }
        } 
    } 
    var_18 = var_3;
    var_19 = (((_Bool)1) && (var_4));
}
