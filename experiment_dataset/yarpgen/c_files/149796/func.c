/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149796
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((arr_2 [9ULL] [i_1] [i_0 - 3]) >> ((+(((((/* implicit */int) var_6)) / (((/* implicit */int) var_4))))))));
                var_16 = ((/* implicit */signed char) var_11);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_2 [i_2 + 3] [i_0 - 3] [i_0 + 1])) / ((-(var_13))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */int) var_9);
                }
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)52351)) / (-1570183800)));
}
