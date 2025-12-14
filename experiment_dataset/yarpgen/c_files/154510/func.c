/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154510
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_10 &= ((/* implicit */short) (~(25165824)));
                                var_11 &= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)43739)) >= (((/* implicit */int) (unsigned short)28395))))), ((-((-(-25165835)))))));
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) arr_6 [i_2]))));
                                var_13 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_13 [(short)13] [i_1 - 1] [i_2 - 1] [i_4] [i_4] [i_2 - 1] [i_1 - 1])) ? (arr_13 [i_0] [i_0] [i_0] [i_1 - 1] [i_0] [i_0] [i_4]) : (arr_13 [(signed char)10] [i_1] [i_2 - 1] [i_2] [i_2 + 1] [i_3] [i_4]))), (((((/* implicit */_Bool) arr_13 [15ULL] [i_3] [i_2 + 1] [(unsigned char)2] [i_1 + 2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_13 [i_0] [i_1] [i_1 - 1] [i_2 + 1] [i_3] [i_1] [i_4])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 4; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned char) ((((((/* implicit */int) arr_8 [i_6] [i_0] [i_5] [i_1] [i_0] [i_0])) + (2147483647))) >> (((/* implicit */int) ((((18446744073709551608ULL) + (arr_20 [i_0] [i_0] [(unsigned char)16] [i_1 + 1] [i_5 - 3] [i_6]))) >= (arr_0 [i_1 + 2]))))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((arr_9 [i_1 - 1] [4ULL] [4ULL] [i_1 - 1]) << (((arr_9 [i_1 - 1] [i_1 - 1] [5ULL] [i_1 - 1]) - (13863842330276094908ULL))))) >= (max((((/* implicit */unsigned long long int) (unsigned char)106)), (arr_9 [i_1 - 1] [i_1] [i_1] [i_1 - 1])))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), ((-(max((arr_17 [i_5 - 1] [i_6] [i_6] [i_1 + 2] [i_7]), (arr_17 [i_5 + 2] [i_1 + 1] [i_5 + 1] [i_1 - 1] [i_7])))))));
                                var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1] [i_1 - 1] [i_5 - 2] [i_6]))) <= (arr_7 [i_7] [i_1] [i_1 + 2])))), ((+(((/* implicit */int) (signed char)-110))))));
                                var_18 = ((/* implicit */unsigned char) max((7429652461978593605ULL), (((/* implicit */unsigned long long int) (unsigned char)165))));
                            }
                            for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                            {
                                var_19 = max((((68652367872ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))))), (((/* implicit */unsigned long long int) arr_5 [i_8])));
                                var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [(unsigned char)16]))));
                                var_21 = ((/* implicit */unsigned char) (+((~(max((arr_10 [i_0] [i_1] [(short)16] [(unsigned short)1] [i_8]), (var_9)))))));
                            }
                            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) var_3)), ((-(((/* implicit */int) ((arr_20 [15] [i_1 - 1] [i_1 - 1] [15] [i_1 - 1] [i_1 - 1]) >= (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)190)) ? (((/* implicit */int) (unsigned short)184)) : (((/* implicit */int) (unsigned short)47655)))))))));
                                var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_8 [(unsigned char)6] [i_1] [9] [9] [i_1] [i_1 + 1]), (arr_8 [i_9] [i_1] [i_6] [i_6] [i_1] [i_1 + 1])))), ((+(((/* implicit */int) max((((/* implicit */short) arr_8 [i_1] [i_1] [i_5] [i_5] [i_1] [i_0])), ((short)-23))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = var_1;
    var_26 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)162)))) ^ (((/* implicit */int) max((var_7), (((/* implicit */short) (signed char)-18)))))));
    var_27 = ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))));
}
