/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126470
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (7647704201387426764LL)))) ? (((/* implicit */long long int) var_1)) : (max((((/* implicit */long long int) var_2)), (max((((/* implicit */long long int) var_0)), (-7647704201387426764LL)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned short) arr_1 [i_0]);
        var_18 = ((/* implicit */unsigned char) (-(min((max((arr_0 [i_0] [(signed char)15]), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((arr_0 [i_0] [i_0]) - (17544909540718203963ULL))))))))));
    }
}
