/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157159
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
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((351938424) << (((1036035105278372689ULL) - (1036035105278372688ULL)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [i_0 + 2] [i_0 + 2])));
        var_11 = ((((((/* implicit */_Bool) min((((/* implicit */int) (signed char)0)), (var_7)))) ? (((2147483647) / (((/* implicit */int) var_0)))) : (max((((/* implicit */int) var_2)), (1330282408))))) << (((arr_2 [i_0] [i_0]) - (3943155236U))));
        var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)255)) ? (min((((/* implicit */int) (unsigned char)14)), ((-2147483647 - 1)))) : (((/* implicit */int) (unsigned char)0)))) | (0)));
        arr_4 [i_0] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        var_13 = ((/* implicit */unsigned char) -1330282409);
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */long long int) min((((((/* implicit */int) ((signed char) var_3))) | (((var_7) + (arr_6 [i_1]))))), (((int) var_4))));
        arr_9 [i_1] |= ((/* implicit */int) arr_3 [i_1] [i_1]);
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) (-((~(arr_7 [i_1]))))));
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_1 [i_2] [i_2]) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0)))))));
        arr_14 [i_2] = ((/* implicit */long long int) var_2);
    }
    var_14 = ((/* implicit */int) var_3);
    var_15 = ((/* implicit */unsigned int) 2568620864392874060ULL);
}
