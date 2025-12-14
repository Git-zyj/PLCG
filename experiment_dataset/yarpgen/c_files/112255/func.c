/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112255
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
    var_14 = ((/* implicit */long long int) 1505015934);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_4 = 4; i_4 < 13; i_4 += 3) /* same iter space */
                            {
                                var_15 ^= ((/* implicit */long long int) ((max((((/* implicit */int) arr_7 [i_1 + 4] [i_1 + 4] [(short)0])), (((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) arr_2 [i_4 - 3])) : (((/* implicit */int) (short)32763)))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_4 - 2])) || (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)54538))) == (var_3))))))));
                                arr_13 [i_0 + 1] [i_1 + 1] [(unsigned short)14] [(_Bool)1] [i_4 + 1] = min((max((min((((/* implicit */long long int) var_0)), (arr_10 [i_4 + 2]))), (((/* implicit */long long int) (unsigned short)54535)))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)54553))) == (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_0 - 2]) : (((/* implicit */long long int) arr_8 [i_4] [(short)10] [i_2 + 2] [2LL] [i_1 + 4] [i_0]))))))));
                            }
                            for (long long int i_5 = 4; i_5 < 13; i_5 += 3) /* same iter space */
                            {
                                var_16 = ((/* implicit */_Bool) arr_7 [i_5] [i_3] [(unsigned char)6]);
                                var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (arr_4 [(unsigned short)6])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) var_8))))))));
                                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) arr_12 [i_5] [8] [5ULL])) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_5] [i_2])) : (((/* implicit */int) arr_15 [(_Bool)1] [i_1] [i_2] [i_3] [i_5 + 1]))))) : (max((3387347863263668669ULL), (3387347863263668669ULL))))) >> (((((/* implicit */int) (unsigned short)34296)) - (34268)))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                            {
                                arr_20 [i_6] [i_3] [i_2 + 2] [(short)4] [(short)2] = ((unsigned int) arr_11 [0LL] [i_1] [i_2] [0LL] [i_6]);
                                arr_21 [i_0] [4U] [4U] [i_3 + 2] [(unsigned short)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_2] [i_2] [i_2 - 2]))));
                            }
                            var_19 = ((/* implicit */int) 1LL);
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-13586)), (var_13))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((arr_8 [i_1 + 4] [i_1] [i_1] [i_0 - 1] [7LL] [7LL]) - (arr_8 [(_Bool)1] [i_1] [i_1 + 3] [i_0 - 1] [i_0] [i_0])))));
                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)11015)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)10983), (((/* implicit */unsigned short) arr_7 [i_0] [i_1 + 1] [(unsigned short)1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (arr_19 [11U] [11U] [i_0] [i_1] [(_Bool)1]) : (arr_6 [13] [i_0] [13] [i_0])))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1 - 3]))) + (var_12))))))));
            }
        } 
    } 
}
