/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156341
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((2398415389762462873ULL), (((403545547932689645ULL) * (357800435254851711ULL)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned short) (-(403545547932689653ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) var_11);
                            arr_11 [5U] [i_1] [5U] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_3]))) ^ (-2992355452660648022LL))), (((/* implicit */long long int) (unsigned short)58033))))) | (max((2398415389762462849ULL), (((/* implicit */unsigned long long int) -2992355452660648039LL))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_1])) ^ (((/* implicit */int) var_3))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_0);
    var_16 = ((/* implicit */long long int) var_3);
}
