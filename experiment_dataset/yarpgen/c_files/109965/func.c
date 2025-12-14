/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109965
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
    var_11 = ((((/* implicit */_Bool) 5530929225949282201LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((853842904U) == (((/* implicit */unsigned int) var_4)))))) : (min((((/* implicit */unsigned int) var_8)), (var_10)))))) : ((+(((((/* implicit */_Bool) (short)-3045)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0))))));
    var_12 = ((/* implicit */int) (short)-3041);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) 592312080U);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)248));
        var_13 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_10))) * (((/* implicit */unsigned int) ((((/* implicit */int) (short)-3045)) * (((/* implicit */int) arr_1 [i_0])))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3045)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) arr_0 [i_0])) : (694596843)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) (-((~(var_1)))));
        arr_8 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) max((4294967295U), (4294967295U))))))), (max((((unsigned long long int) arr_4 [i_1] [i_1])), (((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_1])))))));
        var_15 = ((/* implicit */long long int) ((short) ((_Bool) arr_1 [i_1])));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = max((((/* implicit */unsigned int) ((unsigned short) max((var_6), (((/* implicit */unsigned short) var_5)))))), (4294967267U));
        arr_14 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])), (513767001077535213ULL)))))) ? (((unsigned int) (signed char)103)) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) / (arr_12 [i_2])))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_16 = ((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_18 [i_3]));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 58158904U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (469169416U)))) ? (17932977072632016402ULL) : (((/* implicit */unsigned long long int) 4294967295U))));
                var_18 = ((/* implicit */unsigned int) ((((_Bool) arr_20 [(short)2] [i_4])) ? (1869694821) : ((+(((/* implicit */int) arr_21 [i_4]))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_3] [i_4] [i_3] [i_5])) ? (((/* implicit */int) arr_22 [i_5] [i_5] [i_4] [i_3])) : (((/* implicit */int) var_7))));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    var_20 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)16380))));
                    arr_28 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6))))));
                }
            }
            for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_21 = arr_24 [i_3] [i_4] [i_3] [i_4];
                var_22 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_3])) & (((((((/* implicit */int) (signed char)-83)) + (2147483647))) >> (((((/* implicit */int) (short)-3045)) + (3048)))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_23 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_3] [i_4])) * (((/* implicit */int) arr_20 [i_3] [i_3]))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))) | (9391517750406477685ULL)));
                            var_25 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4797))) | (arr_31 [i_3] [i_4] [i_7] [i_9 - 1])))) ? (((/* implicit */unsigned long long int) (~(arr_24 [i_3] [(_Bool)1] [(short)4] [i_3])))) : (((((/* implicit */unsigned long long int) 1270272116U)) ^ (10390653979763134507ULL))));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) 926315819U))));
                            var_27 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 4294967295U)) ? (arr_30 [i_3] [i_4] [i_8] [i_9 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-66))))));
                        }
                    } 
                } 
            }
            for (short i_10 = 3; i_10 < 23; i_10 += 2) 
            {
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((unsigned long long int) arr_24 [i_3] [i_4] [i_10] [i_10 - 2])))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_3] [i_4])) ? (arr_15 [i_3]) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) : (arr_31 [i_3] [i_10 - 1] [i_10 - 3] [i_10 + 1])));
            }
            var_30 = ((/* implicit */signed char) arr_18 [i_3]);
        }
    }
}
