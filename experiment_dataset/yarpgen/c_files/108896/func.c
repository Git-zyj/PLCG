/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108896
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
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_8))));
    var_15 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (var_11) : (var_11)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((arr_5 [i_1] [i_2]), (arr_10 [i_4] [i_1] [i_2] [i_1] [i_0] [i_0]))) * (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_3] [i_4])) ? (4134268376372820864ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0])))))))) ? (arr_3 [i_3 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1125899906842623LL)) ? (((/* implicit */int) arr_13 [i_4] [i_4 - 2] [i_4 - 2] [i_4 + 2] [i_4])) : (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_3] [i_2])) ? ((~(((/* implicit */int) arr_4 [i_0] [i_1])))) : (((/* implicit */int) min((var_6), (var_4))))))));
                                var_18 += ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_10 [(_Bool)1] [i_1] [i_2] [i_3] [i_4] [i_2])))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) min((var_19), ((-(((((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned short)17] [i_2])) + (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2]))))))));
                    arr_14 [i_1] [(signed char)9] [i_1] |= ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [13] [i_2]);
                    var_20 = ((/* implicit */long long int) min((var_20), (var_12)));
                }
            } 
        } 
    } 
}
