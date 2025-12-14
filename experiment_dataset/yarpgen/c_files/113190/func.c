/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113190
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
    var_10 = ((/* implicit */short) (+(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */long long int) ((min((-205635189), (((/* implicit */int) arr_2 [i_1 - 1])))) > ((+(((/* implicit */int) arr_4 [i_3 + 1] [i_1 + 1]))))));
                        var_12 = var_3;
                        arr_9 [i_3] = ((/* implicit */signed char) (short)-15861);
                        var_13 = ((/* implicit */signed char) max((var_13), (((signed char) (~(arr_1 [i_1 - 2]))))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((14309405313865407890ULL) << (((var_9) + (1741601651))))), (((/* implicit */unsigned long long int) ((arr_5 [(_Bool)0] [i_1] [i_2] [(short)1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0])))))))) ? (min((((((/* implicit */unsigned long long int) var_9)) | (var_7))), (((/* implicit */unsigned long long int) ((-1424126048) | (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (max((((/* implicit */int) arr_3 [i_0])), (var_6))))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_4])) ? ((+(((/* implicit */int) var_8)))) : (var_9)));
                            arr_14 [15] [i_5] [(short)18] [1] [16LL] [i_5] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2154860208U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)1898))))) ? (((/* implicit */unsigned long long int) ((-205635189) | (((/* implicit */int) arr_3 [i_4]))))) : (((var_7) ^ (((/* implicit */unsigned long long int) -431513949)))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) 0U)), (5893299777310052855ULL))) != (((/* implicit */unsigned long long int) arr_7 [17LL] [i_1 - 2] [i_1] [i_1 + 4] [i_1])))))));
                        }
                        for (int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            arr_18 [0LL] [2] [3ULL] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */long long int) 2140107112U);
                            arr_19 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_12 [17] [i_1] [i_2] [i_4] [i_6] [i_1 - 1]))) < (((-1805650672) ^ (var_6)))));
                            var_16 &= ((/* implicit */int) max((((/* implicit */long long int) var_6)), (((-3382347613409995248LL) / (3382347613409995247LL)))));
                        }
                        for (int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            arr_24 [i_4] [i_2] [i_0] [i_4] [(_Bool)1] [i_2] = ((/* implicit */short) (-(((-1937474267) - (arr_1 [i_7])))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_1)) : (arr_16 [i_0] [(unsigned short)10] [(unsigned short)18] [i_4] [i_7]))) != (((/* implicit */long long int) (~(arr_15 [i_4] [(_Bool)1] [i_1] [i_2] [i_4] [i_4] [i_7]))))))) : (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_5))) != (((/* implicit */unsigned long long int) -723282863)))))));
                        }
                        for (int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                        {
                            var_18 = (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-39)))));
                            arr_27 [i_0] [i_4] [i_1] [i_2] [i_2] [i_4] [i_8] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_22 [i_8] [i_4] [(unsigned short)3] [i_4] [i_0])) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (((/* implicit */int) (unsigned short)42496)))))) : (-431513935)));
                            var_19 -= ((/* implicit */int) (-9223372036854775807LL - 1LL));
                        }
                        arr_28 [i_0] [(_Bool)1] [i_1] [i_2] [i_2] [i_4] |= ((/* implicit */int) min((((/* implicit */short) min((arr_13 [i_1 - 2] [i_1] [2] [i_1]), (((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20439)))))))), ((short)20440)));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_2] [i_1] [(signed char)10]))) : (var_5))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))))))));
                    }
                    arr_29 [i_0] [(_Bool)1] [i_2] [i_2] = var_6;
                    var_21 += ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)22706)) - (((/* implicit */int) arr_5 [(unsigned short)18] [i_1 - 1] [i_1] [i_1 + 2])))), (((((((/* implicit */int) var_0)) % (var_1))) >> (((((/* implicit */_Bool) -205635192)) ? (((/* implicit */int) var_3)) : ((-2147483647 - 1))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */long long int) var_6)) % (3382347613409995247LL))) : (((/* implicit */long long int) 146605552U)))))));
    var_23 += ((/* implicit */long long int) (-(((unsigned long long int) var_0))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_1)) + (min((min((((/* implicit */unsigned long long int) (short)-32767)), (var_7))), (((/* implicit */unsigned long long int) var_4))))));
}
