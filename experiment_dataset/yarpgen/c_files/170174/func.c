/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170174
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (0U)))), (var_6)))), (((unsigned long long int) (short)0)))))));
    var_13 = ((/* implicit */short) ((((/* implicit */int) (short)0)) < ((~(((var_8) / (((/* implicit */int) var_7))))))));
    var_14 = var_7;
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)30127)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_2))) < (var_5))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (max((arr_0 [i_0]), (((/* implicit */unsigned int) (unsigned char)7)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 28)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)30127)))))))));
        arr_2 [i_0] = ((/* implicit */short) var_8);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(((unsigned long long int) (_Bool)1)))) : (((((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) -29)) : (12ULL))) * (((/* implicit */unsigned long long int) (-(var_9))))))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0] [i_0]) : (arr_0 [5U])))) ? (((/* implicit */int) ((unsigned char) (short)23))) : (((/* implicit */int) (signed char)(-127 - 1)))))) % (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : (41)))), (6796141461601339795LL))))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(signed char)19])) ? (((((/* implicit */_Bool) (-(arr_1 [(short)20] [i_1])))) ? ((+(arr_5 [i_1] [i_1]))) : (((arr_0 [i_1]) & (var_6))))) : (((((/* implicit */_Bool) 402653184)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [10]))))))))));
        var_18 &= ((/* implicit */int) arr_0 [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)213)) > (((/* implicit */int) (short)-1)))))))) ? ((~(((((/* implicit */_Bool) 28)) ? (var_9) : (arr_0 [i_2]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15312))))) ? (((/* implicit */unsigned int) 28)) : (arr_5 [i_2] [(unsigned short)4])))));
        arr_9 [i_2] [i_2] = ((/* implicit */signed char) arr_6 [(signed char)3]);
        var_20 += ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)55765))))) < (((((/* implicit */_Bool) var_6)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (short)7766)), (((var_11) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2]))))));
        var_21 *= max((((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) -28))))) : (((unsigned long long int) arr_7 [21ULL])))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    var_22 = ((/* implicit */signed char) (short)-30);
                    var_23 = ((/* implicit */unsigned short) max((var_23), (var_1)));
                }
            } 
        } 
        arr_18 [i_3] = (-(((/* implicit */int) ((((/* implicit */int) var_2)) != (((((/* implicit */_Bool) arr_10 [i_3])) ? (var_8) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))))))));
    }
}
