/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174285
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 += arr_7 [i_0] [i_1] [i_1];
                    var_13 = ((/* implicit */_Bool) (((+(((/* implicit */int) var_11)))) * (((/* implicit */int) var_1))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 *= ((_Bool) max((((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_10))));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((var_4) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0]), ((!(var_11)))))) : (((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) | (((arr_5 [i_1] [i_1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_0] [i_1] [(_Bool)1])))))))))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) var_6)))) : (((arr_0 [i_1]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_2])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */int) max((var_10), (var_6)))) <= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_5 - 1])) > (((/* implicit */int) ((_Bool) (_Bool)1))))))))));
                        var_18 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(_Bool)0] [i_1])) | (((/* implicit */int) ((_Bool) (_Bool)1)))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_18 [i_0] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        var_19 *= ((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_6] [i_6] [i_6]))))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */int) var_0)), ((~(((/* implicit */int) var_4)))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_21 = ((((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))) && (arr_20 [i_0] [i_1] [i_2] [i_7]));
                        var_22 = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                        var_23 = (!(((_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_7] [i_2] [(_Bool)1] [i_7]))))));
                    }
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */_Bool) ((((((((/* implicit */int) var_1)) * (((/* implicit */int) var_11)))) - (((/* implicit */int) var_10)))) | (((/* implicit */int) var_8))));
}
