/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10578
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
    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_0))), (((/* implicit */unsigned int) var_8))))) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (short)-16384))))) ? (((/* implicit */int) ((unsigned short) var_3))) : (((/* implicit */int) ((unsigned char) var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [0U] [0U] = ((/* implicit */short) max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 2])) ^ (((/* implicit */int) arr_1 [i_0 + 1])))))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [3] = ((/* implicit */unsigned short) min((((unsigned long long int) arr_2 [i_0 - 4] [i_1 - 3])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_1 - 3])) % (((/* implicit */int) arr_2 [i_0 - 2] [i_1 - 2])))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_0 - 3] [i_0 - 3] [i_1 - 3]), (arr_7 [i_0 + 2] [i_1] [i_1 - 3]))))) & (((arr_9 [i_0] [i_0 - 1] [i_1 - 2]) * (arr_9 [i_0] [i_0 - 1] [i_1 - 1])))));
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)113))))) <= ((-(var_5)))));
                    var_21 = ((/* implicit */short) arr_9 [i_0] [i_1] [(unsigned short)1]);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) (short)-31193);
                    arr_15 [i_0] [i_1] [i_3] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15948214188209792083ULL)) ? (-2572145465725531879LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) | (min((((/* implicit */unsigned long long int) var_11)), (var_4)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_22 = arr_21 [(_Bool)1] [(short)11] [(short)11] [(_Bool)1] [i_5];
                                arr_22 [i_0] [5ULL] [i_5 - 3] = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)73));
                                var_23 = ((((/* implicit */unsigned long long int) ((arr_0 [i_1 + 1] [i_1 - 4]) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 4])) : (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 2]))))) % (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned long long int) var_11)))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 1) 
                {
                    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_6 + 4] [i_1 + 1] [i_1] [i_0 - 1] [2ULL])))))));
                    var_25 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_24 [i_6] [i_1 - 2] [i_6])))), ((+(((/* implicit */int) (unsigned char)143))))));
                    arr_25 [i_0] [i_0] |= ((/* implicit */signed char) max((((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (short)31193))) / (arr_17 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]))))), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)(-32767 - 1))))) ^ (2572145465725531878LL)))));
                }
                for (unsigned long long int i_7 = 4; i_7 < 16; i_7 += 3) 
                {
                    arr_29 [i_0] [i_1] [i_7] = ((/* implicit */long long int) (unsigned short)38126);
                    arr_30 [i_1] = ((/* implicit */unsigned long long int) ((((min((var_6), (arr_9 [i_1] [i_1] [i_1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_7 - 4] [i_1 + 1] [i_1 - 2] [i_0 - 1] [i_0]))))) ? (((int) arr_16 [(unsigned char)14] [(unsigned char)14] [i_1] [1ULL] [i_0])) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_20 [1LL] [i_1] [1LL] [i_7] [i_1] [i_1]))))))));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 - 2] [i_0 - 2] [i_1] [i_7 - 1]))) & (min((var_6), (((/* implicit */unsigned long long int) (unsigned char)143)))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)136)) ? (2572145465725531879LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))))), (549755813887LL)))))))));
                }
                var_27 += ((/* implicit */unsigned long long int) (-(max((((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (4294967295U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_16)))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        for (long long int i_9 = 3; i_9 < 19; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                {
                    var_29 = ((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4753981448810710656ULL)))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9] [i_10]))) * (0U)))))));
                    var_30 -= ((max((((/* implicit */unsigned int) ((signed char) arr_37 [i_8 - 1] [(short)13] [(short)13] [i_10]))), (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) 306631294)) : (arr_36 [i_9] [i_9]))))) & (((((/* implicit */_Bool) var_4)) ? (arr_34 [i_9 + 1] [i_9 - 3] [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9 - 1] [i_8 - 1]))))));
                }
            } 
        } 
    } 
}
