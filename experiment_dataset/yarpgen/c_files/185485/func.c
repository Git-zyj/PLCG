/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185485
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (min((1624530636), (((/* implicit */int) (unsigned char)102)))) : (1624530636)))) ? (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_16))), (((/* implicit */unsigned int) min((var_17), (var_17)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))));
    var_21 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(8812794434428423396ULL)))) ? (((/* implicit */unsigned long long int) ((((-1624530633) + (2147483647))) << (((var_0) - (446905069U)))))) : ((~(2185134509697063183ULL)))))) ? (((/* implicit */unsigned long long int) (-(var_2)))) : ((((-(8989607068696576ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)49)))))));
        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0 + 1])))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2971792210U)) ? (4070370500U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)184))))))))));
    }
}
