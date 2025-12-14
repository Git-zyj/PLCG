/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104141
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
    var_20 |= ((/* implicit */_Bool) (~(((long long int) max((var_17), (var_13))))));
    var_21 = (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)136)), (min((((/* implicit */int) (_Bool)0)), (var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] |= ((/* implicit */unsigned long long int) var_5);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    var_22 ^= ((/* implicit */unsigned int) (unsigned short)8191);
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_3] &= ((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_3] [i_3]);
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) 303554029U);
                            arr_13 [(signed char)9] [(signed char)9] [i_0] [i_3] = (unsigned short)54847;
                            arr_14 [3LL] [i_0] [3LL] [i_3] [13ULL] [(unsigned short)8] = ((int) var_14);
                        }
                        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */int) ((long long int) var_17));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (arr_2 [(short)14] [(short)14])));
                            var_25 = ((/* implicit */short) ((int) arr_8 [i_0] [i_0] [i_3] [i_5]));
                        }
                    }
                    for (unsigned char i_6 = 3; i_6 < 22; i_6 += 3) 
                    {
                        arr_20 [(_Bool)1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_15 [i_6 + 1] [i_6] [i_2] [i_1] [i_1] [i_0 - 1]))))) ? ((~(-3572742682788990149LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)819)))))));
                        var_26 |= ((/* implicit */int) ((long long int) var_14));
                        arr_21 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((unsigned short) min((arr_3 [i_0] [i_0]), (((/* implicit */int) (unsigned short)8191))))), (var_11)));
                        arr_22 [i_0] [i_2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)20))))) ? (min(((~(var_8))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) ((min((576475233), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) ^ (((/* implicit */int) arr_12 [i_6] [i_2] [i_6] [i_2] [i_6])))))));
                        var_27 += ((/* implicit */signed char) ((((((/* implicit */int) var_13)) ^ (((/* implicit */int) ((unsigned char) var_7))))) * ((-(((/* implicit */int) arr_12 [6LL] [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_6 + 1]))))));
                    }
                }
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_25 [i_0 - 2] [i_1] [i_1] [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            {
                                arr_31 [i_0] [i_1] [i_7] [4LL] [i_9] [i_8] [i_9] |= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_11 [i_0] [i_1] [i_7] [i_7] [i_8] [(unsigned short)3])))) - (arr_29 [i_0] [18LL] [i_7] [i_8] [i_7] [i_8] [i_8]))) << (((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29261))) : (((((/* implicit */_Bool) arr_27 [i_8] [i_8] [i_0] [i_0] [i_0])) ? (arr_7 [i_9] [(short)20] [i_7] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1016))))))) - (18446744073709522345ULL)))));
                                var_29 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) != (((/* implicit */int) ((signed char) var_15)))));
                                var_30 = ((/* implicit */_Bool) 1612345848);
                            }
                        } 
                    } 
                }
                var_31 += max(((+((+(0LL))))), (((/* implicit */long long int) min((arr_9 [i_0 - 1] [i_1 + 1] [i_1 - 1] [i_0 - 3] [2U]), (((/* implicit */int) min((((/* implicit */unsigned short) var_19)), ((unsigned short)64519))))))));
            }
        } 
    } 
}
