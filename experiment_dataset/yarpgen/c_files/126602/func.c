/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126602
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
    var_14 = ((/* implicit */long long int) max((((/* implicit */int) var_12)), (var_0)));
    var_15 += ((/* implicit */_Bool) var_6);
    var_16 += var_12;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)56))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((int) ((unsigned int) arr_11 [0ULL] [0ULL] [i_2 - 3] [i_4 - 1]))))));
                                var_19 = ((/* implicit */short) ((max((((((/* implicit */_Bool) 3515077913U)) ? (arr_7 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194))))), (((/* implicit */long long int) arr_10 [(unsigned short)7])))) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 + 2])))));
                                arr_13 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)6752)))) == (((int) ((short) var_5)))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) < (((/* implicit */int) arr_8 [i_1] [i_1])))) ? (arr_11 [i_0] [i_0] [i_2 - 3] [i_3 - 2]) : (((((/* implicit */_Bool) (short)-32287)) ? (1446921298U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0])))))))) ? (max(((-(-13))), (((((/* implicit */int) (unsigned char)109)) - (((/* implicit */int) var_2)))))) : (((/* implicit */int) ((signed char) 121227699)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 3; i_5 < 12; i_5 += 4) 
    {
        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 3) 
        {
            {
                arr_21 [i_5] [i_5] [(signed char)1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)167)) ? (427673760) : (((/* implicit */int) arr_18 [i_5]))))) ? (var_8) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19)))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)5)), (((((/* implicit */_Bool) (unsigned char)7)) ? (4262861883461622303LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */int) var_2)), (min((((/* implicit */int) arr_18 [i_5 + 2])), (var_6))))))));
            }
        } 
    } 
}
