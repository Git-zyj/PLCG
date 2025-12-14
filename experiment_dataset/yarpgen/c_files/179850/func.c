/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179850
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
    var_20 ^= (+(((/* implicit */int) (signed char)0)));
    var_21 = ((/* implicit */_Bool) (+(var_3)));
    var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_9))) : (((/* implicit */unsigned int) ((int) (signed char)-1)))))));
    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_16))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (1121501860331520LL) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) var_10)) : (var_6))))) : (((/* implicit */unsigned long long int) (-(var_10))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_24 = ((/* implicit */int) ((unsigned int) (-(min((var_10), (1064919359))))));
        var_25 = ((/* implicit */long long int) var_9);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_26 = ((/* implicit */long long int) var_12);
        var_27 *= ((/* implicit */unsigned long long int) -1064919349);
        arr_7 [i_1] = ((/* implicit */long long int) (short)-6805);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                {
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)32768))))) ? (((/* implicit */unsigned long long int) min((581608109), ((-(arr_4 [0LL])))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1])) ? (-5325303994038082895LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1])))))) & (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) arr_9 [(unsigned char)6])))))))))));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) 5325303994038082894LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1]))) : (((long long int) arr_8 [i_3 + 2] [i_2] [4])))) : (((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) + (var_3))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))))))))));
                }
            } 
        } 
        arr_12 [10LL] &= ((/* implicit */unsigned long long int) (~(-1064919349)));
    }
}
