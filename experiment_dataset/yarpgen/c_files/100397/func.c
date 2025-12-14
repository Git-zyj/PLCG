/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100397
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
    for (long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (var_3)))) ? (max((((/* implicit */long long int) var_6)), (arr_5 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL))))))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 9223372036854775798LL))))));
                var_20 = ((/* implicit */short) -9223372036854775795LL);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_2]))) : (var_0)))) ? (max((min((9223372036854775798LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_3 + 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 - 3])) : (((/* implicit */int) arr_4 [i_1 + 1]))))))))));
                            arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] &= ((/* implicit */unsigned int) var_14);
                            var_22 ^= ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                            var_23 = ((/* implicit */signed char) min(((+(-2837332105943044188LL))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 1; i_4 < 20; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (signed char i_6 = 2; i_6 < 20; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) var_8);
                                var_25 = ((/* implicit */signed char) min((arr_17 [i_4 - 1]), (min((arr_17 [i_4 + 2]), (var_3)))));
                                var_26 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_20 [i_4 - 1] [i_4] [i_6] [i_6 + 1])) <= (var_11))) && (max((((_Bool) var_7)), (((arr_17 [i_4]) != (((/* implicit */long long int) var_2))))))));
                                arr_23 [i_8] [i_7] [i_6] [i_5] [i_5] [i_4] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_19 [i_8] [i_7] [i_6] [i_5] [i_4]), (((/* implicit */unsigned char) (signed char)43)))))) : (max((((/* implicit */long long int) arr_18 [i_6 - 2] [i_4 + 1] [i_6])), (-9223372036854775799LL)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (~(((-843037105) / (((/* implicit */int) arr_19 [i_6] [i_6 - 2] [i_6] [i_6 + 2] [i_6])))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_3))));
}
