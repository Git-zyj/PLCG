/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148253
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
    var_14 = var_7;
    var_15 = ((/* implicit */signed char) (short)30483);
    var_16 = ((/* implicit */long long int) (short)30493);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_17 = ((/* implicit */unsigned long long int) (unsigned short)0);
                    var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) (short)-30483)) : (((/* implicit */int) (unsigned char)127))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        arr_11 [i_1] = ((/* implicit */long long int) (short)-4123);
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_7) / (var_7)))) ? (max((((/* implicit */long long int) var_3)), (var_10))) : (max((-6LL), (((/* implicit */long long int) (signed char)106)))))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (unsigned char)116))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((arr_0 [i_1]), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0])))), (((/* implicit */unsigned int) max(((unsigned char)139), (((/* implicit */unsigned char) (signed char)-91)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (((((((/* implicit */_Bool) 31ULL)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) 1322617507U)))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    arr_15 [i_1] [i_1] [12ULL] = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_4]))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        arr_19 [i_4] [i_1 + 1] [i_1] [i_5] = ((/* implicit */signed char) (unsigned short)0);
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_12))));
                        arr_20 [i_5] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (+(arr_18 [i_0] [i_1 - 2])));
                    }
                    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [(unsigned short)11] [i_0] [i_0] [i_0] [i_0])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30485)))))) ? (0ULL) : (((/* implicit */unsigned long long int) var_1))));
                        var_24 += ((/* implicit */short) arr_18 [12ULL] [i_1]);
                    }
                }
                arr_23 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) arr_10 [i_0] [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (unsigned char)250)))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_10 [i_1 - 2] [i_1] [i_0])), ((short)30493))))) : (((long long int) (short)(-32767 - 1)))));
            }
        } 
    } 
}
