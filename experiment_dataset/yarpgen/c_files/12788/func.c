/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12788
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
    for (short i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_13 [i_3] [i_2] [i_1] [(unsigned char)9] = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_2] [i_3]);
                            var_10 = ((/* implicit */short) var_9);
                        }
                    } 
                } 
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) var_0)), (arr_5 [i_0 - 1] [i_0 - 2]))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_2))))))))))));
            }
        } 
    } 
    var_12 &= ((/* implicit */_Bool) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))) & ((-(((/* implicit */int) max(((short)32751), ((short)-5))))))));
}
