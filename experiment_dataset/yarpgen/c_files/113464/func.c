/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113464
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */long long int) ((_Bool) ((unsigned int) (_Bool)1)));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_11 = ((/* implicit */unsigned int) (((+(max((((/* implicit */int) arr_5 [8LL])), (65535))))) - (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */int) (signed char)-38)) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) : (arr_7 [17LL] [(_Bool)1] [i_1 - 2])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)57461)))) <= (((arr_6 [i_4] [i_4]) ? (-65536) : (-65536))))));
                                var_13 = ((/* implicit */signed char) ((arr_12 [12LL] [10ULL] [i_2] [15ULL] [i_2]) | (((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) arr_1 [i_0]))), ((~(3299876990U))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                {
                    var_14 = ((/* implicit */_Bool) 3525126680U);
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 65540)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [8U] [(_Bool)1])) : (((/* implicit */int) arr_5 [i_0]))))) ? (((768U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28173))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [6U])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned char) (~(3529573235574353285LL)));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((long long int) arr_1 [i_0])) : (((/* implicit */long long int) -65536))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_18 [i_0] [(unsigned short)8] [(unsigned short)8] [i_0] [i_0]))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0] [i_0] [1ULL])))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1 - 2] [i_1 - 2] [i_5] [(signed char)2] [i_6])) ? (((unsigned long long int) (unsigned short)7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [18U])))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)13440)) : (((/* implicit */int) (unsigned short)1112))))) ? (var_6) : (((/* implicit */unsigned int) 1426689317))));
                    }
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_6))))));
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) arr_6 [i_0] [i_0]);
                    var_23 = ((/* implicit */unsigned int) arr_5 [i_0]);
                    var_24 = ((/* implicit */short) ((unsigned int) ((int) var_9)));
                }
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)28774))));
                    var_26 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_22 [i_1 - 3] [8U])) ? (((/* implicit */unsigned long long int) 2130960332U)) : (((((/* implicit */_Bool) (unsigned short)14940)) ? (((/* implicit */unsigned long long int) 2164006963U)) : (arr_25 [i_0] [(_Bool)1] [(_Bool)1] [i_0])))))));
                    var_27 = ((((/* implicit */_Bool) max((((unsigned long long int) arr_21 [(short)10])), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_16 [(unsigned short)2] [i_1] [i_1 - 3])) ? (-5888327822524600396LL) : (((/* implicit */long long int) arr_16 [0ULL] [i_1] [i_1 - 2])))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) var_3);
}
