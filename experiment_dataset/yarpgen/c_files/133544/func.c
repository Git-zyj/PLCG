/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133544
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
    var_12 = ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) (!(var_5))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)63647)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (_Bool)0))))) / (-1LL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_4 [i_0] [i_1])))))) < (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 1])) < (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 1])))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 18359713028491909525ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-9)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_3))))))))));
                                var_15 *= (signed char)-9;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            var_16 *= arr_1 [i_0];
                            /* LoopSeq 3 */
                            for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                            {
                                var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5] [i_0] [i_5] [i_5])) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (arr_1 [(_Bool)1])))) : (((/* implicit */int) arr_1 [i_0])))) == (((/* implicit */int) var_4))));
                                var_18 = ((/* implicit */unsigned short) (short)1440);
                                var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0 + 1] [i_0 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))))) + (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_23 [i_0] [i_1] [i_5] [i_6] [i_1] [i_1])), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_17 [i_5] [i_1])))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_5] [i_6] [i_5])) ? (arr_13 [i_0] [i_1] [i_5] [i_1] [i_7]) : (((/* implicit */unsigned long long int) -4776383345491623286LL))))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_5))));
                                var_21 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_1] [i_5] [(unsigned char)14] [i_8])) || (((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_5] [i_6])))) && ((!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0]))))));
                                var_22 = ((/* implicit */unsigned short) arr_25 [i_0] [i_1] [i_5] [i_5]);
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)16)) >> (((((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_0])) - (64571)))))) | (((var_6) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))))));
                            }
                            for (unsigned short i_9 = 3; i_9 < 24; i_9 += 2) 
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((_Bool) arr_26 [i_9] [i_9 + 1] [i_0 + 2] [i_0] [i_0])) ? ((-(((((/* implicit */_Bool) arr_19 [i_1] [(unsigned short)10] [(unsigned short)10] [11ULL])) ? (arr_15 [i_1] [(signed char)2] [i_1] [(signed char)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [5LL] [(signed char)13] [i_6] [i_5] [i_5] [i_1] [i_0]))))) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) var_8))))) : ((+(((/* implicit */int) var_0))))))))))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_6] [i_6] [i_1] [i_9])) : (((/* implicit */int) (_Bool)1))))) ? (min((-4776383345491623275LL), (((/* implicit */long long int) arr_12 [i_5] [i_1] [i_0 - 2] [i_5] [i_9 - 1] [i_1] [i_0 - 2])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                                var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)27766))));
                                var_27 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_27 [i_9 - 2])) || (((/* implicit */_Bool) 18446744073709551610ULL))))));
                            }
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (signed char)(-127 - 1)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
