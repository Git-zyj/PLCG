/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176077
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) arr_5 [i_1]);
                var_14 &= ((/* implicit */unsigned long long int) var_12);
                var_15 = ((/* implicit */int) (~((~(((((/* implicit */_Bool) 804294657U)) ? (var_4) : (3490672639U)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_11 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (41218316) : (-1852057111)));
                            arr_12 [i_3 + 1] [i_2] [i_1] [i_0] &= ((/* implicit */long long int) var_11);
                            var_16 &= ((/* implicit */int) (~((~(var_3)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) var_12)) > (min((var_9), (var_6)))))) <= ((+(((/* implicit */int) arr_5 [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        for (unsigned int i_5 = 2; i_5 < 15; i_5 += 3) 
        {
            {
                var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)32761))) ? (var_4) : (((((/* implicit */_Bool) 2147483628)) ? (var_1) : (3816656957U))))))));
                var_19 |= ((/* implicit */signed char) 3839227281U);
                var_20 |= ((/* implicit */signed char) var_8);
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        {
                            var_21 = (-(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 455739996U))))), (((((/* implicit */_Bool) var_7)) ? (var_0) : (var_0))))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1110488051U)) ? ((-(max((((/* implicit */unsigned long long int) 436191494)), (13797710721769909143ULL))))) : (((/* implicit */unsigned long long int) min((((unsigned int) var_8)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))))))));
                            var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3828391325U)))))) : (min((1110488045U), (((/* implicit */unsigned int) 8191)))))), (((/* implicit */unsigned int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)0)))))));
                            var_24 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((~(15332477))) / (arr_3 [i_5 - 1]))))));
                        }
                    } 
                } 
                arr_25 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_8 [i_5 - 2] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 2]))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5)))))));
}
