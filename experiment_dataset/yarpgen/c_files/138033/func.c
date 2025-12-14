/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138033
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [(signed char)2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)31)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [2U] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((-521020028858156074LL), ((-9223372036854775807LL - 1LL))))) ? ((-9223372036854775807LL - 1LL)) : (max((8962461927621913826LL), (((/* implicit */long long int) (_Bool)1))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3482)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)));
                                arr_18 [i_3] [i_2] = ((/* implicit */unsigned int) (+((~(0)))));
                                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [7])) == (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) (+(((long long int) arr_7 [i_0] [i_0]))));
                    var_22 = ((/* implicit */short) max((((/* implicit */long long int) ((max((((/* implicit */int) (_Bool)1)), (var_1))) <= (((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_12 [(short)15] [i_1])) + (27597)))))))), (max((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (var_1) : (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
}
