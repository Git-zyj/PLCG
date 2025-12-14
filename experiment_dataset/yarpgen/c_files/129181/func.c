/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129181
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        arr_2 [14ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_17 = ((/* implicit */signed char) arr_0 [13U]);
        arr_3 [i_0] = ((/* implicit */unsigned short) (short)-1);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 8; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_1] [i_2] [i_2] [i_5]))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-86)) != (((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_2]))))) : (((/* implicit */int) arr_6 [i_2] [(unsigned short)2] [i_3]))));
                            arr_16 [i_3] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_5])) ? (838003714U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4])))))));
                        }
                        var_19 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (-1964673012292712521LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179)))))) ? (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_1])))) : (((int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
    }
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        arr_20 [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)235)), (((unsigned short) max((arr_18 [i_6] [i_6]), (((/* implicit */unsigned int) arr_0 [(unsigned short)2])))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_6] [i_6])) + (((/* implicit */int) arr_1 [(unsigned char)12] [i_6]))))) ? (((/* implicit */int) max((arr_0 [i_6]), (arr_0 [i_6])))) : (((((/* implicit */_Bool) (unsigned short)18031)) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) arr_1 [i_6] [i_6])))))))));
        arr_21 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) min((6287801659535827069ULL), (((/* implicit */unsigned long long int) (signed char)8)))))) == (((/* implicit */int) ((min((arr_19 [i_6]), (((/* implicit */unsigned long long int) 1964673012292712519LL)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23901))))))));
    }
    var_22 = ((/* implicit */unsigned char) 0);
}
