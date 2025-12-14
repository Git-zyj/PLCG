/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129489
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (unsigned short)2162;
        var_17 = var_1;
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_18 = arr_4 [i_1] [i_1];
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)1))));
        arr_6 [i_1] = ((unsigned short) arr_1 [i_1]);
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1] [i_1])) + (((/* implicit */int) var_1)))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 2; i_3 < 18; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)59004))));
                            var_22 -= (unsigned short)0;
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_20 [i_6] [i_6] [i_6] [i_1] [i_1] [i_1]))));
                        arr_26 [i_7] [i_6] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_17 [i_1] [i_2] [i_7]))));
                        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [i_1] [i_1]))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        arr_29 [i_8] = (unsigned short)15;
        var_26 = (unsigned short)33243;
    }
    for (unsigned short i_9 = 4; i_9 < 11; i_9 += 1) 
    {
        arr_32 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_9 - 2])) % (((/* implicit */int) arr_0 [i_9 + 1]))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)65535))));
    }
    var_28 = var_4;
    var_29 = var_4;
}
