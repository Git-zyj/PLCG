/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101434
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
    var_12 ^= ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((arr_4 [i_2] [i_2 + 1] [i_2 - 1]) % (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)24872)) + (((/* implicit */int) arr_3 [i_0])))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_3] [(_Bool)1])), ((unsigned short)40663)))) <= (((/* implicit */int) arr_5 [i_2])))) ? ((~(14900871705168411164ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned short)24872)))))))));
                            var_14 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_10 [i_4] [i_4 - 1]), (arr_10 [(unsigned char)6] [i_4 - 1]))))));
                            var_15 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) min(((unsigned short)40682), (((/* implicit */unsigned short) arr_15 [i_4 - 1] [i_0] [(signed char)4] [i_3] [(signed char)4]))))), (var_10))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40682)))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) (unsigned short)1016);
                            arr_19 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40657)) ? (((/* implicit */int) (unsigned short)40664)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_13 [(_Bool)1] [i_0] [i_2 - 1] [i_3] [(_Bool)1])))))) == (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_0)))) : ((+(((/* implicit */int) var_9)))))));
                            var_17 = ((((arr_7 [i_2 + 1] [i_2 + 1] [(_Bool)1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2 + 1] [i_2]))) : (arr_6 [i_2] [i_2 + 1] [i_2]))) == (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)48), (((/* implicit */signed char) (_Bool)0)))))));
                            var_18 ^= ((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)2368)));
                        }
                        var_19 -= ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3]);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (291141266U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1])))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)40664)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) : (arr_17 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)53275))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (unsigned short)40635)))))))))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_6])))))))));
                    }
                    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_6 [i_2] [i_2 - 1] [i_2 - 1])), (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40673))) : (min((var_5), (((/* implicit */unsigned long long int) var_1))))));
                    var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-50))));
                }
            } 
        } 
    } 
}
