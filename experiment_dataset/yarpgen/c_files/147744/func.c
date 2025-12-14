/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147744
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
    var_11 = ((/* implicit */long long int) var_9);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_0)))) / ((~(-1164415806)))))) ? (((/* implicit */unsigned int) 1311487350)) : (max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (((unsigned int) var_7))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = (~(max((arr_1 [i_0 + 2]), (((/* implicit */long long int) arr_6 [i_0 + 2])))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) max((((var_8) > (arr_1 [i_0]))), (((_Bool) 16040341625046221957ULL)))));
                    arr_10 [i_0] = ((/* implicit */int) arr_3 [i_0] [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_4 = 1; i_4 < 11; i_4 += 1) 
        {
            var_13 = ((/* implicit */signed char) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3])))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    {
                        arr_23 [i_3] [i_3] [i_5] [i_6] = ((/* implicit */unsigned short) var_7);
                        arr_24 [i_5] [10LL] [0U] [i_6] [i_3] = ((/* implicit */short) (+(((arr_22 [i_5] [i_5] [i_5] [i_5]) + (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_4] [i_5] [i_4])))))));
                    }
                } 
            } 
            arr_25 [i_3] [i_4 + 4] = ((/* implicit */unsigned int) ((unsigned char) arr_21 [i_3] [i_3] [i_4 + 2] [i_4]));
        }
        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            var_14 = ((/* implicit */signed char) (~(((/* implicit */int) arr_20 [i_7] [i_3] [i_7] [i_3] [i_3]))));
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) var_1))))))));
            var_16 = ((/* implicit */int) min((var_16), ((+(((/* implicit */int) arr_17 [i_3] [i_3] [i_7]))))));
        }
        arr_28 [i_3] [i_3] = ((/* implicit */signed char) arr_19 [i_3] [i_3] [(unsigned char)14] [i_3] [i_3]);
    }
}
