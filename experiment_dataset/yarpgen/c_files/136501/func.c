/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136501
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) 8043957355628075735ULL)))));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned short) var_14));
        var_15 = ((/* implicit */int) max(((~(((((/* implicit */_Bool) -2422591924058073960LL)) ? (((/* implicit */unsigned long long int) var_0)) : (10402786718081475881ULL))))), (((/* implicit */unsigned long long int) 0))));
        var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) | ((~(18446744073709551615ULL)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)49))))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) (short)32746))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)27390)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((((((/* implicit */int) (signed char)-62)) + (2147483647))) << (((1862906207639731736ULL) - (1862906207639731736ULL))))))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) 16583837866069819879ULL))));
        var_19 = ((/* implicit */short) arr_4 [(unsigned short)1]);
    }
    var_20 &= ((/* implicit */unsigned long long int) 472092419U);
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                arr_13 [i_2] [i_2] [i_3] = max((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [(unsigned short)5]))))), (((((/* implicit */_Bool) 0U)) ? (arr_11 [i_3]) : (((/* implicit */unsigned long long int) 0)))))));
                /* LoopNest 3 */
                for (signed char i_4 = 3; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_22 [i_2] [i_2] [i_4] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_4 - 3] [i_4 + 2] [i_4 + 1] [i_4 + 2])) && (((/* implicit */_Bool) arr_17 [i_4 - 3] [i_4 + 2] [i_4 + 1] [i_4 + 2])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)101)), (-11)))) : (((((/* implicit */_Bool) arr_15 [i_4 - 3] [i_4 + 2] [i_4 + 1] [i_4 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4 - 3] [i_4 + 2] [i_4 + 1] [i_4 + 2]))) : (arr_16 [i_4 - 3] [i_4 + 2] [i_4 + 1] [i_4 + 2])))));
                                var_21 *= ((/* implicit */unsigned int) ((max((arr_18 [(unsigned short)4] [i_3] [(unsigned short)4] [i_5] [i_6]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_2] [i_3] [(short)8]))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81)))));
                                arr_23 [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((signed char) (~(1360887435))));
                            }
                        } 
                    } 
                } 
                arr_24 [i_2] [14ULL] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (max((((/* implicit */unsigned int) var_4)), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_19 [9] [i_2] [i_3])), (arr_21 [i_2] [i_3] [i_3] [i_2] [i_2])))))))) ^ (5754463873275918019LL)));
                var_22 = ((/* implicit */unsigned short) arr_8 [i_2]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_7 = 1; i_7 < 10; i_7 += 1) 
    {
        var_23 = ((/* implicit */long long int) (signed char)68);
        arr_27 [2U] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_7 + 1] [i_7 - 1])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3427))))));
    }
    var_24 += ((/* implicit */unsigned short) (signed char)59);
}
