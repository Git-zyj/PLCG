/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176012
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
    var_10 = ((/* implicit */unsigned short) ((long long int) 12399720897930532017ULL));
    var_11 = ((/* implicit */_Bool) min((max((min((var_5), (4916523251300736564LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (var_0)))))), (((/* implicit */long long int) max((min((((/* implicit */int) var_4)), (-1900299441))), (max((1900299440), (((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((unsigned char) max((var_2), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), ((unsigned short)21553))))));
        arr_2 [(unsigned char)2] |= ((/* implicit */unsigned char) ((max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) ^ (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)28))))));
    }
}
