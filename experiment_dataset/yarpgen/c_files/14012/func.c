/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14012
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
    var_10 = ((/* implicit */short) max((var_10), (min((((short) ((((/* implicit */int) var_0)) + (((/* implicit */int) (short)32756))))), (var_9)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (short)1276))))) - (((/* implicit */int) ((((/* implicit */int) (short)0)) < (((/* implicit */int) var_2)))))))) ? (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) max((var_9), ((short)18296)))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [(short)2] [i_0])) != (((/* implicit */int) (short)-9716)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((short) var_9)), (((/* implicit */short) max((arr_4 [i_1]), (arr_4 [i_1]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] [(signed char)10] = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */short) var_2)), ((short)9716)))) ? (((((/* implicit */int) (short)-1276)) % (((/* implicit */int) arr_9 [(signed char)14] [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) min((((/* implicit */short) var_5)), (var_4)))))), (((/* implicit */int) min((var_2), (max((var_2), (var_2))))))));
                                arr_16 [i_1] = (short)8160;
                                arr_17 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-1276), (((/* implicit */short) var_5))))) ? (((/* implicit */int) min((((/* implicit */short) arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_0 + 1])), (var_0)))) : ((-(((/* implicit */int) (short)-18299))))));
                                arr_18 [i_1] = ((/* implicit */signed char) max((((((/* implicit */int) var_1)) / (((/* implicit */int) (short)32767)))), (((((/* implicit */int) (signed char)8)) - (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_1] [i_1] [i_0 + 1] = var_3;
                }
            } 
        } 
        var_12 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-22527)) : (((/* implicit */int) var_6)))) + ((+(((/* implicit */int) arr_14 [(signed char)2] [i_0 + 1] [i_0] [(signed char)2] [(signed char)2])))))) - (((/* implicit */int) (short)22072))));
    }
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) min((var_1), (var_5)))))) : (((/* implicit */int) var_6)))))));
    var_14 = ((/* implicit */signed char) var_7);
    var_15 = ((/* implicit */short) var_8);
}
