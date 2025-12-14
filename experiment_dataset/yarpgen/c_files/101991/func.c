/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101991
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
    var_14 = ((/* implicit */unsigned char) var_1);
    var_15 = var_2;
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_13))))) - (var_9)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((~(var_9))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */int) (short)12642)) < (((/* implicit */int) arr_1 [12]))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)39)) * (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) max(((unsigned short)15538), (((/* implicit */unsigned short) (signed char)73)))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) min(((short)32767), (((/* implicit */short) (((_Bool)1) || ((_Bool)1))))));
        arr_5 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((long long int) var_12))) ? (max((var_6), (((/* implicit */unsigned long long int) 2670823054U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)27435))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_1] [i_1 - 1])) : (1890725347)))))));
        arr_9 [i_1 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_1]))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1])))) : (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) var_3))))));
    }
    for (unsigned short i_2 = 4; i_2 < 15; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */signed char) max((((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) var_11))))), (((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */signed char) var_11)), (var_12)))) == (((/* implicit */int) var_1)))))));
        arr_14 [i_2] = ((unsigned short) ((unsigned short) -877140386));
        arr_15 [6ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)212), ((unsigned char)108))))))))));
    }
}
