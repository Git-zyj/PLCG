/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185982
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
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */unsigned long long int) ((int) 1114984344))) * ((~(var_8)))))));
    var_18 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((max(((-(((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */_Bool) -881582952)) && (((/* implicit */_Bool) var_16))))))), (-1147057193)));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_2] [i_2] [i_0] [i_3] = ((/* implicit */unsigned short) var_16);
                        var_20 = -1907850817171997034LL;
                        arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_0] [i_3]))));
                    }
                    for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned char)245))))))), (var_5)));
                        var_21 += ((/* implicit */signed char) ((((var_9) + (2147483647))) << (((((/* implicit */int) (unsigned short)40461)) - (40461)))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_2))));
                        var_23 -= ((/* implicit */short) ((unsigned int) max((arr_0 [i_1 + 2] [i_5]), (((/* implicit */long long int) var_4)))));
                        arr_19 [i_0] [i_1 - 1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned short) var_13);
                    }
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_2] = arr_9 [i_0] [i_1 + 1] [i_2];
                        var_24 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((signed char) arr_1 [i_0])), (((/* implicit */signed char) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))), (arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_6])));
                        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3569831602U)) ? (((/* implicit */int) (unsigned short)33266)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (short i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                    {
                        arr_26 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (short)18064);
                        var_26 &= ((/* implicit */short) max((min((((/* implicit */unsigned long long int) max((var_7), ((unsigned char)193)))), ((~(var_8))))), (((/* implicit */unsigned long long int) var_9))));
                        arr_27 [i_1] [i_0] |= ((/* implicit */unsigned char) var_15);
                        var_27 *= ((/* implicit */unsigned char) 15899257416208523686ULL);
                    }
                    arr_28 [i_0] [i_2] [i_1 + 1] [i_2] = ((/* implicit */unsigned int) ((signed char) arr_9 [i_1] [i_1 + 2] [i_1 - 1]));
                }
            } 
        } 
    } 
}
