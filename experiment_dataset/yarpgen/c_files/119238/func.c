/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119238
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
    var_13 |= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (+((+(((/* implicit */int) (short)11817)))))))));
    var_14 ^= ((/* implicit */short) (-(((/* implicit */int) var_6))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) (-((-(((/* implicit */int) (short)0))))));
        var_15 = ((/* implicit */short) min((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 2]))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)0))))) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))))))))));
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_17 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((short) var_10))))) + (((((/* implicit */int) (short)-14)) - (((/* implicit */int) var_2))))));
        var_18 = ((/* implicit */short) (-(((/* implicit */int) var_6))));
        var_19 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2])) == (((/* implicit */int) (short)-27590)))))));
    }
    for (short i_2 = 1; i_2 < 17; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [(short)9])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2])))))))) ? (((/* implicit */int) ((short) max(((short)-22108), (var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((((/* implicit */int) (short)0)) <= (((/* implicit */int) (short)0)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((short) var_10))))) : (((((((/* implicit */int) (short)22108)) != (((/* implicit */int) (short)3549)))) ? (((((/* implicit */int) var_2)) + (((/* implicit */int) (short)22117)))) : (((/* implicit */int) arr_8 [i_2 + 1])))))))));
        var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(short)14] [(short)14])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_2 + 1]))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [(short)8] [(short)8])) : (((/* implicit */int) arr_8 [i_2 - 1]))))));
        /* LoopNest 2 */
        for (short i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            for (short i_4 = 4; i_4 < 18; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_4] [(short)12] [(short)8] |= ((/* implicit */short) (+((~(((((/* implicit */int) (short)-20621)) + (((/* implicit */int) (short)-1))))))));
                    var_22 = ((/* implicit */short) min((var_22), (var_2)));
                    var_23 = ((short) ((((/* implicit */_Bool) arr_3 [i_4 - 4] [i_3 - 3])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-3528)) : (((/* implicit */int) arr_6 [i_2])))) : (((/* implicit */int) max(((short)-22113), (var_0))))));
                    arr_15 [i_3] [i_2] [i_4] = ((/* implicit */short) (((((+(((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_12)))))) + (2147483647))) >> (((min((((/* implicit */int) ((short) arr_8 [i_2]))), (((((/* implicit */int) var_11)) % (((/* implicit */int) var_12)))))) + (3189)))));
                }
            } 
        } 
        var_24 = ((/* implicit */short) max((var_24), (((short) var_10))));
    }
    var_25 = var_9;
}
