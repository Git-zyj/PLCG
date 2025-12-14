/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140157
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
    var_16 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) 1073741824)) : (var_4)))) ? (0ULL) : (((/* implicit */unsigned long long int) 3581498167U)))));
    var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned int) ((var_15) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)24110))))) ? ((-(((/* implicit */int) (signed char)-49)))) : (var_3))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_8)))))))));
    var_18 = (+(((/* implicit */int) min((((/* implicit */short) var_6)), (var_5)))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */signed char) (((+(713469152U))) ^ ((~(713469147U)))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((9551097), (((((/* implicit */_Bool) (signed char)-109)) ? (9551097) : (((/* implicit */int) (unsigned short)8)))))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_20 ^= ((/* implicit */signed char) (unsigned short)44997);
        var_21 = ((/* implicit */signed char) ((_Bool) var_7));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)9] [i_1])) ? (((/* implicit */int) (signed char)-23)) : ((-(((/* implicit */int) arr_4 [i_1] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((1237965152) - (((/* implicit */int) max((((/* implicit */short) (signed char)103)), ((short)-10032))))))) : (((arr_1 [i_1] [i_1]) | (((/* implicit */unsigned long long int) 1722584462))))));
        arr_5 [i_1] [(_Bool)1] &= ((/* implicit */unsigned short) 713469177U);
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 8; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_7 [(short)3] [i_3 - 1])) ? (((/* implicit */int) arr_7 [i_1] [i_3 - 1])) : (((/* implicit */int) arr_7 [i_1] [i_3 - 1]))))));
                    var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3] [(unsigned short)9] [(signed char)8] [8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) : (((((/* implicit */_Bool) ((arr_8 [2] [i_2] [10U]) / (((/* implicit */int) arr_7 [i_3] [i_1]))))) ? ((+(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2])))))));
                }
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) max((((/* implicit */signed char) max((arr_9 [i_4] [7] [(short)3] [i_4]), (arr_6 [i_4])))), (var_6)));
        var_25 = var_3;
    }
    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) ((_Bool) 4611686018423193600ULL))) : (((/* implicit */int) var_1)))) % (var_2))))));
}
