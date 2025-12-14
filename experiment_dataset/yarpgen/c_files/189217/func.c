/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189217
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (short)28672)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1)))) ? (min((((/* implicit */unsigned int) var_12)), (var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : ((-(((var_4) * (8905477380923532443ULL)))))));
    var_21 = ((/* implicit */long long int) (~(((9541266692786019153ULL) ^ (((/* implicit */unsigned long long int) var_2))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_12))))) ^ (((((/* implicit */_Bool) (unsigned short)19307)) ? (9541266692786019167ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26779))))))))));
                var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)19305)) / (((/* implicit */int) (unsigned char)17))))))) > ((+(max((((/* implicit */unsigned long long int) (unsigned char)61)), (var_14)))))));
            }
        } 
    } 
}
