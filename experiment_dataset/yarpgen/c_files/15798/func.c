/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15798
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
    var_18 = max((((((/* implicit */long long int) (+(((/* implicit */int) (signed char)24))))) / (((-7193996816465206003LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-18336))))))), (-7193996816465206003LL));
    var_19 = ((min((-7193996816465205985LL), (((-7193996816465206003LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 = ((0LL) | (var_5));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) -1986221801)), (arr_12 [i_1] [i_1] [i_1] [15LL] [i_1] [i_1 + 1] [i_1 - 2]))))))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max(((+(536870911U))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)53663)), (arr_4 [i_3] [i_1 - 1] [i_2]))))))) > (min((((/* implicit */unsigned long long int) max((arr_4 [i_3] [i_0] [i_3]), (((/* implicit */int) arr_8 [i_0 + 2]))))), ((~(arr_12 [(signed char)8] [(signed char)8] [i_2] [i_3] [(unsigned short)2] [i_4] [14LL]))))))))));
                                var_23 ^= ((/* implicit */int) (+(7193996816465206003LL)));
                                arr_13 [i_1] [i_1] [(unsigned short)1] [i_3] [16ULL] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max(((signed char)48), ((signed char)-17))))))), (694704462810290291LL)));
                            }
                        } 
                    } 
                    var_24 -= ((/* implicit */_Bool) (~(694704462810290302LL)));
                }
            } 
        } 
    } 
}
