/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166699
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
    var_19 = ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_0)))) ? (((((/* implicit */_Bool) -6235454646508335226LL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (11323574540698334439ULL))) : (max((((/* implicit */unsigned long long int) var_3)), (7123169533011217199ULL))))) : ((((~(7123169533011217176ULL))) & (((/* implicit */unsigned long long int) (-2147483647 - 1))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (unsigned char)46;
                var_20 = ((/* implicit */unsigned char) var_12);
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) -739333620539431012LL)) : (11323574540698334439ULL))), (((unsigned long long int) arr_0 [i_2]))));
                                arr_15 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])))))));
                                arr_16 [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)7596)))) ? (max((14535563038958800429ULL), (((/* implicit */unsigned long long int) (short)-2967)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(35184372088831LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_1] [i_2] [i_4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2966))))))) : ((~(9223372036854775807LL))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (6806393348640138314ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (short i_6 = 3; i_6 < 9; i_6 += 2) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned char) max((arr_14 [i_5] [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6]), (((/* implicit */unsigned long long int) ((unsigned char) 7123169533011217176ULL)))));
                                var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 9495828233885892246ULL))))), (-76284529706995213LL)));
                                var_25 ^= arr_21 [i_2] [(short)4] [i_6 - 1] [i_5] [i_2];
                                var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (short)9789))))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_8 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0])))))));
                            }
                        } 
                    } 
                }
                for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    arr_25 [(unsigned char)0] [i_1] [i_1] [i_7] |= ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (3021474163785236082ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21791)))));
                    var_27 = ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (unsigned char)1)));
                }
                var_28 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)7591)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [6LL] [i_1] [i_1] [i_1] [i_1]))) : (4638543925903449773ULL)))));
            }
        } 
    } 
}
