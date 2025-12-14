/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142765
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((-1LL) & (var_4)))) ? (((((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) << (((((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) - (1404516530289466756LL))))) : ((~(max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0])))))));
        arr_3 [(unsigned short)5] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((min(((short)-19943), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) arr_0 [(unsigned char)3])))))));
        var_17 -= ((/* implicit */unsigned int) ((long long int) var_1));
        var_18 -= ((/* implicit */int) var_16);
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) arr_0 [i_0]))))), (max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_19 ^= ((/* implicit */signed char) ((arr_5 [i_1]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (arr_6 [i_1])))) ? (arr_7 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))))));
        var_20 = ((/* implicit */short) (-(((/* implicit */int) (!((_Bool)1))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_8 [i_2]))));
        arr_12 [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (arr_9 [i_2])));
    }
    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
}
