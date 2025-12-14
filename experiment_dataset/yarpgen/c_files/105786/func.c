/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105786
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) arr_0 [i_1]);
                var_14 -= ((/* implicit */unsigned short) var_6);
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) (((+(arr_4 [i_4]))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) ((arr_3 [i_0]) >> (((2015580481) - (2015580450))))))))));
                                var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((arr_5 [i_0 - 1] [i_2 + 4] [i_4 + 1] [i_4]), (((/* implicit */unsigned int) var_9))))), (max((((/* implicit */unsigned long long int) arr_9 [i_3] [i_2] [i_1] [i_0])), (arr_0 [i_0 + 2])))));
                                arr_12 [i_4] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_0 - 1] [i_2 + 4] [i_4] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_0 - 1] [i_2 + 1] [i_4] [i_0])))));
                                arr_13 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_1] [i_1] [i_2 + 1] [i_3] [i_4 + 1])), (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (unsigned short)5871)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) arr_4 [i_2])) : (arr_0 [i_4 + 1])));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_10 [i_1]))));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (signed char i_7 = 2; i_7 < 8; i_7 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-66)) ? (2147483647) : (((/* implicit */int) (signed char)-56))))), (max((((/* implicit */unsigned int) (unsigned short)5871)), (arr_16 [i_5])))));
                    var_20 = ((/* implicit */signed char) arr_17 [i_5] [i_5]);
                    var_21 *= ((/* implicit */unsigned char) (_Bool)0);
                    var_22 ^= arr_2 [i_5] [i_6] [i_7];
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (signed char i_9 = 2; i_9 < 8; i_9 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_1 [i_6])))))))));
                                var_24 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) 13)), (17848093164996974465ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5] [i_6])) ? (arr_19 [i_9] [i_5] [i_5] [i_5]) : ((-(((/* implicit */int) (signed char)63)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_10)) ^ (var_5)));
}
