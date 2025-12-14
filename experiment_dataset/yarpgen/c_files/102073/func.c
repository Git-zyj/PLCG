/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102073
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-43))));
                arr_7 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) max((((long long int) max((((/* implicit */long long int) (signed char)31)), (var_5)))), (((/* implicit */long long int) max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                var_10 = ((/* implicit */signed char) 4U);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 4; i_2 < 22; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) min(((+(var_2))), (((/* implicit */unsigned int) var_0))));
                var_12 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (min(((-(var_6))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_2])))))))));
                arr_13 [i_2] = var_9;
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_21 [i_4] [i_3] [i_3] [i_4] |= (+((+(4302170653290732730LL))));
                                var_13 = ((/* implicit */signed char) min((((/* implicit */long long int) var_6)), (var_1)));
                                var_14 ^= ((/* implicit */signed char) (-((+(((var_2) - (arr_18 [i_3] [i_3] [i_6])))))));
                                arr_22 [i_6] [i_6] [(signed char)3] = (i_6 % 2 == 0) ? (((/* implicit */long long int) ((max((((/* implicit */long long int) arr_9 [i_2 - 1])), (arr_15 [i_2] [i_2] [i_2] [i_2]))) <= (min((((/* implicit */long long int) ((var_6) << (((arr_19 [i_6] [i_3] [i_3] [i_5] [i_6]) + (2529273303945901383LL)))))), ((~(var_1)))))))) : (((/* implicit */long long int) ((max((((/* implicit */long long int) arr_9 [i_2 - 1])), (arr_15 [i_2] [i_2] [i_2] [i_2]))) <= (min((((/* implicit */long long int) ((var_6) << (((((arr_19 [i_6] [i_3] [i_3] [i_5] [i_6]) + (2529273303945901383LL))) - (4047871071435828511LL)))))), ((~(var_1))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_14 [i_2 - 2])))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_8))));
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        {
                            var_17 ^= ((/* implicit */signed char) max(((~(arr_15 [i_7] [i_8] [0LL] [i_10]))), (arr_19 [i_8] [i_8] [i_8] [i_10] [i_10])));
                            var_18 = ((/* implicit */signed char) var_2);
                            var_19 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_30 [i_7] [i_7] [(signed char)12] [i_9] [i_10]))))));
                            var_20 -= ((/* implicit */signed char) max((((/* implicit */long long int) ((arr_23 [i_7]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_26 [i_7] [i_8] [7LL]))))))), (min((((arr_31 [i_7] [9U] [13U] [i_10] [i_7] [i_10]) << (((var_6) - (2434641562U))))), (arr_31 [i_7] [i_8] [i_9] [i_7] [i_8] [i_9])))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max(((signed char)90), (((/* implicit */signed char) ((max((-4302170653290732731LL), (((/* implicit */long long int) (signed char)27)))) <= ((-(arr_31 [i_10] [i_10] [i_7] [i_8] [i_7] [i_7])))))))))));
                        }
                    } 
                } 
                var_22 ^= 4302170653290732717LL;
                arr_32 [i_7] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_7)), ((+(var_3))))), (((/* implicit */unsigned int) min(((signed char)-93), ((signed char)(-127 - 1)))))));
                var_23 -= ((/* implicit */long long int) arr_18 [i_7] [(signed char)3] [i_8]);
                arr_33 [i_7] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
            }
        } 
    } 
}
