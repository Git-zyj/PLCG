/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16109
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0 - 1] = 998679399U;
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */short) 3296287896U);
            var_14 = ((/* implicit */signed char) (-(arr_5 [i_0] [i_1])));
            var_15 += ((/* implicit */short) arr_3 [i_0] [i_1] [i_0]);
            var_16 = ((/* implicit */short) ((signed char) arr_0 [i_0 - 1]));
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_5 [10U] [i_1])))) ? ((~(3296287897U))) : (((arr_5 [i_0] [(unsigned short)6]) | (998679398U))))))));
        }
        for (unsigned int i_2 = 3; i_2 < 10; i_2 += 2) /* same iter space */
        {
            arr_9 [i_0 + 2] = ((/* implicit */short) ((((((/* implicit */int) arr_8 [i_0] [i_2])) & (((/* implicit */int) var_4)))) ^ (((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)53))))));
            arr_10 [i_0] [i_2] = ((/* implicit */signed char) ((short) arr_0 [i_2 - 2]));
            var_18 = ((/* implicit */signed char) min((var_18), ((signed char)7)));
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) arr_0 [i_0])))));
        }
    }
    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) /* same iter space */
    {
        arr_16 [i_3 + 1] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_12 [(short)5]))) & (((/* implicit */int) var_7))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29515)) ? (2563618029U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)511)))))) ? (((((/* implicit */_Bool) arr_13 [i_3 + 1])) ? (((/* implicit */int) arr_7 [i_3] [i_3 + 1])) : (((/* implicit */int) arr_13 [i_3 - 2])))) : (((((/* implicit */int) arr_7 [i_3] [i_3 + 2])) | (((/* implicit */int) arr_3 [i_3 + 2] [i_3 - 1] [i_3 + 1]))))));
        var_20 += ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) < ((-(((/* implicit */int) (unsigned short)127))))));
    }
    var_21 *= ((signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_1)) / (((/* implicit */int) var_1)))) : (((/* implicit */int) (signed char)-1))));
    var_22 = ((/* implicit */signed char) max((var_22), (var_6)));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_7))));
}
