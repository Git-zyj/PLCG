/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134895
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((arr_6 [i_0] [i_1]) != (arr_6 [i_0] [i_0]))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((((int) arr_3 [i_0] [i_2] [i_0])) ^ (max((-1816696126), (((/* implicit */int) (short)29648))))))) + (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) & (var_5)))) : (((((/* implicit */long long int) arr_5 [i_0] [i_2] [i_2])) & (5311455313001368864LL)))))));
                    var_21 += ((/* implicit */short) ((max((((/* implicit */long long int) arr_4 [i_0] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) (short)-29655))) + (-1LL))))) * (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 745273710)) && (((/* implicit */_Bool) 4LL))));
                                arr_18 [(unsigned short)6] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1])) - (((/* implicit */int) (unsigned short)2481))))) ? (((/* implicit */long long int) ((148845049) ^ (((/* implicit */int) arr_8 [i_0]))))) : (27LL)));
                                arr_19 [i_1] [i_0] [(short)3] [(short)3] [i_4] [i_2] [(signed char)2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 4294967278U)) ? (((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6455))) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-14)) / (var_10))))))));
                                var_23 = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [8] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            for (short i_7 = 2; i_7 < 13; i_7 += 4) 
            {
                {
                    var_24 = ((((((/* implicit */int) (unsigned short)16376)) ^ ((~(((/* implicit */int) (short)-256)))))) - (((((/* implicit */int) arr_23 [i_5] [i_7 + 2])) & (((/* implicit */int) ((((/* implicit */unsigned int) 2147483647)) >= (15865541U)))))));
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (((~(((((/* implicit */int) arr_24 [i_5])) >> (((arr_22 [i_5]) - (1513910504))))))) | (min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_21 [i_7 + 1])))))))));
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */long long int) ((int) ((115964834) > (((/* implicit */int) (_Bool)1)))))) ^ (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65515))) + ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */int) arr_21 [(short)0])) ^ (((/* implicit */int) arr_24 [i_6]))))))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) (signed char)21);
        var_28 = ((/* implicit */short) ((long long int) max((93923805U), (((/* implicit */unsigned int) (~(var_17)))))));
    }
    var_29 = var_8;
}
