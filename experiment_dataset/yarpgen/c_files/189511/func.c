/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189511
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_12)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3])) ? (((/* implicit */int) (short)-13634)) : (var_16)))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12255))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)-7504)) : (((/* implicit */int) (unsigned char)117))))) : ((-(((((/* implicit */_Bool) 793395941)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_3]))) : (var_14)))))));
                        arr_12 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1])) : (((/* implicit */int) (short)-22228))))))) ? ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-5005)) : (arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1])))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_0]))))) : (var_17)));
                        var_23 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_13 [i_4] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_12))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) (((_Bool)0) ? (8783309883883289955ULL) : (10ULL)));
                        arr_18 [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)13924)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (signed char)0))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_21 [i_6] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 34359738367ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_1)))) ? (((/* implicit */unsigned long long int) (-(4119875322U)))) : (((((/* implicit */_Bool) (signed char)88)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1986)))))))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_2] [i_6]))))))) ? (((((/* implicit */_Bool) (short)-13925)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [i_6]))))) : ((-(var_14))))))))));
                        arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1)))))) : (((((/* implicit */_Bool) (short)-32214)) ? (((/* implicit */long long int) var_1)) : (var_14)))))) ? (((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */long long int) (+(var_3)))) : (arr_6 [i_0] [i_1] [i_2]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40643)))))))));
    var_27 = ((/* implicit */unsigned long long int) (-(-1LL)));
}
