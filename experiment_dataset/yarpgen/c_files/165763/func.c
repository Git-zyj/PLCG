/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165763
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
    var_14 = ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (16777216)))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (var_0)))), ((~(var_4))))) : (((/* implicit */unsigned long long int) min((((long long int) var_0)), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((int) min((((/* implicit */long long int) arr_0 [i_0 + 2])), (var_0))));
                    var_16 = ((/* implicit */short) arr_1 [i_0 + 1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_16 [i_3] [(unsigned short)11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_2] [i_4]))));
                                var_17 ^= ((unsigned char) max((var_1), (arr_12 [i_4 - 1] [i_1 + 1] [i_0 + 2])));
                                var_18 = ((/* implicit */unsigned char) arr_8 [i_0] [i_2 + 1] [(unsigned short)13] [1ULL]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0 + 1] [(_Bool)1] [(unsigned char)8] [i_1] = ((((/* implicit */_Bool) ((short) arr_14 [i_0 - 1] [i_2 + 1]))) ? (((/* implicit */int) ((_Bool) arr_12 [i_0 + 1] [i_1] [i_2 + 1]))) : (((/* implicit */int) ((_Bool) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                                arr_24 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(var_10))), (((/* implicit */unsigned int) ((short) arr_6 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_13 [i_6 + 1] [i_5] [i_2 - 1] [(unsigned char)3] [i_0 - 2])))) : (max((((((/* implicit */long long int) ((/* implicit */int) var_8))) | (arr_1 [(unsigned short)10]))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */short) var_6);
}
