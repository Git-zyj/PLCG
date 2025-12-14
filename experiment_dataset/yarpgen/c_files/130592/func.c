/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130592
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
    var_10 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((max((((((/* implicit */int) arr_0 [(unsigned short)6] [i_0])) / (arr_1 [i_0]))), (((/* implicit */int) min((var_1), (((/* implicit */short) (_Bool)1))))))), (((/* implicit */int) ((((/* implicit */_Bool) -580694206848336218LL)) || (((/* implicit */_Bool) (unsigned short)12)))))));
        var_11 = ((/* implicit */short) arr_0 [i_0] [(unsigned char)4]);
    }
    var_12 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (unsigned short)20)), (54131432591786821LL))) <= (((/* implicit */long long int) ((/* implicit */int) var_7)))));
}
