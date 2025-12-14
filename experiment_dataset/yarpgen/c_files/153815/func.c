/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153815
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_10 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (15833265016421414186ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_11 ^= ((/* implicit */int) (+(var_7)));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (_Bool)1))))) : (arr_1 [i_0])))) ? (max((var_9), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 3])))))));
                    var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) (+(1688528928052751775LL)))))));
                    var_14 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (signed char)60)), (((((/* implicit */_Bool) (signed char)-9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) var_8);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 1; i_5 < 14; i_5 += 2) 
                        {
                            arr_18 [i_0] [i_1] [i_3] [8] [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) ((signed char) (signed char)-61));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (var_5) : (arr_1 [i_4]))) == (((/* implicit */int) (signed char)46)))))));
                        }
                        for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0 + 4] [i_0 + 3] [i_3]))));
                            var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (arr_8 [i_0 + 3] [i_0 + 1] [i_0 + 4]) : (arr_8 [i_0 + 3] [i_0 + 1] [i_0 + 4])));
                            arr_22 [i_3] [i_0] [i_4] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_9 [i_0] [i_0 + 4] [12]));
                        }
                        for (long long int i_7 = 3; i_7 < 14; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) ((int) 2071720051U));
                            arr_26 [i_0] [(signed char)10] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_20 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_0 - 1] [i_4]))));
                            var_21 = ((/* implicit */short) arr_0 [i_0] [i_0]);
                            arr_29 [i_0] [i_4] [(unsigned short)3] [i_0] [i_0] = ((/* implicit */short) arr_25 [i_8] [i_4] [i_3] [i_1] [i_0]);
                        }
                        var_22 = ((/* implicit */signed char) arr_12 [i_0 + 1] [i_0] [i_0 - 2]);
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_23 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_32 [i_9] [i_9] [(signed char)13] [i_9 - 1] [i_9 - 1] [i_9])) / (arr_14 [i_9 - 1] [(unsigned char)0] [i_0 + 2])));
                        var_24 ^= ((long long int) (_Bool)0);
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        arr_35 [i_0] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */long long int) ((short) arr_33 [i_0] [i_0] [i_0] [i_0 + 4] [i_0 + 2]));
                        var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((((((/* implicit */int) arr_20 [4ULL])) + (2147483647))) >> (((arr_7 [i_0]) + (462345073))))) : (((((/* implicit */_Bool) var_9)) ? (791550391) : (arr_1 [(unsigned short)0])))));
                    }
                    arr_36 [5LL] [i_1] [i_0] = ((((/* implicit */_Bool) arr_12 [i_0 + 2] [i_0] [i_0 + 1])) ? (var_6) : (var_7));
                }
                /* LoopSeq 1 */
                for (short i_11 = 4; i_11 < 12; i_11 += 3) 
                {
                    var_26 = ((/* implicit */unsigned short) ((int) (unsigned char)69));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max(((signed char)-61), (((/* implicit */signed char) (_Bool)1)))))) / (((long long int) var_8))));
                    arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned char)115);
                }
            }
        } 
    } 
    var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_7)) ? (var_5) : (var_4))) : ((-((+(var_5)))))));
}
