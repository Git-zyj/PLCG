/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109020
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_15))));
    var_21 = ((/* implicit */unsigned short) ((int) 14846241967254123374ULL));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((var_11), (((/* implicit */unsigned long long int) (signed char)-3)))), (arr_4 [i_2])))) ? (((/* implicit */int) ((short) (short)9030))) : (((/* implicit */int) ((short) (unsigned short)64442)))));
                    var_23 ^= ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((arr_0 [i_0] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-2048)))))), ((signed char)-23)));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) max((((unsigned long long int) (signed char)-3)), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (arr_1 [i_2])))))))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_15))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) min((var_15), (((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) (unsigned char)0))))))));
}
