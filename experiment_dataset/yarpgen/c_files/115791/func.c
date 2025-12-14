/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115791
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
    for (int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [19] [19] [i_1] |= ((/* implicit */long long int) ((5368522281472672726ULL) >> (((max((arr_3 [i_0] [i_0 - 1]), (arr_2 [i_0 + 1] [i_0 + 1]))) - (749249625)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((int) ((unsigned long long int) arr_3 [i_0] [i_0 - 1])));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((var_15) < (((/* implicit */long long int) var_16)))))) ? (((long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_7))))) : (((var_6) % (((((/* implicit */_Bool) var_11)) ? (4895272600884330607LL) : (var_15)))))));
    var_19 += ((/* implicit */int) var_15);
    var_20 = ((/* implicit */int) ((-6123253474218148715LL) >= (((/* implicit */long long int) ((/* implicit */int) (((-(var_4))) != (((/* implicit */int) ((13078221792236878889ULL) < (((/* implicit */unsigned long long int) var_2)))))))))));
}
