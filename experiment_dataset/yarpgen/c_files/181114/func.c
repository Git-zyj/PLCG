/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181114
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) -345578134443125376LL))) ? ((~(min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (2243053005213327185LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)32763), (arr_0 [i_0] [i_0])))) ? (min((var_7), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32756))))))));
        var_12 = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [(unsigned short)5]))))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) (short)14855)))))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) (short)14858))))), (((((/* implicit */_Bool) arr_4 [(unsigned short)2] [i_1])) ? (-927184462356390758LL) : (arr_3 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((short) arr_4 [i_1] [i_1]))) > (((/* implicit */int) arr_1 [i_1])))))));
        var_13 = ((/* implicit */short) max(((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_2)) : (arr_4 [i_1] [i_1]))))), (((long long int) ((long long int) -3315301338922678670LL)))));
    }
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_6))));
}
