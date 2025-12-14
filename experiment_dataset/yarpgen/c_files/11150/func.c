/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11150
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
    var_15 = ((/* implicit */unsigned char) max(((-(-870373813))), (((((/* implicit */int) var_0)) << (((((((/* implicit */int) var_12)) - (((/* implicit */int) var_7)))) - (23)))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((short) arr_3 [(short)22]));
                arr_6 [i_0 + 1] [i_1] = ((/* implicit */unsigned int) (signed char)-27);
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_3 [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) (+(((/* implicit */int) ((arr_0 [i_0 - 2]) && (((/* implicit */_Bool) 34359607296LL)))))));
                                var_20 ^= ((/* implicit */short) arr_7 [i_1]);
                                arr_16 [i_0] [13LL] [i_0] [13LL] [i_0 + 4] = ((/* implicit */long long int) ((((arr_0 [i_0 - 2]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 2])))) != (((/* implicit */int) max((var_13), (arr_0 [i_0 + 2]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
