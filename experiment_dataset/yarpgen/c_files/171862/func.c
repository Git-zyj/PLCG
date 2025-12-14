/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171862
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [10LL] = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
                var_17 = ((/* implicit */long long int) -2147483618);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned short)5853)))), (((/* implicit */int) max(((signed char)104), (var_10))))))) >= (((((/* implicit */_Bool) arr_16 [(signed char)4] [i_4 - 1] [i_4 - 1] [8U] [i_4 - 1] [(signed char)10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [(_Bool)1] [i_4 - 1] [i_4 - 1] [(unsigned short)1] [i_4 - 1] [(unsigned short)4]))) : (arr_17 [12U] [i_4 - 1] [i_4 - 1] [2U] [i_4 - 1])))));
                                var_19 *= ((/* implicit */long long int) (~(((/* implicit */int) var_15))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) (+(var_11)));
                    arr_20 [(unsigned char)1] [0] = ((/* implicit */unsigned short) ((signed char) max((var_0), (((/* implicit */int) ((((/* implicit */long long int) 2147483647)) < (9223372036854775807LL)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_5);
    var_22 ^= ((/* implicit */signed char) (+(9223372036854775807LL)));
}
