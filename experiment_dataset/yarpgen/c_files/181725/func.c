/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181725
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
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) 44378866766842574LL)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((unsigned char) var_6));
        var_17 = ((/* implicit */signed char) (+((-(var_3)))));
        var_18 -= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0 + 2])) <= (((/* implicit */int) (unsigned short)48324)))) ? (((((_Bool) 1796245505)) ? ((+(var_3))) : (((/* implicit */int) arr_0 [i_0])))) : (((int) ((((/* implicit */int) (unsigned short)17211)) + (((/* implicit */int) (unsigned short)48324)))))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) ((signed char) var_1)))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), ((~(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (max((((((/* implicit */unsigned int) var_5)) + (var_1))), (var_6)))));
}
