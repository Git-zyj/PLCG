/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112803
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
    var_19 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)23214))));
    var_20 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) (((~(var_17))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)21])))))) : (max((((/* implicit */unsigned long long int) (short)5924)), (6002282599496333802ULL)))));
        var_22 += ((/* implicit */long long int) max((18389447348662203000ULL), (((/* implicit */unsigned long long int) (short)-5938))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [(unsigned short)3])), (((arr_1 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5925)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (_Bool)0))))) : (((long long int) var_5))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_23 = ((/* implicit */long long int) (_Bool)1);
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_9))));
    }
}
