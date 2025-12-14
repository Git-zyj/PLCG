/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187742
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) 0U))))) | ((((((~(((/* implicit */int) arr_3 [i_0] [i_1])))) + (2147483647))) >> (((((min((((/* implicit */int) (short)31503)), ((-2147483647 - 1)))) - (-2147483638))) + (33)))))));
                var_15 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))))))), (((/* implicit */unsigned int) var_7))));
                /* LoopSeq 3 */
                for (int i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)134))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 &= ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_8)))))) ? (min((((((/* implicit */_Bool) arr_0 [(short)19])) ? (31525197391593472ULL) : (((/* implicit */unsigned long long int) arr_2 [19U] [i_2] [i_4])))), (((/* implicit */unsigned long long int) (short)-31503)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)144)) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) : (arr_11 [i_4] [i_1] [i_2] [i_1] [i_0]))))));
                            var_18 = ((/* implicit */unsigned short) (short)-26343);
                            var_19 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 0U)) ? (3210820597U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min(((unsigned short)28780), ((unsigned short)32768)))) != (((((/* implicit */_Bool) 10658005775290823189ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-20933))))))))));
                        }
                        var_20 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_8 [i_1] [i_2 + 2] [i_2] [i_2 - 1] [i_2] [i_3]))))));
                    }
                    arr_12 [i_2] = ((/* implicit */_Bool) min(((-(((/* implicit */int) var_11)))), (min((-1747323115), (((/* implicit */int) (short)-27314))))));
                    var_21 *= ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((((/* implicit */int) (signed char)106)) | (1445297494)))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : ((-9223372036854775807LL - 1LL)))))), (((max((var_12), (((/* implicit */long long int) arr_5 [i_1] [i_1] [i_0])))) & (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)2890), (((/* implicit */unsigned short) (signed char)112))))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8237145533355419904ULL)) ? (8177211190507550665LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)64992)) ? (((/* implicit */int) (short)-2310)) : (((/* implicit */int) (unsigned short)10001))))) : (max((4261412864U), (((/* implicit */unsigned int) (_Bool)0)))))) >> (((((((/* implicit */_Bool) (unsigned short)8192)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) - (131218796U)))));
                    var_23 *= ((/* implicit */unsigned int) arr_13 [i_0]);
                    arr_15 [i_0] [i_5] [i_5] = ((/* implicit */short) (-(var_12)));
                }
                for (unsigned long long int i_6 = 4; i_6 < 24; i_6 += 4) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2669564269U)) ? (0ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 509836727U)), (min((5399289921335109571LL), (((/* implicit */long long int) 1827210478)))))))));
                    var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_0] [(unsigned short)12])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_0] [i_6] [i_0])), (2624935092U)))) ? (((/* implicit */int) arr_8 [i_6] [i_6] [i_6] [i_6] [(unsigned char)4] [i_1])) : ((+(((/* implicit */int) (unsigned short)3072))))))) : (((((/* implicit */_Bool) (-(2058771776)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-1827210479) != ((-2147483647 - 1)))))) : (((((/* implicit */unsigned int) (-2147483647 - 1))) + (1184718719U)))))));
                    /* LoopSeq 2 */
                    for (signed char i_7 = 1; i_7 < 23; i_7 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) (-(((5399289921335109565LL) | (arr_10 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_7 + 2] [i_7 + 1])))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */long long int) 3153919989U)) >= (28672LL)))))));
                        var_28 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 5399289921335109555LL)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44057))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_6 [i_7] [i_1] [i_0])))))))));
                    }
                    for (signed char i_8 = 1; i_8 < 23; i_8 += 1) /* same iter space */
                    {
                        var_29 |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)63)), (((0U) - (805306368U)))));
                        arr_23 [i_0] [i_1] [i_6] [i_8] [i_8 - 1] = ((/* implicit */unsigned long long int) -5412743225129553248LL);
                        var_30 = ((/* implicit */short) arr_21 [i_0] [i_0] [i_0] [i_8] [i_6] [i_8]);
                        var_31 |= ((/* implicit */long long int) (unsigned char)255);
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32760)) ? (0U) : (1084146698U)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_8 [i_0] [i_1] [i_1] [i_6] [i_8] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || ((_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_22 [i_6] [i_8 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20598)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_8] [i_1] [i_0]))))) : ((+(var_3))))) : (((/* implicit */unsigned long long int) max((min((var_12), (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) -1287550915))))))))));
                    }
                    arr_24 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -847074601))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17479))) <= (arr_17 [i_0] [i_1] [i_1])))) : (-15)))) ? (arr_20 [i_6 - 4] [i_6 - 3] [i_6 - 3] [i_6 - 2] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7717439497341131771LL)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1))))))))));
                }
            }
        } 
    } 
    var_33 = min((((/* implicit */unsigned long long int) 1243361089743014626LL)), (min((max((((/* implicit */unsigned long long int) (unsigned char)248)), (16766682852769571754ULL))), (((/* implicit */unsigned long long int) var_2)))));
}
