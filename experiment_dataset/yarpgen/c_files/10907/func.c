/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10907
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
    var_20 ^= var_4;
    var_21 = ((/* implicit */unsigned short) var_18);
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((-1) / (((/* implicit */int) (unsigned char)169))))), (var_9)));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))))) ? (((long long int) arr_1 [i_0 - 2])) : (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
        var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_13)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */_Bool) var_15);
        var_24 = ((/* implicit */_Bool) (+(max((arr_6 [i_1] [i_1]), (((/* implicit */long long int) arr_5 [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] &= ((/* implicit */short) (((~(((/* implicit */int) (unsigned short)49152)))) ^ ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) == (10761093125501544599ULL))))))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2626272034348653254LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 3556100051U)) >= (-6675948244286867517LL))))) : (18446744073709551615ULL)));
    }
}
