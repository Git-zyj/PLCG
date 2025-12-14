/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106633
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
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (1372517967019754705ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3004785542279703227LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2)))))))));
        var_13 &= ((/* implicit */short) min((-1084394754), (max((1084394753), (((/* implicit */int) arr_1 [i_0] [(short)6]))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_14 &= ((/* implicit */short) (~(((var_7) / (((/* implicit */unsigned long long int) 1084394749))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))));
        var_16 = ((/* implicit */_Bool) ((var_9) & (((/* implicit */int) (!(((/* implicit */_Bool) 94699732U)))))));
    }
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) -1084394754)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1005291928492336531LL) != (((/* implicit */long long int) -1084394754)))))) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(3993300844344353380ULL)))) ? (((var_2) | (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
}
