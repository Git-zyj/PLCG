/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105699
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = (((!(((/* implicit */_Bool) arr_2 [4] [i_1])))) ? (max((((/* implicit */unsigned int) var_7)), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                arr_5 [2] [i_1] [i_1] = ((/* implicit */int) arr_2 [i_1] [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(-1606370871)))) % (((18446744073709551606ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_15)))))))));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((min((9223372036854775807LL), (-7852454926515246885LL))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))), (((((/* implicit */int) (unsigned char)245)) <= (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))))))));
}
