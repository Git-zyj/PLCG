/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15794
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
    var_18 = ((/* implicit */short) min((max((max((((/* implicit */unsigned int) var_13)), (4027362993U))), (((/* implicit */unsigned int) (unsigned short)0)))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535)))) >= (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_16)) - (52878))))))))));
    var_19 = ((/* implicit */unsigned short) 0U);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
                    var_21 = ((/* implicit */unsigned int) ((((_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3640))) : (var_17)));
                    arr_6 [(short)15] [(short)15] = ((/* implicit */short) (~(arr_2 [i_0 - 2] [i_2] [i_2 + 1])));
                    var_22 = ((/* implicit */signed char) var_16);
                }
            } 
        } 
        var_23 = ((/* implicit */short) var_9);
    }
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (short i_4 = 1; i_4 < 14; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                {
                    var_24 &= ((/* implicit */short) 267604289U);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                arr_19 [i_3] [i_3] [i_5] [i_5] [i_7] [i_7] [i_3] = (+(((/* implicit */int) (unsigned short)65508)));
                                var_25 = ((/* implicit */unsigned int) (unsigned short)14);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
