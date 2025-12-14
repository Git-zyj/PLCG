/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189003
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) arr_5 [i_0]);
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) max((((((1323501187653674851ULL) & (((/* implicit */unsigned long long int) 2147483647)))) ^ (17123242886055876772ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (arr_0 [i_1]))) >> (((-1488129246223358000LL) + (1488129246223358030LL)))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) (~(var_1)));
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (((var_5) ? (((/* implicit */unsigned long long int) var_3)) : (var_1))))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483647)))))))) : (((/* implicit */int) var_5)))))));
    var_14 = ((/* implicit */_Bool) 2147483647);
}
