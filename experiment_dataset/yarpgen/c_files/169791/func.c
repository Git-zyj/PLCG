/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169791
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)12))) % ((-(var_8)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) -3680383746325322351LL);
                arr_5 [i_1] = ((/* implicit */short) 16380);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_2] = ((/* implicit */short) arr_3 [i_1] [i_1]);
                            var_12 = ((/* implicit */signed char) 9223372036850581504ULL);
                        }
                    } 
                } 
            }
        } 
    } 
}
