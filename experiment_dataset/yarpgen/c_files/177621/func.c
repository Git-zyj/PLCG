/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177621
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((/* implicit */int) ((3544514571334086436ULL) >= (((/* implicit */unsigned long long int) arr_5 [i_0] [(unsigned short)4]))))), ((((_Bool)0) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) <= (((/* implicit */int) arr_0 [i_1]))))))))))));
                var_17 *= ((/* implicit */int) max((max((4294967295U), (((arr_1 [i_1]) * (1957956211U))))), ((+(2355803338U)))));
                arr_7 [i_0] &= ((/* implicit */short) ((unsigned short) (+(14902229502375465195ULL))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_1))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9439)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64565)) || ((_Bool)1))))) : (var_14)))) ? ((-(((/* implicit */int) ((signed char) (_Bool)1))))) : (((/* implicit */int) ((_Bool) 2147483647U)))));
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        for (unsigned char i_3 = 3; i_3 < 18; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    var_20 = ((arr_11 [14] [i_3 - 1] [i_4]) ? (2770761839U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(short)11] [i_3] [i_3]))) == ((-(7384776949630727697ULL))))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28830)) >> (((/* implicit */int) arr_10 [i_2 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2 + 1])) < (arr_16 [i_4] [i_3] [i_3 + 1] [i_2 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 + 1] [i_2 + 1])) && (((/* implicit */_Bool) arr_12 [i_4] [i_3 + 1] [i_2 + 1])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */long long int) 917504U)) / (-9223372036854775793LL))))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned short)13)), (((arr_17 [i_2 + 1] [i_3 + 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))))));
                                arr_21 [i_2] [i_3 + 3] [i_2] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_16 [i_6] [8] [i_4] [i_2]), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15096)) || (((/* implicit */_Bool) arr_13 [(unsigned char)5] [i_2] [i_2])))))))) ? (((((/* implicit */_Bool) 2316141696U)) ? (((/* implicit */unsigned int) min((arr_12 [i_2 + 1] [i_3 - 2] [i_4]), (((/* implicit */int) (short)32767))))) : (arr_19 [i_6 - 1] [i_6 - 2] [i_6] [i_6 + 2] [i_6] [i_6 + 1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_3] [i_4] [(signed char)0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((691790650U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)5595)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)3)))), (((/* implicit */int) var_3))));
}
