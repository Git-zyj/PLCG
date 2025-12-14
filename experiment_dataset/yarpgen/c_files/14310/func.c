/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14310
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
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-26705))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1])))))));
        }
        arr_7 [i_0] = ((/* implicit */short) max((((/* implicit */int) (short)22)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0 + 1])) : (((/* implicit */int) arr_5 [i_0 + 1]))))));
    }
    for (short i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_2 + 4])))))));
        var_22 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
    }
    for (short i_3 = 1; i_3 < 10; i_3 += 3) /* same iter space */
    {
        var_23 -= ((/* implicit */short) ((((/* implicit */int) ((short) arr_10 [i_3 + 1]))) / (((/* implicit */int) var_2))));
        var_24 = max((max((var_11), (min((arr_2 [i_3]), ((short)(-32767 - 1)))))), (arr_5 [i_3 + 1]));
        arr_12 [(short)2] = ((/* implicit */short) (((~(((/* implicit */int) (short)-5201)))) << (((((((/* implicit */int) var_8)) - (((/* implicit */int) min((var_4), ((short)5200)))))) - (25536)))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_13)))))));
    }
    for (short i_4 = 1; i_4 < 10; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_5 = 4; i_5 < 13; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_18 [i_6] [i_5 - 4] [i_5] [i_5]))))) ? ((~(((/* implicit */int) arr_22 [i_5] [i_5 - 2] [i_5 - 4] [i_5 - 4] [i_5 - 1] [i_5 - 2])))) : ((~(((/* implicit */int) arr_11 [i_4 + 3] [i_5 - 2]))))));
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_5)) : (max((((((/* implicit */_Bool) arr_17 [i_4] [i_5] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_14 [(short)12])))), (((/* implicit */int) min(((short)5200), (arr_11 [i_6] [i_8]))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) ((((((/* implicit */int) arr_20 [(short)6] [i_5 - 2])) ^ (((/* implicit */int) arr_17 [i_4] [i_4 - 1] [i_5 - 4])))) * (((/* implicit */int) arr_17 [i_4] [i_5] [i_6]))));
                }
            } 
        } 
        var_29 -= ((/* implicit */short) (-(((/* implicit */int) var_5))));
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) max((((/* implicit */int) min((var_9), (max(((short)-5186), (var_10)))))), ((-(((/* implicit */int) arr_13 [(short)4])))))))));
    }
    var_31 = var_14;
}
