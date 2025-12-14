/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14164
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1])) && ((!(((/* implicit */_Bool) arr_3 [i_2])))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 - 2])) ? (((arr_0 [i_1]) - (((/* implicit */unsigned long long int) var_6)))) : (min((((/* implicit */unsigned long long int) var_14)), (var_3))))) : (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) -158949920)), (8372224U)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20646)) ? (1283462526U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6033))) : (((9222211215054008156ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3]))))))))));
                                arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (short)-32628)) ? (((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) arr_1 [5])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned char)124)))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) -2141726085)))))))));
                                arr_14 [i_0] [i_1] [i_2] [(unsigned char)3] [(short)6] = ((/* implicit */unsigned int) ((0ULL) / (min((var_3), (((/* implicit */unsigned long long int) (unsigned char)52))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 2] [i_2 + 1])) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 2] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 2] [i_2 + 1]))))) : (((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (4159037085U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                                arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20661))))) : (((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 - 2] [i_4])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (var_7))) : (((/* implicit */int) ((4159037092U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)1308))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 2) 
        {
            {
                var_21 = ((/* implicit */int) (((~(((((/* implicit */_Bool) 135930199U)) ? (13533584686160521050ULL) : (var_8))))) ^ (((/* implicit */unsigned long long int) ((((min((((/* implicit */int) (_Bool)0)), (var_7))) + (2147483647))) >> ((((~(2559973920801872833ULL))) - (15886770152907678766ULL))))))));
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        for (int i_9 = 1; i_9 < 23; i_9 += 1) 
                        {
                            {
                                arr_29 [(signed char)19] [i_6 - 1] [i_6 - 1] [i_8] [i_8] [i_9] = ((/* implicit */long long int) min((arr_22 [i_5] [i_6 + 2] [i_7] [i_8]), ((+((+(0U)))))));
                                arr_30 [i_5] [19] [i_6 + 1] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_7] [i_7] [i_8] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (135930210U)))))) ? (((/* implicit */int) ((short) arr_20 [i_6 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) -6991691076807906293LL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    for (unsigned int i_11 = 2; i_11 < 22; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9224532858655543452ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)32627))));
                                var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_8)));
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1771563916)) ? (4913159387549030565ULL) : (((/* implicit */unsigned long long int) 3008038834U))))) ? (10114712130780556217ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))))));
                                arr_41 [i_5] [16] [i_6] [i_6] [i_10] [i_11] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (short)-2850))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_5] [i_6] [i_10] [i_11])) % (var_7)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_26 [22] [i_10] [i_11] [6U])))))) ? (var_11) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_5] [i_6] [i_6] [(short)10] [i_11] [i_12])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((16458414299250992965ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532)))))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_32 [i_5] [i_5] [i_6]))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        {
                            var_26 ^= ((/* implicit */short) ((unsigned int) ((((/* implicit */int) ((var_11) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) < ((-(((/* implicit */int) arr_28 [i_6] [i_13] [i_14])))))));
                            var_27 *= ((/* implicit */unsigned int) var_6);
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (short)12786))));
                        }
                    } 
                } 
            }
        } 
    } 
}
