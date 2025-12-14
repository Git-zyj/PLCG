/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121903
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
    var_13 = ((/* implicit */_Bool) min((var_13), (var_9)));
    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((max((((/* implicit */unsigned short) var_8)), (var_3))), (((/* implicit */unsigned short) var_9)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_4] &= ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2] [i_4]);
                                arr_15 [i_0] = ((/* implicit */unsigned short) ((int) (+(-9223372036854775787LL))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(((/* implicit */int) var_9)))))));
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */signed char) var_11);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(arr_10 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 23; i_5 += 4) 
    {
        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            {
                var_16 ^= arr_21 [i_5] [i_5] [i_5];
                arr_24 [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(var_10)))) >= ((~(((arr_21 [i_5] [i_5] [i_6]) >> (((var_10) + (1539282543)))))))));
                var_17 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (4294967274U)))) : (((unsigned long long int) max((((/* implicit */unsigned int) var_11)), (arr_20 [i_5])))));
                arr_25 [i_5] [i_6] [i_5] = arr_21 [i_5] [i_5] [i_5];
                arr_26 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_9)), (arr_23 [i_5] [i_6])))), ((-(arr_21 [i_6] [i_6 + 2] [i_6])))));
            }
        } 
    } 
    var_18 |= ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) % ((+(((/* implicit */int) var_11)))))) % (((/* implicit */int) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) var_10)))))));
}
