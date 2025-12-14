/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12214
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
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_6 [i_4] [i_0 - 2] [3LL] [i_0 - 2])))) > (((((/* implicit */int) arr_6 [i_3] [i_1 - 1] [i_1 - 1] [i_3])) + (0)))));
                                arr_11 [1ULL] [3] [i_3 + 3] [i_4] = ((/* implicit */long long int) ((((((((/* implicit */int) (unsigned char)91)) - (((/* implicit */int) (short)30480)))) != (1958718742))) ? ((~(((/* implicit */int) min(((unsigned char)165), (((/* implicit */unsigned char) (_Bool)1))))))) : (((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */int) (_Bool)1)) : (var_1))) : (((/* implicit */int) ((short) arr_3 [i_0 + 1])))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) ((min((((var_3) << (((18446744073709551615ULL) - (18446744073709551587ULL))))), (((/* implicit */unsigned int) (-2147483647 - 1))))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)126)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 21; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 4; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 21; i_9 += 3) 
                        {
                            {
                                var_14 = (_Bool)1;
                                arr_24 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 4397778075648LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))) : (1938926119303675610LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2193014945U)) ? (((/* implicit */int) (_Bool)1)) : (2147483647))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (279260536U) : (((/* implicit */unsigned int) 2147483647))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_6))) : (((/* implicit */long long int) ((/* implicit */int) (short)4095)))))));
                                arr_25 [i_5 - 1] [i_6] [(_Bool)1] [i_6] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)-6703)) / (var_4))), (((/* implicit */int) arr_23 [i_5] [i_5 + 1] [i_5] [i_5]))))) ? (((/* implicit */int) arr_23 [(_Bool)1] [i_6] [(_Bool)1] [i_8])) : (((((/* implicit */int) (!(((/* implicit */_Bool) 880659313U))))) / (((((/* implicit */_Bool) arr_23 [i_9] [i_8 - 4] [i_7] [i_6])) ? (((/* implicit */int) arr_19 [i_5] [3LL] [i_5] [i_5])) : (((/* implicit */int) arr_16 [7ULL] [16]))))))));
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14243500952986027852ULL)) ? ((-(arr_15 [i_6]))) : (1159605736)))) ? (((/* implicit */int) ((short) (_Bool)1))) : (1691796989));
                                arr_26 [i_5 + 1] [i_6] [i_7 + 1] [(signed char)16] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_21 [i_5] [i_6] [i_9 - 1] [i_6]))) ? (3ULL) : (((/* implicit */unsigned long long int) 2147483647))));
                            }
                        } 
                    } 
                    arr_27 [i_6] [i_6] [i_7 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((13497297667990921356ULL), (((/* implicit */unsigned long long int) arr_19 [i_5] [10LL] [10LL] [4U]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-31027))))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) var_9)) : (1627411611U)))))) ? (((((/* implicit */_Bool) -779492942)) ? (((/* implicit */int) var_11)) : (((2147483643) % (((/* implicit */int) arr_20 [i_5] [i_5 - 1] [i_6] [0U] [i_7])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) arr_19 [i_5 - 1] [i_5] [i_5 - 1] [(short)9])) : (2147483647)))) ? ((((-2147483647 - 1)) - (var_1))) : (((((/* implicit */_Bool) (unsigned char)136)) ? (var_1) : (var_4)))))));
                }
            } 
        } 
    } 
}
