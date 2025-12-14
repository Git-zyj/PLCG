/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135939
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
    var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 14651306135662965051ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_11))))), (((((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((3795437938046586564ULL) - (3795437938046586542ULL)))))) & (var_8)))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 18U))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) : (min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_6)) : (928123667))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (7438055337610554310LL)))) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4294967277U)) && (((/* implicit */_Bool) arr_1 [10ULL] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967277U)) && (((/* implicit */_Bool) arr_0 [i_3])))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (16580663988688137979ULL)))));
                        var_18 = ((/* implicit */unsigned int) (((+(var_8))) >> (((((/* implicit */int) arr_0 [i_0 - 1])) + (141)))));
                    }
                } 
            } 
            arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -928123668)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))));
            arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24131))) : (7394848924963531621ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-17639)) : (((/* implicit */int) arr_2 [i_0 - 1])))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 3795437938046586564ULL))) ? ((~(3795437938046586564ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        }
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((short) (~(arr_7 [i_0 - 1] [(unsigned char)2] [i_0 - 1])))))));
    }
    for (long long int i_4 = 2; i_4 < 15; i_4 += 2) 
    {
        var_21 ^= ((/* implicit */int) var_1);
        arr_15 [i_4] [11LL] = ((/* implicit */short) arr_13 [i_4 - 1]);
        arr_16 [11ULL] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((var_8) == (((/* implicit */long long int) arr_1 [i_4] [i_4]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned short)8] [i_4] [i_4 - 1] [i_4]))) + (1352330343930907237ULL)))));
    }
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_2))));
}
