/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1805
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1544637857773508635LL), (((/* implicit */long long int) var_16))))) ? (((/* implicit */long long int) 0U)) : (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)23971)))))))) ? (max((var_17), (((((/* implicit */_Bool) 2034147298U)) ? (var_19) : (1336803922))))) : (((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_7))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        arr_11 [i_1] [i_2] [i_1] [i_0] = var_0;
                        var_21 = ((/* implicit */unsigned long long int) 1236870537055924254LL);
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_9 [i_0] [(unsigned short)13] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 4294967265U))))))))));
                            arr_15 [i_2] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4] [i_1] [i_1] [i_0])) ? (max((((arr_9 [i_4] [i_4] [i_4] [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47937))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_0] [i_0] [i_2] [i_3]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 - 2])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) 
                        {
                            var_23 ^= ((/* implicit */short) ((194332666) >> (((((/* implicit */int) arr_17 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_2 + 3] [i_2 + 2] [i_3 + 1] [i_5 + 3])) + (18048)))));
                            var_24 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3])) & (((((/* implicit */int) (short)13506)) & (((/* implicit */int) arr_1 [(_Bool)1]))))));
                        }
                        arr_19 [i_0 - 1] [i_0 - 1] [11LL] [i_3] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (short)-7191)) + (2147483647))) >> (((var_15) - (431119605)))))))) | (max((((/* implicit */unsigned long long int) ((var_11) & (var_8)))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_9)))))));
                        var_25 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_16 [i_0])) ? (194332666) : (max((((/* implicit */int) (short)13506)), (var_19)))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        arr_23 [6U] [i_1] [i_6] [11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 194332660)) ? (arr_8 [(signed char)0] [i_1] [i_1] [i_6] [i_1] [i_2]) : (((/* implicit */unsigned long long int) 4000234286488657166LL)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_17))))))) ? ((~(((((/* implicit */_Bool) 789429995)) ? (((/* implicit */long long int) ((/* implicit */int) (short)23971))) : (0LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2 - 1] [i_2 - 1])))));
                        arr_24 [i_6] [i_6] [i_6] [0LL] = ((/* implicit */short) ((long long int) -194332656));
                        arr_25 [i_0] [i_0] [i_0] [i_6] &= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) min(((signed char)-16), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) var_18)) : (((var_15) + (((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_26 [i_0] [i_0 + 1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)32767)) >> ((((+(912315047196904485LL))) - (912315047196904466LL))))) > (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_17 [12ULL] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114)))))))));
                }
            } 
        } 
    } 
}
