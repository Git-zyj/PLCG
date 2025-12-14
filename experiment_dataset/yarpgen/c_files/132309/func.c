/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132309
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)18097);
                    var_18 = ((/* implicit */unsigned int) var_7);
                    var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned int) var_0))))))) ? (((((/* implicit */_Bool) 3063490505U)) ? (((((/* implicit */_Bool) var_5)) ? (15587262660341556695ULL) : (((/* implicit */unsigned long long int) 3781292799U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_0)) : (var_5)))))) : (15883389964870904916ULL)));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 18446744073709551607ULL);
                    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3974373741U)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) 0))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_10)) : (15883389964870904904ULL)))))) ? (15883389964870904920ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (var_5))))));
                }
            } 
        } 
    } 
    var_21 = var_10;
}
