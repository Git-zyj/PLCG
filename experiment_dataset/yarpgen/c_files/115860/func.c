/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115860
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
    var_16 *= ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 += ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (5402058957979650517LL)))) <= (((/* implicit */int) ((unsigned short) 5402058957979650517LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]))))))) : (var_6)));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_18 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) var_1)))))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) : (5402058957979650517LL))))))));
                        var_19 ^= ((/* implicit */signed char) ((max((((5402058957979650517LL) / (((/* implicit */long long int) 1703162335U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [10U])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)23382))))))) < ((~(arr_2 [i_3])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            arr_16 [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)23382))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(signed char)6] [i_1] [i_1] [(signed char)6] [i_1] [i_1] [i_1]))) : (max((arr_0 [i_0] [i_1]), (arr_1 [i_3])))))));
                            arr_17 [(signed char)5] [i_0] [i_2] [(signed char)2] [(signed char)2] [(signed char)6] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_4])) : (((/* implicit */int) (signed char)18))))) + (var_2)));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1]))) : (min((arr_0 [i_0] [i_4]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6)))))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_21 &= ((((/* implicit */_Bool) arr_9 [i_1] [i_3] [i_1] [i_5])) ? ((((!(((/* implicit */_Bool) (unsigned short)42748)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3] [i_5]))) : (5402058957979650517LL))) : ((~(-5402058957979650517LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_7)))) && (((/* implicit */_Bool) var_13)))))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) var_15)) <= (arr_19 [i_3] [i_1] [i_3] [i_1] [(signed char)8]))) ? (((((/* implicit */_Bool) (unsigned short)30766)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29059))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_3] [i_0])) ? (3730720998U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 126550165U)) ? (((/* implicit */int) arr_6 [i_3] [0LL])) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))), (((arr_6 [i_3] [i_3]) ? (arr_2 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3])))))))) : (arr_13 [i_1] [i_1]))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1703162335U)), (var_6)))) ? (((var_8) / (((/* implicit */long long int) ((/* implicit */int) (short)6758))))) : (((((/* implicit */_Bool) var_0)) ? (-4616480762314893372LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) : (((max((((/* implicit */unsigned long long int) 126550165U)), (var_2))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19)))))));
}
