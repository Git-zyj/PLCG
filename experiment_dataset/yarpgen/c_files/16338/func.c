/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16338
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
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) 1049780557))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((long long int) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_4))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_14 [0] [i_0] [9] = ((/* implicit */long long int) arr_9 [(unsigned char)9] [i_2] [i_1] [i_0 - 1]);
                        var_16 += arr_12 [i_0] [i_1] [i_0] [i_3];
                        var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_0 - 3] [i_0 - 4] [i_0 + 2] [i_0]))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_2))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned char) ((unsigned int) arr_17 [i_4] [(short)1]));
        var_19 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_17 [i_4] [(short)10])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_15 [i_4])))) > (((/* implicit */int) arr_17 [i_4] [i_4]))));
        var_20 = ((/* implicit */long long int) var_9);
    }
    var_21 = ((/* implicit */short) (unsigned short)11018);
}
