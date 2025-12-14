/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102124
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (-(136085206529619896LL)))) ? ((+((+(var_6))))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (var_13))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : ((-(((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [(_Bool)1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [(unsigned short)9]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    for (long long int i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_6 [i_1 + 2]), (((/* implicit */unsigned short) arr_0 [i_1 + 2]))))), (((arr_5 [i_1 + 1]) ? (((/* implicit */int) arr_6 [i_1 - 3])) : (((/* implicit */int) arr_5 [i_1 - 1]))))));
        arr_8 [(unsigned short)7] [i_1] = arr_6 [i_1];
        arr_9 [i_1 - 1] [i_1] &= ((/* implicit */signed char) (+((~(((/* implicit */int) arr_5 [i_1]))))));
        arr_10 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28672)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1444828182321753290LL)));
    }
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_11))));
}
