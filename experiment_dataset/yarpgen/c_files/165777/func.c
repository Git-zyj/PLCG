/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165777
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
    var_15 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)1711)) ? (((/* implicit */int) (short)-1711)) : (((/* implicit */int) (short)0))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */short) max(((!((_Bool)1))), (((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))))))));
        arr_3 [i_0] &= min((((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) ((_Bool) var_13))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) arr_1 [i_0])))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) max((-4572037160557361638LL), (((/* implicit */long long int) arr_1 [i_0]))))))))));
        arr_6 [i_0] [i_0] = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_6))), (((/* implicit */unsigned long long int) arr_1 [i_0])))) % (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_8)))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_10 [i_1] = ((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_0))));
        arr_11 [i_1] = ((/* implicit */unsigned char) (signed char)-58);
        arr_12 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_1))))) * (((/* implicit */int) ((unsigned char) -4572037160557361638LL))))) << (((((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))))) + (114)))));
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            arr_16 [i_2] [i_1] [i_1] = ((/* implicit */short) arr_1 [i_1]);
            var_16 = ((/* implicit */short) arr_15 [i_1]);
        }
    }
}
