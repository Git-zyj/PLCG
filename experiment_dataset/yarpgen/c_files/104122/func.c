/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104122
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
    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned char)85)), (var_3)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))) : (arr_0 [i_0] [i_1])))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)150))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)232))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((long long int) (unsigned char)113))));
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) : (arr_0 [i_0] [i_1])))) + (((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), ((unsigned char)27)))) ? (max((var_3), (((/* implicit */unsigned int) (short)-1)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4)))))))) : (max((((/* implicit */long long int) var_12)), (arr_0 [i_0] [i_2])))));
                }
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_0])), ((-(((/* implicit */int) (unsigned char)0))))));
                    var_14 += ((/* implicit */unsigned int) var_2);
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_15 -= ((/* implicit */unsigned char) arr_14 [i_4] [i_3]);
                        var_16 *= ((/* implicit */unsigned int) ((((arr_3 [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_3 [i_4] [i_1] [i_4])) : (((/* implicit */int) arr_3 [(unsigned short)16] [i_1] [i_4])))) / (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (short)23434)))))));
                    }
                    var_17 = arr_11 [i_0] [i_0];
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    for (unsigned short i_5 = 2; i_5 < 20; i_5 += 2) 
    {
        arr_21 [i_5] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5 + 1] [i_5 - 1])) + (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5]))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))) : (2421915849592218861ULL))))), (((/* implicit */unsigned long long int) var_6))));
        arr_22 [i_5 + 1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_5 - 2])) >> (((((/* implicit */int) var_4)) - (121))))))))) ? (((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_5 - 1])) ? (min((var_10), (((/* implicit */unsigned int) arr_18 [i_5])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5 - 1] [i_5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    }
    var_19 = ((/* implicit */short) (-(((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_11)) : (2421915849592218861ULL))) / (((/* implicit */unsigned long long int) (-(3351791061U))))))));
}
