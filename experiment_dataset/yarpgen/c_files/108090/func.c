/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108090
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
    var_17 += ((/* implicit */long long int) var_15);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) 6905208826724602007LL);
                arr_7 [i_0 - 4] [i_0 - 4] = var_15;
                var_18 = ((/* implicit */_Bool) 6905208826724601988LL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), ((+((-(-2726652490444266438LL)))))));
                var_20 = ((/* implicit */_Bool) 2726652490444266428LL);
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_21 = min((((((/* implicit */_Bool) (~(arr_4 [i_2])))) ? ((+(-1LL))) : (-1652733757991163731LL))), (((/* implicit */long long int) max((((/* implicit */short) arr_13 [i_3] [i_3])), (min((arr_14 [i_2] [i_3]), (((/* implicit */short) arr_11 [i_2]))))))));
                            var_22 = ((/* implicit */_Bool) min((-2726652490444266438LL), ((~(max((var_0), (((/* implicit */long long int) var_7))))))));
                            var_23 = (_Bool)1;
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (6592864800014380224LL)))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) max((var_12), (var_12)))))))) ? (((/* implicit */int) var_15)) : ((+(((/* implicit */int) (_Bool)1))))));
}
