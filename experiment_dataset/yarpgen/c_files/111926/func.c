/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111926
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
    var_12 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (var_10))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29111))) : (var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_0] [i_0] [i_2]), (((/* implicit */unsigned short) (short)-10178)))))) : (((((/* implicit */_Bool) arr_6 [(short)8] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10178))) : (var_11)))));
                    var_13 = ((/* implicit */int) min((((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_2] [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_6)), ((short)26115))))));
                    arr_8 [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (short)32742)) : (((/* implicit */int) (unsigned char)177))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min(((short)7375), (((/* implicit */short) (_Bool)1)))))))) ? (((((/* implicit */_Bool) 6136829548015369124ULL)) ? (var_8) : (var_9))) : (max((((/* implicit */int) (_Bool)1)), (420708442))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_3]), (((/* implicit */long long int) (short)-7355))))) ? (max((arr_2 [i_3]), (arr_2 [i_0]))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (arr_11 [i_0] [i_0] [i_2])))))))));
                        arr_13 [i_3] [21LL] [i_2] [i_1] [2] [21LL] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)177)), (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (4294967295U)))) : (((((/* implicit */_Bool) 262143U)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_0)) : (-1)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_10 [i_0] [i_1] [i_0] [i_2] [i_4])))) : (((((/* implicit */_Bool) var_11)) ? (arr_2 [i_2]) : (((/* implicit */long long int) 3462151481U))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)72))))) : (((((/* implicit */_Bool) 9850839688085752584ULL)) ? (arr_2 [i_0]) : (((/* implicit */long long int) arr_3 [i_4] [i_0] [i_0]))))));
                        var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1043984903U)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_2 [i_1])))) ? (((((/* implicit */_Bool) var_11)) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : ((((_Bool)1) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130)))))));
                    }
                    var_16 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((arr_2 [i_1]), (((/* implicit */long long int) (short)7375)))))), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 4; i_6 < 11; i_6 += 1) 
        {
            {
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_19 [i_5])), (arr_1 [i_5])))) ? (((((/* implicit */_Bool) arr_9 [i_5] [i_5])) ? (17802711073920111777ULL) : (((/* implicit */unsigned long long int) arr_15 [i_6] [i_6] [i_6 + 1] [i_6] [23] [23])))) : (((/* implicit */unsigned long long int) max((arr_12 [22U] [i_6] [10ULL] [22U] [i_5] [i_5]), (((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)116)))) : (min((((((/* implicit */_Bool) var_4)) ? (var_9) : (var_8))), (((/* implicit */int) min((var_0), (var_0)))))));
                arr_22 [i_5] [(_Bool)1] |= ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)248), ((unsigned char)255)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32410))) : (min((((/* implicit */unsigned long long int) -2097876102)), (((((/* implicit */_Bool) 2097876101)) ? (7940525091564938969ULL) : (4833997415866260612ULL)))))));
                arr_23 [6ULL] [i_6] &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 1954665499)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */long long int) (short)-23548))));
            }
        } 
    } 
}
