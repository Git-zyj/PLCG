/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176527
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_19 |= ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775803LL)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (unsigned char)79))))), (((((/* implicit */_Bool) var_15)) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_20 ^= ((/* implicit */int) (_Bool)1);
                        arr_10 [(short)0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1 - 2] [i_2]))));
                    }
                    for (int i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) min((((arr_11 [i_4] [i_4 + 1] [i_2] [i_1 - 4]) ? (((/* implicit */int) arr_11 [i_1] [i_4 + 3] [i_1] [i_1])) : (((/* implicit */int) arr_11 [(signed char)6] [i_4 + 3] [i_2] [i_2])))), (((/* implicit */int) arr_11 [i_4] [i_4 - 1] [i_4 + 2] [(signed char)5]))));
                        arr_15 [i_1] [i_0] [i_2] [i_4] [i_4] [i_2] = ((/* implicit */unsigned long long int) var_8);
                        var_21 = ((((arr_2 [i_1 + 3] [i_1 + 3] [i_4 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) (unsigned char)176)))) : (((/* implicit */int) var_16)));
                    }
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_1 + 3])), (arr_13 [i_1 - 4] [i_1 + 2])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~((-2147483647 - 1)))))));
                        arr_18 [i_0] [i_2] |= ((/* implicit */short) ((signed char) arr_5 [i_1 - 2]));
                        arr_19 [i_0] [7ULL] [(signed char)8] [i_5] = ((/* implicit */int) arr_4 [14] [i_2]);
                        arr_20 [i_0] [i_0] [i_0] [i_2] [i_5] [i_0] = ((/* implicit */unsigned int) (+((-2147483647 - 1))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (9309375089089413476ULL)));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((_Bool) var_12)) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) var_18)))))))));
    var_26 *= ((unsigned char) ((long long int) var_17));
    var_27 = ((/* implicit */unsigned char) max((max((((/* implicit */int) (unsigned char)66)), (var_7))), (((/* implicit */int) min((((/* implicit */short) var_17)), (min((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1)))))))));
    var_28 += ((/* implicit */long long int) (~(-1436627773)));
}
