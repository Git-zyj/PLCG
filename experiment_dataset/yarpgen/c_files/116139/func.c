/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116139
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
    var_11 = ((/* implicit */signed char) ((max((min((((/* implicit */long long int) var_0)), (5612005687703824447LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (signed char)-25))))))) % (((/* implicit */long long int) (-(((((/* implicit */int) var_4)) / (((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32753))) : (19LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)37)))));
        arr_3 [i_0] [(signed char)6] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))) > (3531823559U)));
        var_12 = ((/* implicit */unsigned char) ((arr_1 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    }
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_0))));
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((-6590024441148698724LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236)))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 0)))) ? (((arr_4 [i_1] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_8))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)163)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20894))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-3)) / (((/* implicit */int) arr_5 [(unsigned char)10])))))))) != (((/* implicit */int) var_2))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 13; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            arr_17 [i_1] [i_2] [i_5] [i_4] [i_5] |= ((/* implicit */unsigned char) arr_16 [i_1] [i_2] [i_3] [(unsigned char)12] [i_5]);
                            var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max(((unsigned char)1), (((/* implicit */unsigned char) var_2))))) ? ((~(1073741824))) : (((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned char)15)))))) >= (((((/* implicit */_Bool) (((-2147483647 - 1)) ^ (((/* implicit */int) (_Bool)1))))) ? (-2003709641) : (((/* implicit */int) (unsigned short)0))))));
                            arr_18 [i_2] [i_2] = ((/* implicit */unsigned int) (signed char)120);
                            arr_19 [i_1] [i_4] [i_3] [i_2] [i_5] = arr_4 [i_3] [i_3];
                        }
                        var_19 += ((/* implicit */unsigned int) ((int) (signed char)127));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * ((~(((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */int) (short)-1)) : ((+(((/* implicit */int) (unsigned char)224)))))) : (max((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-17)))), (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6] [(short)14])))))))))));
        var_21 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6])) ? (arr_21 [10LL] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) : (arr_11 [i_6] [i_6]))));
    }
}
