/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139858
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
    var_14 |= ((/* implicit */unsigned char) (~(((unsigned int) var_13))));
    var_15 = ((/* implicit */int) ((short) (unsigned char)244));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_13)))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_1])))) > (((/* implicit */int) arr_8 [i_2] [i_1] [i_2]))))) > (((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])))))))))));
                                var_18 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))))));
                }
                for (signed char i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((977528280078131788LL) / (((/* implicit */long long int) 2147483647))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [(short)5] [i_5] [(unsigned char)0] [i_1] [(unsigned char)0])) * (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) 977528280078131788LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2))) : (((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(_Bool)1] [i_0] [(unsigned short)4] [i_1] [i_5]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 977528280078131788LL)) ? (((/* implicit */int) (unsigned short)25219)) : (((/* implicit */int) arr_9 [i_0])))))))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_13))))))) ? (((unsigned int) ((((/* implicit */int) (short)6528)) & (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_5 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) arr_5 [(unsigned char)4] [i_5 - 1] [i_1])) : (((/* implicit */int) arr_9 [i_0]))))))))));
                }
                for (signed char i_6 = 1; i_6 < 12; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            {
                                var_22 = (~(((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned short)30850)))))));
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((+((-9223372036854775807LL - 1LL))))))))))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) >= (8ULL))))));
                                var_25 = ((/* implicit */_Bool) ((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_3))))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) (-((~(((((/* implicit */_Bool) (short)-6529)) ? (((/* implicit */int) var_11)) : (var_4)))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3668120336U))));
                                arr_32 [7ULL] [i_1] [i_1] [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [i_6] [i_0] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_8)))))) ? (arr_22 [i_0] [i_6] [i_0]) : (((/* implicit */long long int) (~(var_12))))));
                                var_28 = ((unsigned char) (+(((/* implicit */int) (unsigned char)44))));
                                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)-82)))) + ((+(((/* implicit */int) arr_9 [i_1]))))))) ? (((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (-1) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)6528))))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_11))))))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)26)) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_6]))) : (1069547520LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_6]))))) : (((/* implicit */long long int) var_2))));
                    var_31 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6 + 1] [i_6] [i_6] [i_6] [i_6 + 1])) ? (((/* implicit */int) arr_14 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_14 [i_6] [i_6 + 1] [10ULL] [i_6] [i_6 + 3]))))));
                }
            }
        } 
    } 
}
