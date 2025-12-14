/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130553
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
    var_10 = (short)(-32767 - 1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (short)-15238);
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) max((661053796U), (((/* implicit */unsigned int) (short)-32746)))))));
                    var_12 = max((((/* implicit */unsigned int) (short)-3705)), (max((3201428969U), (((/* implicit */unsigned int) (short)-19628)))));
                }
            }
        } 
    } 
}
