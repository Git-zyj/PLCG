/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142014
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_6 [i_2] [i_2] [i_1 - 2] [i_0]))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1])))));
                    var_18 |= ((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (signed char)-1)))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_19 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2]))))) % (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_2] [i_2])))))));
                        var_20 |= ((/* implicit */short) max((((/* implicit */int) (short)3)), (132991466)));
                        arr_9 [i_1] [i_1] [i_1] [i_0] = min((6631661712227607768LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))) ? (4124499296U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        arr_10 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)1))))) + (((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)288))))))));
                        arr_11 [i_2] [i_2] [i_1] [i_2] |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) -8025237919956979627LL))), (((((/* implicit */int) var_11)) % (((/* implicit */int) arr_5 [i_3] [i_2] [i_0]))))))), (arr_1 [i_1])));
                    }
                    /* vectorizable */
                    for (short i_4 = 3; i_4 < 17; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 4; i_5 < 17; i_5 += 3) 
                        {
                            arr_18 [(unsigned short)9] [i_1] = ((/* implicit */int) (short)24639);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1824874301))))) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)288)) <= (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */int) (+(((var_12) & (((/* implicit */unsigned int) var_9))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (_Bool)1))));
                            arr_21 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_1)) + (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1 + 1] [17]))) : (6256729177750283966LL)));
                            var_24 ^= ((/* implicit */unsigned int) (+(arr_4 [i_0] [i_1 - 3] [12])));
                        }
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_2] [i_2])) / ((+(2147483647))))))));
                    }
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            arr_28 [i_0] [i_2] [i_0] [i_7] [i_0] [i_8] [i_2] |= ((/* implicit */int) arr_2 [i_1] [i_1 - 2]);
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 3])), (0U)))) && (((/* implicit */_Bool) ((long long int) (_Bool)0)))));
                            arr_29 [i_1] [i_1] [i_2] [i_7] = ((/* implicit */long long int) max((arr_8 [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0)))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_27 = (signed char)77;
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1 + 2])) == (((/* implicit */int) arr_2 [8U] [i_1 - 1]))))), (2111559801))))));
                            arr_32 [i_1] [i_7] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_19 [i_0] [i_0])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_16)) : (var_1)))))) ? (arr_20 [i_1] [i_2] [i_1]) : (((/* implicit */unsigned long long int) 132991470))));
                        }
                        var_29 &= ((/* implicit */unsigned char) 1457642153U);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 17; i_11 += 1) 
                        {
                            {
                                arr_41 [14LL] [14LL] [14LL] [14LL] [i_10] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((int) ((((/* implicit */unsigned long long int) var_1)) % (10689300219269050150ULL))))));
                                var_30 -= ((/* implicit */int) (+(max((((/* implicit */long long int) -272521767)), (-6256729177750283966LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */int) (((+(((/* implicit */int) var_11)))) <= (-378454230)));
    var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_14)))) || (((/* implicit */_Bool) var_8))));
    var_33 = ((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_7)) : (2U)))) ? (((127) * (((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32640))))))))));
}
