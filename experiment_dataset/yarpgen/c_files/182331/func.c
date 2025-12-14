/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182331
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */short) (-((+(((/* implicit */int) (unsigned short)44511))))));
        arr_3 [8] = ((/* implicit */unsigned short) (-((+(arr_1 [i_0])))));
        var_20 = ((/* implicit */unsigned short) ((long long int) 4638763806692801481LL));
    }
    var_21 += ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        for (unsigned int i_2 = 3; i_2 < 19; i_2 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            arr_18 [i_2] [i_3] [(unsigned char)6] [i_4] [i_3] [i_2] |= ((/* implicit */unsigned long long int) arr_17 [i_4] [i_4] [i_4] [i_4]);
                            var_22 += ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_4 [(unsigned short)11]), (((unsigned int) 6257825409536803571ULL)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((/* implicit */int) var_8)), ((-((~(((/* implicit */int) (signed char)72)))))))))));
            }
        } 
    } 
}
