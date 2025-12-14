/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160491
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
    var_18 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (((~(((/* implicit */int) (signed char)64)))) <= (((/* implicit */int) (unsigned short)14223)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_4 [i_3] [i_1] [i_3])) || (((/* implicit */_Bool) (unsigned short)65535)))), (((arr_8 [i_0]) != (arr_8 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((var_15) + (2147483647))) << (((((/* implicit */int) arr_5 [i_2] [i_3] [i_4])) - (47503)))))) <= (((((/* implicit */_Bool) (unsigned short)14095)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26195))) : (2598816744U))))))) : (749291814U))))));
                                var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_17)), (var_13)))) : (min((arr_3 [(unsigned char)1] [i_1]), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_5 [i_1 - 1] [i_2] [i_4]), (((/* implicit */unsigned short) (unsigned char)2))))), (arr_11 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1]))))));
                                arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4] = var_13;
                                var_22 = ((/* implicit */_Bool) min((((2622860745178252670LL) | (arr_6 [i_0] [i_0] [i_3 - 2]))), (min((var_11), (arr_6 [i_0] [i_0] [i_3 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 4294967295U)) ? (1858666222U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26172)))))));
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */long long int) ((unsigned short) var_12))), (var_11)))))));
    var_25 = ((/* implicit */long long int) var_4);
}
