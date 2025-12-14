/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17847
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_2] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0 + 1] [i_0] [i_0 - 2]);
                    var_19 = ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0 - 2])) << (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (unsigned char)0))));
                    arr_8 [i_0 - 2] = ((/* implicit */short) ((((((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2])) + (2147483647))) << (((((((/* implicit */int) (short)-32752)) + (32778))) - (26))))) + (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        for (int i_4 = 2; i_4 < 7; i_4 += 4) 
        {
            for (unsigned char i_5 = 2; i_5 < 9; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) arr_3 [i_4] [i_5 - 1]);
                    var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65534))));
                    arr_20 [i_3] [i_4] [i_5] = ((/* implicit */int) max((max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))) > (-1LL)))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_3] [i_4 - 1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_3)))))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 8; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (~(var_10)));
                                var_23 -= ((/* implicit */long long int) ((((/* implicit */int) max((arr_16 [i_4 + 3] [i_6 + 1] [i_5 + 1]), (((/* implicit */unsigned short) (_Bool)1))))) != (((/* implicit */int) max((((/* implicit */unsigned short) ((-1LL) != (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5 + 1])))))), (var_14))))));
                                var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6 + 1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_23 [i_3])))))))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((var_4) > (((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (unsigned char)23)) : ((-2147483647 - 1)))), (((/* implicit */int) ((((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) var_3))))) != (((/* implicit */int) arr_2 [i_4 + 3])))))));
                }
            } 
        } 
    } 
}
