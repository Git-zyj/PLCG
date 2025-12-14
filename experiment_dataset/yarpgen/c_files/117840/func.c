/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117840
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
    var_13 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
    var_14 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 *= (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 18446744073709551615ULL)))) / (((((/* implicit */_Bool) var_2)) ? (18446744073709551615ULL) : (18446744073709551604ULL))))));
                    var_16 &= ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) 2011262506U);
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-52))))), (((long long int) arr_10 [i_4] [i_3] [i_2 + 2] [i_1 + 3] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) var_11)), (arr_4 [i_1] [7]))))))));
                                arr_12 [i_1] [i_1] [i_2] [i_3 + 2] [i_4 + 2] = ((/* implicit */unsigned short) var_5);
                                var_19 = ((/* implicit */unsigned char) var_1);
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0)))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-29948)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [5U] [5U] [i_4 - 1])) : (((/* implicit */int) var_1))))))))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [(unsigned char)10] [i_1] [i_1] = ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
    } 
}
