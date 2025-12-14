/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172498
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 3])) ? (((/* implicit */int) min(((short)25920), (((/* implicit */short) arr_8 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 3] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 3] [i_1 + 3] [i_1 + 1]))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 2; i_4 < 10; i_4 += 3) 
                            {
                                arr_14 [(unsigned char)1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((((/* implicit */int) (short)-3673)) <= (((/* implicit */int) (short)-14986))))), (min((((/* implicit */long long int) (signed char)10)), (6104743612940520356LL))))) < (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) var_10);
                                var_12 = ((unsigned int) max((arr_2 [i_1 + 3] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 - 1])));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2047ULL))))) : (((/* implicit */int) (unsigned char)141))))) ? (((/* implicit */int) ((_Bool) ((short) arr_10 [i_0] [i_2] [i_2])))) : (((/* implicit */int) ((unsigned char) (signed char)-113)))));
                                var_13 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4 + 2] [i_1 + 3] [i_1 + 1] [i_1 - 1])) || ((_Bool)0))))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                            {
                                var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709549545ULL)) ? (min((((/* implicit */long long int) ((_Bool) var_3))), ((~(238358806273703345LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((-6104743612940520347LL), (((/* implicit */long long int) 4277780182U)))))))));
                                var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-55))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    for (long long int i_7 = 4; i_7 < 9; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7 + 2] [i_7] [i_7 - 4] [i_7]))) ^ (((arr_17 [i_0] [i_0] [(unsigned short)5] [i_7] [i_8 + 2]) ? (((/* implicit */unsigned long long int) 1328663541U)) : (18446744073709549594ULL))))), (((/* implicit */unsigned long long int) ((((_Bool) -4521675486202516356LL)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) arr_6 [i_8 - 1] [i_8] [i_7 - 2] [i_1 + 3])))))));
                                var_17 = ((unsigned short) (signed char)-59);
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)0))) ? (((9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -238358806273703335LL))))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4521675486202516360LL)))))));
    var_20 = ((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned char) ((_Bool) ((_Bool) var_1))))));
}
