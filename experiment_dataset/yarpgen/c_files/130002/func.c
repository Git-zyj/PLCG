/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130002
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (+(1851460106)));
        var_15 &= ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned int) ((short) ((arr_0 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) arr_1 [i_0 + 1])))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_0 [i_1 - 2] [i_1])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_1] [i_1])))) : (max((((unsigned int) 0U)), (((((/* implicit */_Bool) 4294967293U)) ? (0U) : (4294967289U)))))));
        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_1 [i_1 + 1]), (arr_1 [i_1 - 1]))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 4; i_2 < 11; i_2 += 2) 
        {
            var_19 &= ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) (~(arr_6 [i_1])))), (var_11))));
            var_20 |= ((/* implicit */unsigned int) (((+(((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) > (((/* implicit */unsigned int) ((/* implicit */int) (short)30030)))));
        }
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (3081764576377241768LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (arr_3 [i_1 + 1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) min((arr_1 [i_1 + 1]), (((/* implicit */short) var_13))))) != (((int) var_0))))) : (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1])) ? (((int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1 - 2]))))));
    }
    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_3])) & (((int) ((int) var_12)))));
        arr_11 [i_3] = ((/* implicit */short) (~((+((~(((/* implicit */int) arr_1 [i_3]))))))));
    }
    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
    {
        arr_14 [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_12 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((var_0) + (((/* implicit */unsigned long long int) var_4)))))));
        var_22 &= ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) % (((/* implicit */unsigned long long int) ((int) arr_1 [i_4]))))));
    }
    var_23 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((var_0) + (var_3)))) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((unsigned int) var_12))))));
}
