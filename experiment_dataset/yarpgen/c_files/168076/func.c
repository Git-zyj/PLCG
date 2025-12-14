/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168076
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 211335313U)) && (((/* implicit */_Bool) 16500611172388731000ULL)))))));
                    arr_7 [i_0] [i_1] &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)27))))), (min((((/* implicit */long long int) (+(1073610752)))), ((+(3387051284330424567LL)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (1946132901320820616ULL) : (var_11)))) ? (arr_15 [(unsigned short)0] [1LL] [i_5] [(_Bool)1] [i_5] [i_5 - 1] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16500611172388731000ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [9LL] [9]))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16500611172388731000ULL)) ? (((unsigned int) -760091211)) : (((/* implicit */unsigned int) var_7))))) : (((arr_3 [i_5 - 3]) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (arr_3 [(unsigned short)3])))))));
                                arr_16 [3ULL] [i_5] [(unsigned short)8] = ((/* implicit */unsigned int) var_9);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((long long int) var_10))), (((((/* implicit */_Bool) arr_0 [(unsigned short)7])) ? (103607857904709292ULL) : (((/* implicit */unsigned long long int) 9223372036854775795LL)))))), (min((var_9), (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned long long int) 760091211)))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 7; i_7 += 3) 
                    {
                        var_17 = ((/* implicit */int) (~(((((/* implicit */unsigned int) var_6)) - ((+(var_12)))))));
                        var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 138538465099776LL)) ? (2468201218004377835ULL) : (((/* implicit */unsigned long long int) 116279379))))));
                        arr_19 [i_0] [i_3] [1ULL] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_12 [i_0] [(unsigned short)8] [2ULL] [i_7 + 2])))) ? (max((arr_12 [i_3] [1LL] [1U] [i_7 + 1]), (arr_18 [7ULL] [2ULL] [i_4] [i_7 + 2]))) : (arr_18 [i_0] [1U] [9U] [i_7 + 2])));
                        arr_20 [5ULL] [i_3] [1U] = ((/* implicit */long long int) var_2);
                    }
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 3) 
                        {
                            var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                            var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) 760091210)), (3858978916U)));
                            var_21 = ((/* implicit */unsigned long long int) ((17511530567491933226ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [3LL] [i_3] [i_4] [i_8] [(unsigned short)7] [8LL] [6]))) & (min((arr_9 [8ULL] [2] [(_Bool)1]), (((/* implicit */long long int) arr_22 [i_9] [i_8] [0LL] [i_3] [9LL])))))))));
                            var_22 *= min((((unsigned long long int) arr_23 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1])), (((/* implicit */unsigned long long int) ((arr_1 [i_9 - 1]) > (arr_1 [i_9 + 1])))));
                            var_23 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((3711866526U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9 - 1] [i_9])))))), (min((var_2), (((/* implicit */unsigned long long int) arr_5 [i_9 + 1] [i_9]))))));
                        }
                        for (int i_10 = 3; i_10 < 9; i_10 += 3) 
                        {
                            arr_30 [(short)1] [(unsigned short)9] [(unsigned char)1] [i_8] [(unsigned char)1] [8ULL] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_10 - 2] [i_10 - 3])) ? (((unsigned long long int) var_7)) : (((unsigned long long int) arr_6 [8LL] [(unsigned short)1] [(signed char)2])))) & (((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (-47431630))))));
                            arr_31 [i_0] [(_Bool)1] [(_Bool)1] [7] [1] [4U] = ((/* implicit */long long int) var_11);
                            var_24 += ((/* implicit */unsigned int) arr_9 [8] [i_4] [7]);
                        }
                        var_25 = ((/* implicit */long long int) var_1);
                        var_26 = ((/* implicit */short) arr_4 [(unsigned char)0] [i_3] [6LL]);
                    }
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (arr_3 [(unsigned short)7]) : (((/* implicit */unsigned long long int) var_12)))) << (((-1173545662640577084LL) + (1173545662640577085LL)))))) ? (((((/* implicit */_Bool) (+(4232393432506350737ULL)))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(signed char)2] [0] [(unsigned short)6] [(unsigned char)0] [5LL]))) : (1946132901320820615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102))) < (var_9)))))));
                    var_28 -= ((/* implicit */unsigned short) var_11);
                }
            } 
        } 
    }
    var_29 ^= ((/* implicit */short) var_2);
    var_30 = ((/* implicit */long long int) var_9);
}
