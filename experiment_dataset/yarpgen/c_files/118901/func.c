/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118901
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
    var_10 = ((/* implicit */signed char) ((short) ((unsigned int) (unsigned short)45619)));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */short) arr_2 [i_0]);
        var_12 *= ((/* implicit */unsigned int) -20);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((unsigned short) 2751149156U));
        var_13 *= ((/* implicit */short) ((_Bool) var_4));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_14 *= ((/* implicit */unsigned int) arr_8 [(unsigned short)9]);
        arr_10 [i_2] = ((/* implicit */long long int) 22);
    }
    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 4) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4)))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                arr_19 [i_5] [i_3 + 2] = ((/* implicit */unsigned char) ((_Bool) (unsigned short)19936));
                arr_20 [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (signed char)22)))));
                var_16 = ((/* implicit */unsigned short) ((int) arr_0 [i_3 + 3]));
                var_17 = ((/* implicit */_Bool) arr_1 [i_5]);
                arr_21 [i_3] [(_Bool)1] [i_5] [i_3 + 3] = ((/* implicit */short) (_Bool)1);
            }
            arr_22 [9U] [i_4] [i_4] = ((/* implicit */_Bool) arr_16 [i_3]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_6 = 1; i_6 < 16; i_6 += 3) 
            {
                var_18 = ((/* implicit */short) (+(((unsigned int) var_0))));
                var_19 = ((/* implicit */unsigned char) 1146321140U);
                var_20 ^= ((/* implicit */signed char) arr_15 [i_3] [(signed char)11] [i_6]);
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_21 = ((/* implicit */_Bool) 0);
                var_22 = ((/* implicit */unsigned short) (+(arr_13 [i_3])));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    arr_32 [i_3] [i_7] = ((/* implicit */unsigned int) (+(arr_25 [(short)11])));
                    var_23 *= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)19955))));
                }
                var_24 += ((short) (_Bool)1);
            }
        }
    }
}
