/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178357
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
    var_10 = var_1;
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */long long int) arr_0 [i_0 + 2])) + (min((-5587892771616389644LL), (((/* implicit */long long int) arr_1 [i_0 + 1] [i_1])))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                            {
                                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 2387825388U))) ? (((/* implicit */int) max(((unsigned short)3773), ((unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) > (70351564308480LL))))));
                                var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((arr_11 [i_0 - 3] [i_1] [(_Bool)1] [i_4 + 2] [i_3 - 1]), (arr_11 [i_0 - 1] [(unsigned short)5] [i_2] [i_4 - 1] [i_3 + 1])))), (((((/* implicit */_Bool) 1713053878U)) ? (4640903112402005497LL) : (70351564308477LL)))));
                            }
                            for (long long int i_5 = 3; i_5 < 21; i_5 += 2) 
                            {
                                var_13 = ((((/* implicit */int) (unsigned char)21)) << (((((/* implicit */int) (unsigned char)220)) - (202))));
                                arr_20 [i_0 - 1] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((short) arr_2 [i_1] [i_2] [i_1]))), (min((((/* implicit */long long int) var_5)), (arr_19 [i_1] [i_1] [22] [i_1] [i_5])))));
                            }
                            for (signed char i_6 = 2; i_6 < 22; i_6 += 2) 
                            {
                                var_14 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (70351564308477LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */long long int) (+(var_2)))) : (arr_13 [i_6 - 1] [i_3] [i_0] [i_0] [i_0]))), (max((((/* implicit */long long int) ((unsigned int) var_5))), (arr_8 [i_6 - 1] [i_6 - 2] [i_6 - 2])))));
                                arr_25 [i_0] [i_1] [i_2] [i_1] [i_6 - 2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_19 [i_1] [i_0] [i_0 - 1] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1]))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_5))))))));
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_3))));
                            }
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((short) (unsigned char)21)))));
                            arr_26 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5469703159002770564LL)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)16), (var_4)))) ? (((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)146))))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(arr_4 [i_3])))) : (((((/* implicit */_Bool) -1777453217)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
