/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113918
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) 410767848))) : (((int) 145829296))));
                    arr_8 [i_2] = 134217727;
                }
                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned short)36444))) ? (((((/* implicit */_Bool) -410767862)) ? (-410767862) : (-410767873))) : ((+(-410767849)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (-410767846)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (410767880))) : (((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */int) (unsigned short)29092)) : (2147483646))))) : ((+(((((/* implicit */_Bool) (unsigned short)29061)) ? (-2147483624) : (0))))));
                arr_9 [i_0] = (unsigned short)29060;
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_7)))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (1013743209))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (var_0))))));
}
