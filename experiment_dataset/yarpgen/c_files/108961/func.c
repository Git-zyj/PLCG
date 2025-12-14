/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108961
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_6))))))) ? (min((((var_0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))), ((-(((/* implicit */int) (signed char)-88)))))) : (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 4; i_3 < 23; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_17))))))));
                        arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    }
                    for (unsigned short i_4 = 1; i_4 < 24; i_4 += 1) 
                    {
                        var_21 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)228)) || (((/* implicit */_Bool) arr_3 [i_0] [0] [i_2]))));
                            arr_16 [i_5] [i_0] [i_0] [i_4] [i_1] = ((/* implicit */signed char) arr_11 [i_0] [0] [(signed char)11] [i_4 + 1]);
                        }
                        for (int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            var_23 = max((((((((/* implicit */_Bool) var_15)) ? (3117966404U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) + (((/* implicit */unsigned int) min((arr_13 [22U] [i_1] [20] [i_1]), (var_8)))))), (((/* implicit */unsigned int) (_Bool)1)));
                            arr_19 [i_0] [i_4 - 1] [15] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 342324991)) ? (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_3)) - (((/* implicit */int) (_Bool)1)))))) : ((+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_1))))))));
                        }
                        var_24 += ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)60258))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_15 [i_0] [i_0] [12U] [i_1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)24108)), (var_4)))))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(arr_4 [i_4] [i_2] [i_0])))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-212)))) : (((((/* implicit */_Bool) -232975266)) ? (((/* implicit */int) (_Bool)1)) : (arr_4 [i_0] [i_1] [i_4]))))))))));
                    }
                    var_26 = ((/* implicit */long long int) ((unsigned long long int) 232975265));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) var_11);
    var_28 |= ((/* implicit */signed char) ((max(((+(((/* implicit */int) (short)24119)))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_15))))))) >= (min((var_8), (((/* implicit */int) (!(((/* implicit */_Bool) -787208579)))))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 4; i_8 < 21; i_8 += 1) 
        {
            {
                arr_26 [i_8] [i_8] [i_8 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned long long int) arr_2 [i_8])), (18446744073709551615ULL))))) ? (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_9))))) - (87))))) : (((/* implicit */int) (_Bool)1))));
                var_29 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((var_15), (((/* implicit */signed char) (_Bool)1))))))));
                var_30 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 0U)) ^ ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [(short)24]))) / (18446744073709551615ULL)))))));
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */signed char) var_14)), ((signed char)111)))))))));
                var_32 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (unsigned char)229)))), (((/* implicit */int) ((_Bool) max(((short)-13934), (((/* implicit */short) (_Bool)1))))))));
            }
        } 
    } 
}
