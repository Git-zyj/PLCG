/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179570
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_12 = ((/* implicit */long long int) arr_2 [3U]);
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((_Bool) arr_2 [i_0])));
        }
        var_13 = ((/* implicit */long long int) arr_2 [i_0]);
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (unsigned short)51492))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (short i_4 = 4; i_4 < 13; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_2] [i_2] [(short)13] = ((/* implicit */unsigned long long int) arr_7 [i_2]);
                    var_15 = ((/* implicit */signed char) arr_7 [i_3]);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((short) (unsigned short)14038));
    }
    var_17 = ((/* implicit */unsigned short) var_3);
    var_18 = ((/* implicit */unsigned short) var_10);
}
