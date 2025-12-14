/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120806
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
    var_14 += ((/* implicit */unsigned int) ((short) var_3));
    var_15 = max((((short) ((var_0) != (var_3)))), (((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned int) var_8)), (var_10))))));
    var_16 = ((/* implicit */short) var_1);
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 18446744073709551601ULL))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2))))) ? (((/* implicit */int) ((((/* implicit */long long int) 2167521720U)) >= (max((((/* implicit */long long int) 519322850U)), (arr_1 [i_1])))))) : ((+((+(((/* implicit */int) var_9))))))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (+(((unsigned long long int) 3775644437U))))) ? (((unsigned int) min((3775644428U), (((/* implicit */unsigned int) (_Bool)1))))) : (arr_8 [i_0] [18U] [(unsigned char)12]))))));
                }
            } 
        } 
    } 
}
