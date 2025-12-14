/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153028
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
    var_17 = ((/* implicit */unsigned int) (-(max((((((/* implicit */int) (short)-10042)) * (((/* implicit */int) (short)-10044)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 + 2] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_14))) ? (min((((/* implicit */unsigned int) (short)-30480)), (arr_0 [(short)9]))) : (((arr_0 [(short)3]) % (var_15)))))) ? (max((arr_0 [i_0]), (((/* implicit */unsigned int) min((arr_1 [i_0]), (arr_1 [i_0 + 2])))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) | (arr_0 [i_0 + 3]))));
        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) min(((short)-1), ((short)22711))))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (arr_0 [i_0 + 1])));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) arr_1 [i_1]);
        var_21 &= var_14;
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (var_15))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (short i_3 = 4; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_3] = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_8)))) % (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_10 [i_3 + 2])) : (((/* implicit */int) var_6))))));
                    var_23 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1] [5U])) << (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))) - (3550)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            arr_18 [i_5] [i_5] = ((/* implicit */signed char) arr_15 [i_5]);
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_13 [i_5 + 3])) : (((/* implicit */int) arr_13 [i_5 - 1]))));
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((signed char) arr_16 [i_4])))));
            var_26 = ((/* implicit */unsigned int) max((var_26), (((((/* implicit */_Bool) (short)-10068)) ? (arr_17 [i_4] [i_4] [(signed char)14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
            arr_19 [i_5] [14U] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) 2207336991U))));
        }
        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((((/* implicit */int) var_10)) + (18))) - (3))))))));
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((arr_17 [i_4] [i_4] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4]))))))));
        arr_20 [(short)5] = ((/* implicit */signed char) (~(var_15)));
    }
}
