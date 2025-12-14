/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168078
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((min((var_3), (-1LL))) + (9223372036854775807LL))) >> (((max((4110466289U), (0U))) - (4110466276U)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)36184)), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)29352), ((unsigned short)29360))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)117))) : (13LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0)))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                    var_13 = ((/* implicit */unsigned short) max((var_13), ((unsigned short)36184)));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_11 [i_2] [8LL] [i_2] = ((/* implicit */unsigned char) (+(min((((/* implicit */int) ((unsigned char) (unsigned short)36167))), ((~(((/* implicit */int) arr_3 [i_0] [(unsigned short)10]))))))));
                        var_14 |= arr_9 [i_0] [i_1] [i_0] [i_3] [(signed char)8];
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1 + 1])) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_0]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1]);
                            var_17 = ((/* implicit */unsigned int) (short)511);
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (arr_10 [i_0] [3U] [i_2] [3U] [3U] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180)))))))) ? (((/* implicit */int) max(((unsigned short)5399), ((unsigned short)29369)))) : (((/* implicit */int) ((unsigned char) (unsigned char)151))))))));
                        }
                        for (short i_6 = 2; i_6 < 14; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_1 - 3] [i_2] [i_0] [i_6 - 1] = ((/* implicit */long long int) ((arr_8 [i_1 + 1] [i_6 - 1] [i_6] [i_6]) == (((/* implicit */long long int) arr_9 [i_0] [i_6 - 1] [(unsigned short)7] [i_4] [i_1 - 1]))));
                            var_19 = (unsigned short)4096;
                            arr_20 [i_0] [4LL] [i_1] [i_2] [4U] [5LL] = ((/* implicit */unsigned int) (unsigned short)60140);
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) arr_7 [(unsigned short)9] [i_1]))))))))) == (arr_2 [i_0] [i_1 + 1] [i_2])));
                        }
                        for (long long int i_7 = 2; i_7 < 12; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), ((+(((((arr_22 [i_1] [i_1] [i_1 + 1] [i_1] [i_7]) + (9223372036854775807LL))) >> (((1832053337250974987LL) - (1832053337250974977LL)))))))));
                            var_22 = ((/* implicit */unsigned int) max((((((/* implicit */int) ((((/* implicit */int) (unsigned short)60136)) == (((/* implicit */int) (unsigned char)67))))) >> (((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)29369)))) - (29352LL))))), (((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) min(((unsigned short)45622), ((unsigned short)29368)))) - (29345)))))));
                            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0] [i_0] [(short)13] [i_4] [i_7]))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (short)29700)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)60)) || (((/* implicit */_Bool) (signed char)127))))))));
                        }
                        var_24 -= ((/* implicit */short) (unsigned char)230);
                        arr_24 [i_0] [5LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_14 [i_0] [i_1 - 2] [i_2])), (arr_12 [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_12 [i_1 - 3])) : (((/* implicit */int) arr_14 [(unsigned short)8] [i_1 - 1] [i_2])))) : ((~(((/* implicit */int) arr_14 [i_0] [i_1 - 3] [i_2]))))));
                        var_25 = ((/* implicit */unsigned int) max(((unsigned short)5399), (((/* implicit */unsigned short) (unsigned char)63))));
                        var_26 &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1] [(unsigned char)4] [i_4]))));
                    }
                }
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) 1654575874U);
                    arr_29 [(unsigned char)6] [(unsigned char)6] [i_8] [i_8] = ((/* implicit */_Bool) arr_5 [i_0] [i_0]);
                    var_27 -= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)6172), (((/* implicit */unsigned short) arr_6 [3U])))))) == (((((/* implicit */_Bool) (signed char)127)) ? (4240895739U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_1 - 3] [i_1] [i_1 - 2] [i_1] [i_1 - 3])) >> (((arr_5 [i_0] [i_1 - 1]) - (1138801762713906369LL))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 3; i_9 < 12; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-108)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_7))))) : ((+(((/* implicit */int) (unsigned short)16888))))))) : ((-(((long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                        arr_32 [i_9] [(_Bool)1] = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)16882));
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_25 [(unsigned char)1] [i_10]))));
                    var_30 = ((/* implicit */_Bool) -3214292745999371375LL);
                }
                var_31 |= ((/* implicit */unsigned char) (signed char)96);
                var_32 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3214292745999371361LL)) ? (arr_5 [i_1 - 3] [i_1 - 1]) : (((/* implicit */long long int) arr_33 [i_0] [i_1 - 3] [i_0])))) >> (((/* implicit */int) ((arr_5 [i_1 - 2] [i_1 + 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_17 [(unsigned char)12] [i_1] [i_1] [i_1 - 1] [i_1]))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)5)), (var_1)))) ? (((long long int) (unsigned char)216)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)29350)) >> (((((/* implicit */int) (short)-7870)) + (7891))))))))) || (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_9))))));
    var_34 = ((/* implicit */signed char) (short)0);
}
