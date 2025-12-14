/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126319
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
    var_14 = ((/* implicit */unsigned int) var_5);
    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((var_7), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2))), (max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_7)), (var_6)))), (max((var_2), (var_5)))))));
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)15284)), (8456599136737982197ULL)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [14U] = ((/* implicit */signed char) max((((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))) < (arr_3 [14] [14])))), (arr_2 [7LL])))), (arr_5 [i_1])));
                    var_17 = ((/* implicit */int) var_1);
                    var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_1])), (max((((/* implicit */long long int) arr_7 [i_0] [i_1])), (var_5)))));
                    var_19 = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
                }
            } 
        } 
    } 
}
