/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138123
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_15 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) % (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 259886408)))) : (((/* implicit */unsigned long long int) -1803386996)))));
        arr_4 [i_0] [(unsigned short)6] = ((/* implicit */unsigned short) (unsigned char)17);
    }
    var_16 = ((/* implicit */signed char) min((min((max((((/* implicit */unsigned long long int) var_14)), (13017082556671545585ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 410801582)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) var_6))));
    var_17 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))) <= (min((2042392952U), (((/* implicit */unsigned int) 2130533896))))))) > (((/* implicit */int) var_12))));
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (signed char)-61))));
}
