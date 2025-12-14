/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130289
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
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (((var_5) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)59966))))) : (var_15)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 ^= ((/* implicit */long long int) max((((/* implicit */unsigned int) (((+(var_7))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))), (max((((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181))) : (4007106379U))), (max((var_7), (((/* implicit */unsigned int) var_2))))))));
                arr_4 [(short)10] &= ((/* implicit */unsigned short) 4007106379U);
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */unsigned char) var_3))))) : (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */int) arr_3 [i_1] [i_1]))))))) <= (4007106411U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 20; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 *= ((max((((/* implicit */unsigned int) min(((unsigned char)247), (((/* implicit */unsigned char) arr_12 [i_5]))))), (2145503586U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))));
                            arr_15 [i_2] [i_3] [i_4] [(signed char)4] [i_5] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_7 [i_5 - 1] [i_2 + 2]), (((/* implicit */unsigned int) var_2))))) ? (((var_11) / (((((/* implicit */_Bool) var_8)) ? (4294967274U) : (arr_7 [i_2] [i_2]))))) : (var_7)));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)103)))) - (((/* implicit */int) arr_13 [i_2] [i_2] [i_4] [i_4]))))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2147483647U))))), (max((((/* implicit */unsigned long long int) var_12)), (28ULL))))) : (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_5 - 1] [(unsigned char)19] [i_3] [i_2])) - (((/* implicit */int) var_13))))) : (min((((/* implicit */unsigned long long int) var_8)), (9ULL)))))));
                            var_21 |= var_7;
                            var_22 *= ((/* implicit */unsigned int) min(((unsigned char)247), (((/* implicit */unsigned char) (signed char)0))));
                        }
                    } 
                } 
                arr_16 [i_2 + 2] [i_3] = ((/* implicit */long long int) max((var_6), (((/* implicit */unsigned short) ((short) max(((_Bool)1), (arr_14 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2])))))));
            }
        } 
    } 
}
