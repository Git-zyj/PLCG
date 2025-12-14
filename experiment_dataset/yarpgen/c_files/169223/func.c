/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169223
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [(unsigned short)10] [i_0] [i_4 - 2] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_2 [i_1 + 1]))))));
                                arr_14 [i_1] [(signed char)12] = ((/* implicit */unsigned short) ((min((arr_1 [i_1 + 1]), (((/* implicit */unsigned long long int) arr_8 [i_1 - 2] [i_1 - 2] [i_1] [i_4 - 3])))) >= (((/* implicit */unsigned long long int) (+((+(var_8))))))));
                                arr_15 [i_1] [i_1 + 2] [i_2] [i_3] [i_4 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((arr_0 [i_1 + 1] [i_2 - 3]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 + 2] [1LL] [i_1] [i_4 - 3])))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1 + 3])))))));
                                arr_16 [i_0] [i_1] [i_2 + 2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_2 - 2] [i_3] [i_4])), (min(((unsigned char)3), (((/* implicit */unsigned char) arr_6 [i_1]))))))) : ((+(((/* implicit */int) arr_12 [i_1 - 2] [i_4 + 1] [i_4] [3] [i_4]))))));
                                var_11 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [6] [i_1 - 2] [i_2 - 1] [i_3] [i_4]))) % (((arr_5 [(unsigned char)6] [i_1 + 1] [i_1]) % (var_6))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_12 [i_0] [i_1 + 2] [i_2] [i_1 + 2] [i_4 + 2])))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 1] [i_1] [i_4])))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_5 [i_1] [i_1 + 1] [i_1 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1 + 2] [i_1] [3] [i_2]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1 + 3] [i_2 - 2] [i_2] [i_2]))) ^ (336848722133584556LL))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                    arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_7 [i_2] [i_1 + 3] [i_2 - 2] [i_1 - 2] [i_1 + 3]), (arr_11 [i_1] [i_0] [i_2 - 2] [15])))) >= (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 3] [i_2 + 2] [i_2] [i_1 + 3])) ? (((/* implicit */int) arr_7 [(signed char)11] [i_2] [i_2 - 2] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_2 - 1] [i_1]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned int) var_4)))))));
    var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (var_4)))) : (var_3))), (((/* implicit */int) ((min((((/* implicit */unsigned int) var_1)), (var_5))) >= (var_6))))));
}
