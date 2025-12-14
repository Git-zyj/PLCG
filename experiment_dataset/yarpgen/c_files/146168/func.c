/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146168
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
    var_16 = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) 533538166U)), (-1LL)))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_2 [i_0 - 2]);
        var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_0 [i_0 + 1]))))))), (((unsigned long long int) -1))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (-1505797614) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
        var_19 |= ((/* implicit */short) arr_2 [16]);
        var_20 = ((/* implicit */long long int) (unsigned short)35163);
    }
}
