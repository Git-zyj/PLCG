/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108037
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((((/* implicit */int) (unsigned short)49152)), (-463199702)))))) ? ((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) -463199699)) : (var_9))))) : (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [(unsigned char)12] [i_0] = ((/* implicit */int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -463199702)) : (5315945672898914413ULL)))))), ((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (arr_0 [i_0] [i_0]))))))));
        arr_3 [10U] = ((/* implicit */unsigned long long int) arr_0 [i_0] [3ULL]);
    }
    var_19 = ((/* implicit */int) max((((((((/* implicit */_Bool) 463199712)) ? (-1438849606) : (((/* implicit */int) var_17)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))) != (((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
}
