/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121393
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
    var_14 = ((/* implicit */int) var_7);
    var_15 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11U)) ? (4431274824022980285LL) : (-3361411760121440225LL)));
                            arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) (-(var_3)));
                            arr_14 [i_0] [12LL] [i_1] [i_0] [12LL] = ((/* implicit */unsigned int) ((_Bool) var_3));
                            var_17 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 9223372036854775807LL)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3361411760121440224LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19537))) : (3851199974U)))))))));
                                var_19 = ((/* implicit */signed char) ((((arr_0 [i_1]) <= (arr_0 [i_5]))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : ((~(var_4))))) : (((int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) 185014654U);
    var_21 = ((/* implicit */int) -9223372036854775807LL);
}
