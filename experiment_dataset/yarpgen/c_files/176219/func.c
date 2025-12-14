/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176219
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_11) - (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_11)))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
        var_14 = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-507))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((long long int) 13878989589140537241ULL));
        /* LoopSeq 3 */
        for (int i_2 = 4; i_2 < 15; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~(((var_6) ? (((/* implicit */int) arr_2 [i_2 - 1])) : (((/* implicit */int) arr_2 [i_1])))))))));
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((int) var_5)))));
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (short)514))));
        }
        for (unsigned char i_3 = 3; i_3 < 13; i_3 += 1) /* same iter space */
        {
            arr_12 [10] |= ((/* implicit */unsigned char) (~((((_Bool)0) ? (max((-4017042854232815429LL), (((/* implicit */long long int) var_10)))) : (max((var_5), (((/* implicit */long long int) (_Bool)1))))))));
            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) / (min((var_5), (((/* implicit */long long int) (short)-9224)))))) + (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            arr_13 [i_1] = (short)-29871;
        }
        for (unsigned char i_4 = 3; i_4 < 13; i_4 += 1) /* same iter space */
        {
            var_20 &= ((/* implicit */short) (((+(12400566720464222286ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_4 - 1] [i_4 - 3]), (min((((/* implicit */signed char) var_6)), (arr_5 [(short)6] [i_4])))))))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)16)))))));
        }
        arr_17 [i_1] [i_1] = ((((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (short)15863)) : (((/* implicit */int) (short)-3488)))) >> (((((var_11) - ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_11))))) - (15497659185661464374ULL))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_22 = (!(arr_19 [i_5]));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((_Bool) var_2))), ((unsigned char)3)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((((11845558696231837748ULL) << (((9223372036854775807LL) - (9223372036854775782LL))))) - (13789424201305686005ULL)))))) : ((+(((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) : (1798597226U))))))))));
        var_24 = ((((/* implicit */int) (signed char)86)) ^ ((~(((/* implicit */int) min((var_3), ((_Bool)1)))))));
        arr_20 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) arr_18 [i_5])) : (1505525032)))) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [i_5])) >= (((/* implicit */int) arr_19 [i_5]))))) : (((((/* implicit */_Bool) 1798597226U)) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) arr_19 [i_5]))))));
        arr_21 [i_5] = ((/* implicit */long long int) (+(-1505525035)));
    }
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((/* implicit */int) var_10)))))));
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 2) /* same iter space */
                    {
                        arr_33 [i_8] [i_8] = ((((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) var_2)), (var_12))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-25891)) : (((/* implicit */int) (short)-17789))))) ? (((arr_6 [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (short)-3488))))));
                        var_26 = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) arr_23 [i_7] [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)62)))) + (((/* implicit */int) (short)-1))))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8] [i_8])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9 + 1] [4ULL] [i_9] [i_9]))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-10))) - (0LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= ((~(((/* implicit */int) (unsigned char)197))))))))));
                        arr_34 [i_6] [i_6] [i_8] [i_8] = ((/* implicit */short) max((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)98))))) ? (2552159299U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8] [i_9 + 1] [i_8] [i_9 - 2] [i_8]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_25 [i_6])), (-454898291620357808LL)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-16)) + (2147483647))) << (((((((/* implicit */int) (short)-22482)) + (22494))) - (12)))));
                        var_29 = ((/* implicit */unsigned long long int) ((((arr_37 [i_6] [i_7] [i_6] [i_10 + 1] [i_7]) != (((/* implicit */int) var_10)))) ? ((~((~(((/* implicit */int) var_12)))))) : (((/* implicit */int) ((((/* implicit */int) arr_29 [(short)7] [i_10 - 2] [i_10 - 1] [10ULL])) > (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((arr_19 [i_7]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))))) ? ((~((~(9223372036854775807LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1798597219U))))))))))));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 5429250336682001258ULL)) ? (-3957218645905369082LL) : (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                        var_32 |= ((/* implicit */short) ((var_6) ? (((((/* implicit */int) arr_29 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_7])) | (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned char) 15162534672554347099ULL)))));
                    }
                    arr_42 [1ULL] [i_8] = ((/* implicit */unsigned long long int) var_5);
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-14252)) * (((/* implicit */int) (short)-20290))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_8] [i_7])))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (-3957218645905369082LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                    var_34 = ((/* implicit */_Bool) ((var_1) ? (((var_1) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -882679146)) || (var_6))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_28 [i_8] [i_6]))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)3))))) : (((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-111))) : (-4386503335024986800LL))))))));
                }
            } 
        } 
    } 
}
