/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119681
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_17 = min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2 - 1] [i_2 - 1])) ? (arr_8 [11ULL] [i_2] [i_2 + 1] [i_2 + 1]) : (arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] = ((/* implicit */unsigned long long int) var_15);
                                arr_15 [i_1] [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */unsigned int) (unsigned char)247);
                                var_18 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)127)), (arr_2 [i_3])))) ? (((arr_0 [i_2 + 1] [i_2 - 1]) >> (((/* implicit */int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100)))));
                                var_19 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_8 [(unsigned char)14] [i_1] [i_1] [i_0])) ? (min((((/* implicit */unsigned long long int) (signed char)127)), (arr_5 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (signed char)123)) & (((/* implicit */int) (signed char)122))))))));
                                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_2] [i_0]), (((((/* implicit */_Bool) -359807403)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_9 [i_0] [i_3] [i_2] [i_2])))))) ? (arr_3 [i_0] [i_2 + 1] [i_0]) : (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (min((var_7), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((signed char) var_6));
    var_22 *= ((/* implicit */short) ((var_7) / (var_9)));
    var_23 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
}
