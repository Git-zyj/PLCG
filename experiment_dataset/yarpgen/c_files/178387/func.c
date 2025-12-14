/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178387
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) (+(((max((var_5), (var_7))) ? (((/* implicit */int) (_Bool)1)) : (((arr_3 [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))));
        var_15 = ((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) max(((_Bool)1), (arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) (_Bool)0)))));
        var_16 = ((/* implicit */_Bool) max((((/* implicit */int) min((((_Bool) (_Bool)1)), (var_4)))), (((arr_3 [i_0]) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) var_4))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 *= ((/* implicit */_Bool) (+((+(((/* implicit */int) ((_Bool) var_3)))))));
                    var_18 = (!(((/* implicit */_Bool) max((((var_10) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) var_8))))))));
                    var_19 = var_1;
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), ((!(((_Bool) (_Bool)0))))));
                                var_21 = arr_10 [i_1] [i_4] [i_1];
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) (+(((var_9) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) var_2))))));
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((arr_3 [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) var_10))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_24 = ((_Bool) ((arr_15 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_7]) ? (((/* implicit */int) arr_15 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_7])) : (((/* implicit */int) var_1))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_8 [i_1]))) / (((arr_8 [i_6]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_1]))))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (!((_Bool)1)))), ((-(((/* implicit */int) arr_24 [i_1] [i_6] [i_6]))))))) ? (((/* implicit */int) ((_Bool) arr_16 [i_7 - 1]))) : (((arr_14 [i_1] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [i_7 - 1]))))));
                }
            } 
        } 
        var_27 = (!(((((/* implicit */int) arr_21 [i_1] [i_1])) >= (((/* implicit */int) (_Bool)1)))));
        var_28 = ((/* implicit */_Bool) ((((_Bool) arr_24 [i_1] [i_1] [i_1])) ? ((-((+(((/* implicit */int) var_6)))))) : (((/* implicit */int) ((_Bool) ((arr_4 [(_Bool)1] [i_1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))))));
    }
    var_29 = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_6))))));
    var_30 = ((((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))) < (((/* implicit */int) (_Bool)1)));
    var_31 = (_Bool)1;
}
