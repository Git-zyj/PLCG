/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160377
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) (short)(-32767 - 1));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 4; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) (short)5304);
                            var_16 = ((/* implicit */long long int) (short)21702);
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_2] [i_1] = (short)-27591;
                            var_17 = ((/* implicit */long long int) (short)32767);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            var_18 += ((/* implicit */long long int) (short)437);
            arr_17 [i_5] [i_4] = (short)32757;
        }
        var_19 |= (short)-23776;
        var_20 = (short)23795;
    }
    var_21 = -6631856819497745552LL;
}
