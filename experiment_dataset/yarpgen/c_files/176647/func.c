/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176647
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
    var_19 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)0))) ? ((~(((/* implicit */int) (short)-32756)))) : (((/* implicit */int) arr_7 [i_0 - 2] [i_1 + 2] [i_2 - 1] [i_3 + 4]))))) & (arr_9 [i_1 + 2])));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [12ULL])))) ? (((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) var_16))))) ? (arr_1 [6]) : (min((((/* implicit */unsigned long long int) (short)32759)), (arr_4 [i_0] [i_1] [i_0] [i_3 + 3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0])) <= (((/* implicit */int) arr_5 [i_2] [i_2])))))))))))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32760))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) & (var_15)))) : (((((/* implicit */_Bool) arr_8 [1U] [1U] [i_3] [i_4])) ? (arr_6 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(short)5] [i_0] [(unsigned char)11] [i_2 + 1] [i_1] [i_0] [i_0])))))))) ? (((/* implicit */int) ((short) arr_3 [i_0] [i_3 - 1] [i_0 + 3]))) : (((/* implicit */int) ((7502444203880738920ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60393))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (short)20611))) | ((~(var_9)))));
                                arr_16 [i_5] [i_5] [i_5] [i_1] [i_5] |= ((/* implicit */unsigned char) (unsigned short)18420);
                                var_25 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_6] [i_5]))) - (var_8))), (((/* implicit */unsigned int) (short)-24964))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_4 [i_1 - 1] [i_0] [i_0 + 1] [(unsigned short)2]))), (((/* implicit */unsigned long long int) ((signed char) arr_19 [i_0] [i_0] [i_2 + 1] [i_0] [i_8])))));
                                var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)188))) <= (2661576592U)))))))));
                                arr_23 [i_7] [i_7] [i_1] [i_7] |= ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)-20616)))) / (-1)));
                            }
                        } 
                    } 
                    arr_24 [i_1] [i_0] = ((/* implicit */unsigned short) var_5);
                    var_28 += (-(((/* implicit */int) var_16)));
                }
            } 
        } 
    } 
    var_29 = ((int) ((((((/* implicit */_Bool) 1326548038U)) ? (var_7) : (((/* implicit */long long int) var_8)))) == (((/* implicit */long long int) ((unsigned int) (unsigned char)255)))));
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_7)) ^ (var_2)));
}
