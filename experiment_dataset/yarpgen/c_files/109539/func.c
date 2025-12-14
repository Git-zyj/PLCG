/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109539
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
    var_19 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((var_5) < (((/* implicit */int) (_Bool)0)))))) > (((((/* implicit */_Bool) 3893597918095879584LL)) ? (-3893597918095879584LL) : (((/* implicit */long long int) var_5)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (0ULL)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (var_5))))))) : (((/* implicit */int) ((signed char) var_17)))));
    var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_13))));
    var_21 = ((/* implicit */int) max((3893597918095879584LL), (((/* implicit */long long int) min((var_9), (((/* implicit */unsigned int) ((_Bool) var_15))))))));
    var_22 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)41264), (((/* implicit */unsigned short) var_1)))))) : ((-(4294967295U)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) -3893597918095879585LL)) ? (4294967290U) : (var_9)))), (3893597918095879571LL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4249279059U)) ? (3893597918095879583LL) : (((/* implicit */long long int) arr_8 [i_3] [i_3] [i_3] [i_2]))))) || (((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1] [i_2 - 1] [i_2])));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (short)-5368))));
                        var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51371))) | (arr_8 [i_0] [(unsigned char)4] [i_2 + 1] [(signed char)4])))));
                    }
                    var_26 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_2 - 1]))) == (arr_1 [i_0 + 1])));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) 13U))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10932))) : (9223372036854775807LL))) : (((long long int) (unsigned short)51371))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((arr_12 [(short)9] [i_1] [i_0 - 1]) + (2147483647))) >> (((arr_12 [i_0] [6ULL] [i_0 - 1]) + (710609426)))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            arr_18 [i_4] [i_4] [i_1] [i_5] [i_1] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14192)) / (((/* implicit */int) (short)-5396))));
                            var_29 ^= ((/* implicit */_Bool) (+(2140974122U)));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 2])) >= (((/* implicit */int) arr_13 [i_0 - 2] [i_0 - 1] [(short)2] [i_0] [i_0 + 1])))))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (~(12431563187597909568ULL))))));
                        }
                        arr_19 [i_0] [i_4] [i_0 - 2] [4LL] [i_0 - 2] = ((/* implicit */signed char) ((arr_12 [i_0] [i_0 - 2] [i_0 - 2]) == (arr_12 [i_0] [i_0 - 1] [i_0])));
                    }
                    for (int i_7 = 2; i_7 < 6; i_7 += 4) 
                    {
                        var_32 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4110207294865826453LL)) ? (arr_14 [(signed char)5] [i_1] [i_1] [(signed char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_33 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0 - 2] [i_4] [i_7] [i_4]))) > (((((/* implicit */_Bool) 6015180886111642055ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (4294967295U)))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_34 = ((/* implicit */short) (+((+(((/* implicit */int) arr_3 [(short)3] [(signed char)0]))))));
                        var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32212)) ? (5181073517977522468ULL) : (((/* implicit */unsigned long long int) 2147483647)))))));
                        var_36 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12431563187597909548ULL)) ? (12431563187597909581ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 2] [i_8] [i_4])))));
                    }
                    arr_24 [i_4] = ((/* implicit */short) ((arr_15 [i_0] [i_0 + 1] [(signed char)3] [i_0 - 2] [i_1] [i_4]) > (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_0])))));
                    var_37 |= ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0] [(short)6] [i_0 + 1])) % (((/* implicit */int) ((((/* implicit */long long int) arr_12 [4LL] [4LL] [i_4])) != (4914293661261287776LL))))));
                }
                for (unsigned char i_9 = 2; i_9 < 9; i_9 += 4) 
                {
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46489)) && ((_Bool)1))))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-5368)), (4294967295U)))), ((-(6015180886111642053ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_17 [i_9] [i_1] [i_9] [(signed char)8] [i_0 - 2])))))))));
                    var_39 &= ((/* implicit */signed char) ((unsigned char) (~(1177740523U))));
                    var_40 *= ((/* implicit */unsigned long long int) ((_Bool) (-(((((/* implicit */_Bool) 6015180886111642034ULL)) ? (((/* implicit */int) arr_23 [i_9] [i_1] [2] [i_9])) : (2147483647))))));
                }
                for (unsigned short i_10 = 2; i_10 < 9; i_10 += 3) 
                {
                    arr_31 [i_10] [i_1] [9LL] [i_10] = ((/* implicit */int) ((long long int) ((short) ((((/* implicit */_Bool) arr_28 [i_1] [i_10])) ? (3060367827U) : (((/* implicit */unsigned int) 143071511))))));
                    arr_32 [(unsigned short)2] [i_1] [i_1] [i_10 + 1] |= ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) arr_17 [i_0 + 1] [i_0] [(short)4] [i_0] [i_0])))));
                    var_41 = ((/* implicit */_Bool) ((long long int) ((int) max((((/* implicit */long long int) (_Bool)1)), (1209004439635888536LL)))));
                }
                var_42 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 + 1]))))), (((((/* implicit */_Bool) max((6015180886111642053ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (12431563187597909565ULL) : (min((6015180886111642034ULL), (((/* implicit */unsigned long long int) arr_7 [i_0 + 1] [6U] [i_0]))))))));
                var_43 = ((/* implicit */long long int) (short)-23875);
                var_44 = ((/* implicit */signed char) min((((/* implicit */int) min((((short) (_Bool)1)), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */int) arr_22 [i_0 - 2] [i_0 - 2] [0LL] [i_1])) % (((/* implicit */int) ((_Bool) arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1])))))));
            }
        } 
    } 
}
