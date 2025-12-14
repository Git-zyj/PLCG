/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121579
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
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_11 [i_0] [(_Bool)1] [0ULL] [i_3] [i_3] [(unsigned char)2]), (((/* implicit */unsigned short) arr_10 [i_0 + 1] [i_1 - 1] [i_2] [i_3]))))) ? (max((var_2), (((/* implicit */unsigned long long int) (unsigned char)109)))) : (((/* implicit */unsigned long long int) (+(arr_1 [i_0 - 1]))))));
                            var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65529))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 3] [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) (unsigned short)65529)))) : ((+(((/* implicit */int) (unsigned short)44316)))))))));
                            var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((unsigned short) 16288275391051479618ULL)), (min(((unsigned short)44313), (((/* implicit */unsigned short) (signed char)-125))))))) != (((/* implicit */int) var_3))));
                            var_12 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(var_0)))))) * ((+(arr_9 [i_0] [i_0 - 1] [i_0] [i_0])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_4 = 3; i_4 < 9; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_20 [2] [i_1] [i_0] [i_1] [i_0 + 3] [2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */unsigned long long int) ((int) var_5))) : (((unsigned long long int) arr_9 [i_0] [(_Bool)1] [0U] [i_0 + 2]))));
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) var_5))))) ? ((+(((/* implicit */int) (signed char)-51)))) : (max((var_0), (-1970184458)))))), (max((((/* implicit */unsigned int) ((_Bool) var_1))), (max((arr_7 [i_1 - 2] [i_4]), (((/* implicit */unsigned int) (unsigned short)21219))))))));
                        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((arr_9 [i_0] [i_1] [i_4] [i_4]) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((2147483647), (var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5]))))) : (((((/* implicit */int) (unsigned short)21220)) >> (((((/* implicit */int) var_6)) + (24779)))))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 4; i_6 < 11; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 10; i_7 += 3) 
                        {
                            {
                                arr_26 [i_0] = min((max((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)44329)), (var_9)))), (((((/* implicit */_Bool) (short)17627)) ? (27ULL) : (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21219)) ? (max((((/* implicit */unsigned int) (unsigned short)44301)), (1270102546U))) : (((/* implicit */unsigned int) ((var_5) / (((/* implicit */int) (_Bool)1)))))))));
                                var_14 = (!(((/* implicit */_Bool) arr_3 [i_0])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 2; i_8 < 10; i_8 += 4) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_24 [i_1] [0ULL] [i_1 - 2] [i_4 - 3] [i_4 - 3] [i_8 - 2])), (var_8))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)110)))))))))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))) + (50331648U))) * (((unsigned int) (signed char)-123))))) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_4 - 2] [i_4 + 2] [2U] [i_4 - 2] [i_4 - 2] [i_4 + 2]))))) : ((-(var_7)))));
                                var_17 = ((/* implicit */_Bool) ((signed char) max((var_2), (((/* implicit */unsigned long long int) arr_31 [i_9 - 1] [i_8 - 1] [i_4 - 3] [i_0 - 1] [1U])))));
                            }
                        } 
                    } 
                }
                for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_18 = ((/* implicit */unsigned int) var_5);
                    arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((+(var_4))))))));
                    arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [(unsigned char)8] [1U] [i_10]);
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((((unsigned int) max((((/* implicit */unsigned int) var_1)), (var_7)))), (((/* implicit */unsigned int) ((short) max((((/* implicit */long long int) var_1)), (var_4)))))));
}
