/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156248
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
    var_11 ^= ((/* implicit */unsigned long long int) ((min((min((var_5), (((/* implicit */unsigned int) var_1)))), (((unsigned int) 7464872034643354368ULL)))) << (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (10981872039066197255ULL)))))))));
    var_12 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + ((+(var_4))))));
    var_13 ^= var_10;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [(_Bool)1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1668518231)), (arr_1 [i_0 - 2] [i_0 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [9LL]))) : (max((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [i_0])) / (arr_7 [i_0] [i_0] [i_2])))), (((arr_2 [i_0 - 3]) + (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                    var_14 = ((/* implicit */signed char) var_3);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */long long int) arr_13 [i_0] [i_3]);
                        var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) max((arr_1 [i_2] [(unsigned char)18]), (((/* implicit */unsigned long long int) 4007345851887950370LL))))) ? (min((var_5), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) -305095176)))), (var_9)));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_17 -= ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) arr_0 [i_1])) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) 305095176)) ? (var_9) : (var_5)))), (arr_5 [i_0 - 1]))));
                        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0])) && (((/* implicit */_Bool) arr_10 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0]))))) : (var_10)));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 2] [i_1] [i_2] [i_5])))));
                            var_19 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [(signed char)4] [i_6] [i_1] [i_0 + 1] [i_6] [i_0 - 2]))));
                        }
                        for (unsigned int i_7 = 2; i_7 < 16; i_7 += 4) 
                        {
                            arr_26 [i_0] [i_7] [i_2] [i_7] |= ((/* implicit */long long int) arr_12 [i_0 + 1] [i_1] [i_7 + 1] [i_5]);
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_7] [(unsigned char)0] [i_7] [i_7 + 1] [i_7] [i_7])) == (((/* implicit */int) arr_17 [i_7] [i_7 + 1] [i_7 + 3] [6U] [i_1] [i_7])))))));
                            var_21 = ((/* implicit */unsigned int) -8893170202810179612LL);
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_5 [i_0]))));
                        }
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            arr_31 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_11 [i_0] [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_0 - 2]) : (arr_11 [i_0] [16LL] [i_0 - 2] [i_0 - 3] [i_0 - 3])));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */long long int) var_9)) == (-7661596821845721410LL))))));
                        }
                        var_24 = ((/* implicit */signed char) ((unsigned int) arr_14 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]));
                        arr_32 [i_0] = ((/* implicit */_Bool) -1566028337244429156LL);
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((9898758821489443243ULL) + (((/* implicit */unsigned long long int) 2756481774U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0 - 2] [i_1] [i_5] [i_5] [i_0] [(signed char)3])) ? (var_2) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [18]))))) : (-7661596821845721398LL))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        var_26 *= ((unsigned int) 3147191001U);
                        var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0 - 2] [i_9])) ? (((((/* implicit */_Bool) arr_30 [i_9] [i_2] [i_1] [16ULL] [i_0] [i_0] [i_9])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [i_0] [i_1] [8] [i_9] [i_1])))) : (((/* implicit */int) ((_Bool) var_8)))));
                    }
                    var_28 -= ((/* implicit */unsigned long long int) -5145330861866430289LL);
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned char) (~(var_4)));
}
