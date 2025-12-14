/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162017
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] |= ((/* implicit */_Bool) -227396028);
                    var_18 = ((/* implicit */short) (((_Bool)1) ? (((arr_7 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) arr_8 [i_0])))));
                    var_19 = ((/* implicit */short) min((var_19), (var_13)));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (short)27962))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (var_11)));
                    }
                    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (((var_11) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_13), (((/* implicit */short) var_10)))))))))));
                        arr_18 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (min((493509964), (((/* implicit */int) arr_9 [i_2] [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) ? (-1016813517) : (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5636)))), (((/* implicit */int) max(((_Bool)0), (var_11))))))));
                    }
                    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_21 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))) ? (((int) var_16)) : (((/* implicit */int) var_0))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0] [i_0])), (var_15)))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((short) arr_5 [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) var_17)) : (-1206172972));
                        arr_22 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */short) ((min((((_Bool) arr_4 [i_0])), (((((/* implicit */int) (short)-3991)) == (1036205383))))) ? (((/* implicit */int) ((_Bool) var_15))) : (((min(((_Bool)1), ((_Bool)1))) ? ((((_Bool)1) ? (((/* implicit */int) arr_9 [i_2] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))) : (min((((/* implicit */int) (_Bool)0)), (-1531302737)))))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_4);
}
