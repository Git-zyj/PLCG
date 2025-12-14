/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180961
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
    var_18 ^= ((signed char) var_12);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) 8721349882942960273LL);
                    arr_7 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_3 [i_0])), (7)));
                    var_20 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_2]);
                    var_21 -= ((/* implicit */signed char) ((-1436541268) <= (arr_1 [i_0])));
                    /* LoopSeq 4 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        arr_10 [i_3 + 1] [(unsigned short)3] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3 + 2] [i_3 + 2] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) : (((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) arr_8 [i_3] [i_2] [i_0] [i_0]))))) ? (((unsigned int) arr_6 [i_3] [i_3] [i_3 + 3])) : (min((((/* implicit */unsigned int) 1731969149)), (2880547480U)))))));
                        arr_11 [i_0] [i_3 + 3] = ((/* implicit */int) 4069608343U);
                    }
                    for (signed char i_4 = 2; i_4 < 8; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) 262143U);
                        var_23 = ((/* implicit */unsigned char) min((((/* implicit */signed char) (_Bool)1)), (((signed char) ((int) arr_6 [i_1] [i_1] [i_1])))));
                    }
                    for (int i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        arr_17 [i_0] [i_2] [i_2] [i_5 + 3] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 225358955U)) ? (((/* implicit */int) arr_13 [i_5 + 3] [i_5 - 1])) : (((/* implicit */int) (unsigned short)42637))))), (((((/* implicit */_Bool) (unsigned char)69)) ? (((arr_12 [i_0] [i_0] [i_2] [i_5 + 2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5 + 4] [i_2] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) (_Bool)1)))))))));
                        var_24 ^= ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_0]);
                    }
                    for (unsigned int i_6 = 2; i_6 < 10; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)0)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (4294705149U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            var_26 -= ((/* implicit */unsigned char) 225358953U);
                            var_27 = ((((/* implicit */_Bool) -9223372036854775805LL)) ? (((((/* implicit */_Bool) arr_19 [i_1])) ? (654575474) : (((((/* implicit */_Bool) -738371681)) ? (((/* implicit */int) arr_14 [i_0])) : (arr_1 [i_0]))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 2980777231U)) ? (-6396333776907623386LL) : (((/* implicit */long long int) -1731969150)))))));
                            var_28 = ((/* implicit */int) 4294705149U);
                            var_29 = ((/* implicit */unsigned short) ((signed char) (signed char)-37));
                        }
                    }
                }
            } 
        } 
    } 
    var_30 += ((/* implicit */unsigned long long int) (signed char)127);
}
