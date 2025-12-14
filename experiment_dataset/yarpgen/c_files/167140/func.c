/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167140
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = max((((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned short) (signed char)-8)))))))));
        var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) (unsigned char)58)) - (49)))))))), (4081126083U)));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (5551109848713844034LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15251)))))) + ((+(var_4)))))));
        var_16 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)5688))))));
    }
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((((/* implicit */_Bool) ((18446744073709551601ULL) ^ (4589945339590809194ULL)))) || (((/* implicit */_Bool) var_10)))))))));
}
