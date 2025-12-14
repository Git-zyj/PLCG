/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18233
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
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((arr_6 [i_0 - 1] [i_0 + 2]), (arr_6 [i_0 + 1] [i_0 + 2])))), (max((arr_4 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))));
                    var_11 ^= ((/* implicit */unsigned char) var_8);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 7; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [6ULL] [i_1] [(unsigned char)7] [i_2] = arr_0 [i_4 + 1];
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_3 [i_0] [i_1] [10ULL]))) ? (max((arr_2 [i_0] [i_1]), (((/* implicit */long long int) arr_12 [i_0] [i_0] [5LL] [i_0] [i_0 + 2])))) : ((+(arr_11 [i_3] [i_3 + 1] [i_3 - 2] [i_3 + 1])))));
                                arr_14 [i_2] [i_0 + 2] = ((/* implicit */short) ((max((((/* implicit */long long int) arr_5 [i_0] [i_1])), (arr_3 [0] [i_3 - 2] [i_3 - 2]))) >= (((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) arr_5 [i_2] [i_3 + 1])) : (((/* implicit */int) var_10)))))))));
                                arr_15 [i_0] [(signed char)10] [i_2] [i_3 - 2] [i_4 - 2] = ((/* implicit */signed char) max((var_4), (var_1)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((signed char) var_1));
}
