/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10575
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 560750930165760ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-5)))) & (var_3)))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) min((var_15), (var_4)))))))));
    var_19 &= ((/* implicit */unsigned short) var_4);
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)7))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_21 += ((/* implicit */unsigned long long int) var_12);
        var_22 += ((/* implicit */unsigned short) arr_1 [i_0] [i_0 + 1]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1])));
        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))));
    }
    for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        arr_9 [i_2] &= ((/* implicit */long long int) arr_1 [i_2] [i_2]);
        arr_10 [i_2] = ((/* implicit */unsigned int) max((max((((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))))), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (-(min((arr_8 [i_2] [i_2]), (((/* implicit */unsigned int) var_4)))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) -1995940344))))) * (((/* implicit */int) ((arr_13 [i_2]) > (arr_13 [i_2])))))) >= (((var_12) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_12 [i_2 - 1])))))))));
                    arr_15 [i_2] [i_2 - 1] [i_3] [i_4] |= ((/* implicit */signed char) (_Bool)1);
                    arr_16 [i_2] [i_3] [i_4] [(signed char)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (var_4)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) == (var_10))))) : (((unsigned int) (signed char)120)))))));
                }
            } 
        } 
    }
}
