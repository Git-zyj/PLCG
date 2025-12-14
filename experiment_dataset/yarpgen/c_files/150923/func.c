/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150923
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (signed char)115))));
            var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [11] [i_0] [11])) : (((/* implicit */int) (signed char)-110)))) * (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 2]))));
            arr_4 [(signed char)6] = ((((/* implicit */_Bool) -1446692391)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_0] [(signed char)1] [i_1 - 1])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_3)))));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_3 [i_1] [i_0] [i_0]))));
        }
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_0 [i_0]))));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_17 = ((/* implicit */int) min((var_17), (var_11)));
        var_18 = ((/* implicit */int) min((var_18), (min((((/* implicit */int) arr_5 [i_2] [i_2])), (min((max((((/* implicit */int) arr_6 [i_2])), (1797674736))), (((((/* implicit */int) arr_5 [i_2] [(short)8])) % (((/* implicit */int) arr_5 [i_2] [i_2]))))))))));
        arr_7 [i_2] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) ((((/* implicit */int) var_5)) != (0))))))), (max((((int) (signed char)113)), (((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (1979617736) : (((/* implicit */int) var_12))))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) -1797674742))));
    }
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) ((((/* implicit */int) (short)19619)) > (((/* implicit */int) (signed char)-1)))))))) ? (((/* implicit */int) var_4)) : (max(((-(((/* implicit */int) (signed char)112)))), (((/* implicit */int) ((((/* implicit */int) (short)-13)) > (((/* implicit */int) (signed char)3))))))));
    var_21 = ((/* implicit */short) var_1);
    var_22 = var_7;
}
