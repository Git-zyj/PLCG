/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181502
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) min((var_10), ((short)-28786)));
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)254)) * (((/* implicit */int) (unsigned char)196))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 4])) == (((/* implicit */int) arr_1 [i_0 + 2])))))) : (arr_0 [i_0]))))));
        var_13 = (+(((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) ((_Bool) (unsigned char)247))))));
    }
    for (int i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) * (14107022290988070629ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-75))) : (((((/* implicit */_Bool) arr_4 [i_1 - 3])) ? (-8093018639413470174LL) : (1660204361517972790LL))));
        arr_7 [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15979)) ? (((/* implicit */unsigned long long int) (-(((long long int) var_4))))) : (var_0)));
    }
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_0))));
        arr_11 [(signed char)13] [i_2] = (unsigned char)14;
    }
    var_16 = ((/* implicit */unsigned long long int) var_1);
}
