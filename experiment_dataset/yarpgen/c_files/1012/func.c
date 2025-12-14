/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1012
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
    var_17 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_11 [i_2] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) min((2631724888U), (((/* implicit */unsigned int) (short)18958))));
                            arr_12 [i_0] [i_1] [(unsigned char)5] [i_2] = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) max((((unsigned long long int) var_14)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) arr_16 [i_4]);
                var_20 -= ((/* implicit */int) arr_16 [i_5]);
            }
        } 
    } 
}
