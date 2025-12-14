/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183880
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min(((signed char)14), ((signed char)-49)))) ? (max((((/* implicit */unsigned int) arr_5 [(_Bool)0] [i_2])), (1904128259U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (var_6)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_14 += ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)48))))), (1855991009U)));
                                var_15 += ((/* implicit */unsigned char) var_4);
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((var_0) ? (min((((/* implicit */unsigned long long int) ((long long int) var_0))), (arr_0 [i_3 - 3] [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                                arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) (signed char)44)), (-2852716415603646888LL)))));
                                var_17 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (1977945246))) : (((/* implicit */int) arr_2 [i_1 - 1]))))) / (var_9)));
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */short) (((((+(((/* implicit */int) max((var_4), (var_5)))))) + (2147483647))) >> ((((-(max((2390839040U), (((/* implicit */unsigned int) arr_1 [i_0] [i_1])))))) - (1904128240U)))));
                    var_19 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) var_0)), (var_9)));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))), (min((((/* implicit */long long int) 1904128262U)), (-6195279443145618937LL))))), (var_9)));
}
