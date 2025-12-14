/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181108
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) -1808036904)) ? (((/* implicit */unsigned int) var_6)) : (arr_0 [13LL])))))) ? (((/* implicit */long long int) max((1808036910), (((/* implicit */int) ((-1808036904) > (var_3))))))) : (((((arr_2 [i_0]) <= (((/* implicit */unsigned long long int) 1808036910)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : (max((((/* implicit */long long int) arr_0 [i_0])), (arr_3 [i_0])))))));
        arr_4 [i_0] |= ((/* implicit */unsigned short) max(((short)-31007), ((short)32759)));
    }
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((1808036904), (var_6))))));
    var_17 = ((/* implicit */int) (short)-32761);
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_9) : (((/* implicit */int) var_12))))) & (max((arr_5 [i_1]), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_6)) & (797188227U))))))));
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_13))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_6 [18ULL])))), (var_1)))) ? (max((((/* implicit */long long int) var_8)), (max(((-9223372036854775807LL - 1LL)), (9223372036854775807LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_7)))))));
    }
}
