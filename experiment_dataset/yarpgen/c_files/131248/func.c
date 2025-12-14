/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131248
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
    var_14 ^= ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (-1592336620293639706LL) : (((/* implicit */long long int) arr_1 [i_0])))), (var_4)))) ? (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) & (-1921923634806934969LL))) : (((/* implicit */long long int) var_11)))) : (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23617))) != (var_5)))), (var_4)))));
        var_16 &= ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) var_9);
        var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(min((((/* implicit */int) var_3)), (var_9))))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (~(((((_Bool) var_1)) ? (((((/* implicit */_Bool) arr_3 [i_1] [(signed char)13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32746))) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2]))))))))));
        var_19 &= ((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)23615), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-73)) > (((/* implicit */int) arr_3 [i_1] [i_1])))))))) != (((/* implicit */int) (_Bool)1))));
    }
}
