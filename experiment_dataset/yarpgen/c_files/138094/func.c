/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138094
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_10 = ((/* implicit */unsigned short) arr_0 [i_0] [1U]);
                    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_6 [i_1 + 1] [4LL] [i_1 + 1] [(unsigned short)4])) ^ (((/* implicit */int) var_9))))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                }
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    var_12 = ((/* implicit */signed char) 4294967291U);
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_13 ^= ((min((16909112310248389242ULL), (((/* implicit */unsigned long long int) (signed char)-69)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)56881)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))))));
                                var_14 = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) 8355840U);
                    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (signed char)69))) & (((/* implicit */int) arr_5 [i_0])))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [9ULL])) & (((/* implicit */int) arr_11 [i_0] [3ULL]))))), (arr_10 [i_1 + 2] [i_1 + 3])))) ? (arr_15 [i_1 + 2]) : (((/* implicit */unsigned long long int) var_0))));
                }
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((((/* implicit */_Bool) -6658958141611786813LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)105)))), (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_9)))))))) + (min((((/* implicit */long long int) var_5)), (min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)26613))))))));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 2; i_6 < 9; i_6 += 4) 
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0]))) : (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_14 [i_0])))) : (min((-6658958141611786813LL), (((/* implicit */long long int) 8U)))));
                    var_20 = ((/* implicit */unsigned long long int) (unsigned short)38923);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6]))) : (var_2)))) ? (var_0) : (((/* implicit */int) ((unsigned short) var_0)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((max((var_8), (((/* implicit */unsigned long long int) var_2)))) < (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [10] [i_0] [i_0]))) : (1537631763461162374ULL))))))));
                }
                for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    arr_21 [(signed char)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1] [(unsigned char)1])) : (((/* implicit */int) arr_6 [i_1] [i_1 + 2] [i_1] [9ULL]))))) ? ((-(((/* implicit */int) (signed char)116)))) : (((/* implicit */int) (signed char)-12))));
                    arr_22 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_15 [(unsigned short)2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)5))) : (var_2))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [4])) ? (var_3) : (((/* implicit */int) (signed char)0))))) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : ((~(((/* implicit */int) var_6)))))) : ((~(((/* implicit */int) arr_2 [i_1 + 3] [(unsigned short)1]))))));
                }
            }
        } 
    } 
    var_22 *= ((/* implicit */_Bool) var_4);
    var_23 = ((/* implicit */signed char) var_3);
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (unsigned char)5))));
}
