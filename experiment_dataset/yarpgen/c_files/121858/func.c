/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121858
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0] [i_0])))))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) ^ (arr_1 [i_0 + 1] [i_0 + 1]))), (((arr_1 [(unsigned char)9] [(unsigned char)9]) ^ (arr_1 [i_0 - 1] [i_0])))))));
        var_17 = ((/* implicit */unsigned int) (+((+(arr_0 [i_0] [i_0 - 1])))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_1 [i_1 + 1] [i_1 + 1]) << (((arr_1 [i_1] [(short)11]) - (7474395444774584028ULL)))))))))));
        arr_4 [i_1] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_2 [i_1] [i_1 - 1])) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1] [i_1 + 1])))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_2 [i_1] [i_1 + 1]), (arr_2 [i_1] [i_1 + 1])))) <= (((arr_2 [i_1] [i_1 + 1]) ? (((/* implicit */int) arr_2 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1] [i_1 + 1]))))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)195)) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) var_5)) : (6013864456193402098LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) != (arr_1 [2U] [2U]))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2 - 1] = ((/* implicit */long long int) arr_3 [i_2 - 1] [8ULL]);
        arr_9 [i_2] [i_2 + 1] = ((/* implicit */unsigned char) ((int) (-(var_4))));
        arr_10 [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [(unsigned char)6])) != (((/* implicit */int) (unsigned char)255)))))));
    }
    var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) (+(var_11)))) : ((+(var_4))))), (((/* implicit */unsigned long long int) var_13))));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (min((((/* implicit */unsigned int) var_14)), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) (short)12340)))))))))) && (((/* implicit */_Bool) var_10)))))));
}
