/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175526
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) ((var_6) && ((_Bool)1)))) == (((/* implicit */int) max((var_17), ((signed char)-58))))))), (max(((~(((/* implicit */int) var_17)))), (((((/* implicit */int) (signed char)48)) ^ (((/* implicit */int) var_18)))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) ((_Bool) (_Bool)1))))) : (((/* implicit */int) arr_0 [i_0]))));
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_0 - 2])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (short)-30782))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) << (((((/* implicit */int) arr_0 [i_1])) - (48295)))));
        arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_7 [i_1])) - (92))))) : (((((/* implicit */int) (signed char)-111)) % (((/* implicit */int) (signed char)48))))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-((-((+(((/* implicit */int) var_11)))))))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            arr_15 [i_2] [i_2] |= ((/* implicit */_Bool) (signed char)71);
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */int) max((arr_14 [i_2] [i_3] [i_2]), (((/* implicit */unsigned short) (signed char)-3))))) << (((((((/* implicit */int) arr_10 [i_2])) ^ (((((/* implicit */int) arr_12 [i_2])) | (((/* implicit */int) arr_13 [i_2] [(_Bool)1])))))) - (46158))))))));
            var_25 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)-10)) ? (((((/* implicit */int) arr_14 [i_2] [i_2] [i_3])) ^ (((/* implicit */int) (unsigned short)32552)))) : (((/* implicit */int) max((arr_14 [i_2] [i_2] [i_3]), (((/* implicit */unsigned short) var_12))))))) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_19))))))));
            arr_16 [i_2] [i_3] = arr_13 [i_2] [i_2];
        }
        arr_17 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) max(((_Bool)1), (arr_11 [i_2] [i_2])))))))));
    }
}
