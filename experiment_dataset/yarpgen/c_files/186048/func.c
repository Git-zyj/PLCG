/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186048
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) / (arr_1 [i_0] [i_0])))) && (((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        var_20 -= ((/* implicit */long long int) (-((+(((/* implicit */int) var_0))))));
        var_21 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)9)) || (((/* implicit */_Bool) var_3)))) || ((!(((/* implicit */_Bool) 2100267883U)))))))));
        var_22 = ((/* implicit */unsigned char) (-(2194699390U)));
        var_23 += ((/* implicit */short) min(((+(arr_0 [(_Bool)1]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) & (2194699413U))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)9)), (8595427926178393875ULL))) : (((/* implicit */unsigned long long int) min((2194699390U), (((/* implicit */unsigned int) (unsigned char)245)))))))) ? ((~(arr_0 [i_1]))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_0 [i_1]))))), (arr_3 [i_1 - 1])))));
        var_25 = ((/* implicit */int) arr_0 [i_1]);
    }
}
