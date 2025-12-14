/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15241
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) var_7);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_12)) / (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94))) : (7456057102362229740ULL)))))));
                                arr_14 [i_0] [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned int) ((max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3910200729U)) ? (3910200720U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))))) / (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 5881418165441435386LL)) ? (384766542U) : (384766539U))) % (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) : (var_9))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((((((/* implicit */_Bool) arr_5 [3LL] [i_2 + 1] [i_0])) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_2)))) / ((~(((/* implicit */int) (unsigned short)960))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [(unsigned char)0] [(unsigned char)4])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0])) : (arr_5 [i_0] [i_0] [i_0])))) ? (max((arr_2 [i_2] [i_0]), (arr_7 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) 7637012111589640633LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (8398736871658884444LL))))));
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8196129050150482618LL)) ? (((/* implicit */long long int) -674268950)) : (3180660993745843748LL)));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) 3114735791U))))) ? (max((127), (((/* implicit */int) var_4)))) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned long long int) -921860937)) : (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */long long int) 2713668768U))))) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7432)))))))));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 3) 
    {
        for (long long int i_6 = 2; i_6 < 12; i_6 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_6] [4LL])) ? (var_6) : (var_10)))) ? (max((((/* implicit */unsigned long long int) arr_17 [i_5])), (var_6))) : (((((/* implicit */_Bool) 3U)) ? (((/* implicit */unsigned long long int) arr_2 [i_5] [2ULL])) : (var_6)))))) ? (((((/* implicit */_Bool) ((var_4) ? (0ULL) : (((/* implicit */unsigned long long int) -2147483632))))) ? (arr_10 [i_5 + 1] [i_6] [i_6 - 1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5])))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 1; i_7 < 13; i_7 += 3) 
                {
                    for (int i_8 = 3; i_8 < 13; i_8 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [(unsigned char)2])))))));
                            var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) : (arr_18 [i_6 - 2] [i_7 - 1]))), (((((/* implicit */_Bool) 520147298U)) ? (1668568941U) : (((/* implicit */unsigned int) -362417307))))));
                        }
                    } 
                } 
                arr_29 [i_5] [i_5] [i_6] = 0ULL;
                arr_30 [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(11900973330947668165ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_5] [i_5] [i_6])) << (((arr_28 [i_5 - 1] [i_6 - 2]) - (743263775438257246LL)))))) : (((max((((/* implicit */unsigned long long int) (_Bool)1)), (18318322998284344177ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_7 [i_5] [i_6] [0U]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))) : (1599713845U)));
            }
        } 
    } 
}
