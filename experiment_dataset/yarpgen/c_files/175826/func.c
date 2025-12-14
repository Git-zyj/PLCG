/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175826
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_3))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */int) var_9)) & (var_8))) : (((/* implicit */int) max(((unsigned short)63464), (((/* implicit */unsigned short) (short)-3867)))))))));
    var_14 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32767)), (min((((/* implicit */unsigned short) (short)-32767)), ((unsigned short)112)))))) ? (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63464))) + (-2717067012132899736LL))) | (((/* implicit */long long int) (+(226242919)))))) : (var_10));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24235)) ? (max((-4827351288748377210LL), (((/* implicit */long long int) var_11)))) : (min((-4827351288748377210LL), (((/* implicit */long long int) (short)32765))))))) ? ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4)))))) : (var_10))) : (((/* implicit */long long int) var_2))));
}
