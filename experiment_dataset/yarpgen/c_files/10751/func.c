/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10751
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
    var_17 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_16)) >= ((-(((/* implicit */int) var_15)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (min((((((/* implicit */_Bool) min(((unsigned short)62), (((/* implicit */unsigned short) arr_1 [i_0 - 2] [i_0 - 3]))))) ? (-839307049) : ((+(-565321643))))), (565321650)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(248047439)))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (576460752303423487LL))) : (((/* implicit */long long int) min((((/* implicit */int) var_0)), (248047441))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -565321650)) ? (((/* implicit */int) (short)-4090)) : (((/* implicit */int) (short)15))))) ? (((/* implicit */unsigned long long int) (~(-1LL)))) : (min((1ULL), (((/* implicit */unsigned long long int) 274877906943LL))))))));
                            var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_0 - 2])), (3408712676U)));
                            arr_14 [i_0] [i_0] [i_0] [i_0 - 2] &= ((/* implicit */_Bool) arr_2 [(short)1]);
                        }
                    } 
                } 
                var_20 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-4081)), (((((/* implicit */_Bool) max((-5254216206052544233LL), (-9223372036854775806LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21))) : (((((/* implicit */_Bool) 2139095040)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2])))))))));
            }
        } 
    } 
}
