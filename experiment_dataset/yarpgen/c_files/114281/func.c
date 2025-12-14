/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114281
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
    var_12 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) min((((/* implicit */short) var_0)), (var_7)))))) + ((((-(((/* implicit */int) var_6)))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))));
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) >= (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_1))))), (min((((/* implicit */short) var_5)), (var_6)))))))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) max((((4629135692362857181ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31))))), (((/* implicit */unsigned long long int) var_4))))) ? (min((11995844756437035413ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)6504))))))) : (((unsigned long long int) (~(((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
                    var_16 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((_Bool) ((unsigned short) arr_2 [i_1] [i_1])))), ((unsigned char)214)));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_2]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_3])) && (((/* implicit */_Bool) arr_5 [i_1])))))) : (((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((((_Bool)1) || (((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2]))))) ? (((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) >= (((/* implicit */int) (unsigned char)54))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25333))) >= (var_8)))))) : (((((((/* implicit */int) (unsigned char)61)) >> (((((/* implicit */int) var_11)) - (134))))) << (((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_4))))) - (65521)))))));
                    }
                    for (unsigned char i_4 = 4; i_4 < 12; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1773000694324527240ULL)) ? (max((max((arr_6 [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)25)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_2])) - (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((134217727ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1 + 4])))))))));
                        arr_15 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) var_11);
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_4])) ? (arr_9 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2]) : (arr_6 [i_0] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))))))) ? ((-(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                    }
                    for (short i_5 = 4; i_5 < 13; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14437246731714821405ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)21))))) && (((((/* implicit */_Bool) arr_5 [i_1])) && (var_0)))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) <= (arr_18 [i_1] [i_1] [i_2] [i_5] [i_2] [i_2])))))))));
                        arr_19 [i_1] [i_2] [i_1] [i_1] = arr_4 [i_1 + 2] [i_1] [i_5 - 1];
                        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_5])), (134217727ULL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)0))))) ? (((unsigned long long int) 0ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5 - 2] [i_1] [i_5 - 2] [i_5 - 2]))))) : (min((max((var_9), (((/* implicit */unsigned long long int) (unsigned short)38107)))), (((/* implicit */unsigned long long int) var_6))))));
                    }
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [6ULL]), (((/* implicit */unsigned long long int) (unsigned char)107)))))));
                }
            } 
        } 
    } 
}
