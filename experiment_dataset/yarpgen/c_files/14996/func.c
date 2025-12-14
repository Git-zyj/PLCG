/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14996
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
    var_16 = ((min((min((var_5), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (-(var_2)))))) | (((/* implicit */unsigned long long int) var_11)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 7; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_17 = ((((/* implicit */_Bool) (unsigned short)65535)) ? (1273889496) : (((/* implicit */int) (unsigned char)110)));
                        var_18 = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_0] [i_0] [i_0] [9LL]);
                        arr_13 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) min(((~(var_3))), (((/* implicit */unsigned long long int) var_4))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(var_2)))))) ? (min((var_10), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0ULL))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4129735427151061673LL))))))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (2147483647) : (((/* implicit */int) arr_7 [i_2])))), (((((/* implicit */_Bool) arr_11 [i_4 + 1] [(short)0] [i_1] [i_4 - 1] [i_4 - 2])) ? (((((/* implicit */int) arr_14 [i_1] [i_2] [i_1] [i_0] [i_1])) * (((/* implicit */int) arr_3 [i_2])))) : (((((/* implicit */int) (short)-1)) / (((/* implicit */int) var_7))))))));
                        var_21 = ((/* implicit */unsigned long long int) var_13);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (signed char i_6 = 3; i_6 < 9; i_6 += 4) 
                        {
                            {
                                arr_23 [i_1] [(unsigned short)7] [i_2] [i_1] [i_1] = ((/* implicit */long long int) var_6);
                                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) ((0ULL) | (6ULL)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), ((unsigned short)27731)))) : (((/* implicit */int) arr_17 [i_1]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) (-((~(var_2)))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-70)) | (-2147483630)));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
    var_26 = ((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) var_9))));
}
