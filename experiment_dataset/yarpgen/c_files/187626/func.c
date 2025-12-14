/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187626
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
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) var_5)), (2704714828U))))), (257253850)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32754))));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3118517535U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))))), ((-(arr_0 [i_1])))))));
                        var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3])) ? (arr_10 [i_0] [i_1] [i_3]) : (arr_10 [i_0] [i_0] [i_3])))));
                        var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((arr_6 [i_3]) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_0]))))) ? ((-(2305772640469516288ULL))) : (((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned int) arr_2 [i_0])))))))));
                        arr_11 [i_3] [i_2] = ((/* implicit */unsigned long long int) (short)32726);
                    }
                    arr_12 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1] [(_Bool)1]) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_2])), (var_3)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)32760))))) : ((+(arr_9 [i_0]))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_8 [i_2] [i_0] [i_0])) : (((/* implicit */int) (signed char)-122)))), (((/* implicit */int) arr_5 [i_2] [7U] [i_0])))))));
                }
            } 
        } 
    }
    var_23 = min((var_14), (((/* implicit */unsigned long long int) var_11)));
    /* LoopSeq 2 */
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_13 [i_4] [i_4]), (arr_13 [i_4] [i_4])))) ? ((~(((/* implicit */int) arr_13 [i_4] [i_4])))) : (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) arr_13 [i_4] [7])) : (((/* implicit */int) arr_13 [i_4] [i_4]))))));
        var_25 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_13 [i_4] [i_4])))) ? (arr_14 [i_4] [i_4]) : (min((arr_14 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_15))))));
    }
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned char) arr_16 [i_5]);
        /* LoopSeq 1 */
        for (int i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            var_26 = ((/* implicit */signed char) arr_15 [4ULL]);
            arr_20 [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32754)) ? (24ULL) : (((/* implicit */unsigned long long int) 1048320U))))) ? (((/* implicit */int) min((arr_18 [(signed char)20]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_5])))))))) : (((int) (~(var_15))))));
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_11))));
        }
        arr_21 [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_18 [i_5]))))))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_18 [i_5])))) : (((/* implicit */long long int) (+(((/* implicit */int) min((arr_16 [i_5]), (((/* implicit */signed char) arr_15 [i_5]))))))))));
    }
}
