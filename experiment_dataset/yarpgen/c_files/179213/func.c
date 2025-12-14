/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179213
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [6LL] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0] [i_0])))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((12285598763148276555ULL) - (arr_1 [(short)17])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)4]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)1] [2ULL])) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (-(-7154628302051248765LL))))))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (6083840052705341062LL) : (((/* implicit */long long int) 505826122U))));
    var_20 = ((/* implicit */unsigned char) var_7);
    var_21 = ((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16931))) * (4294967295U)))))));
}
