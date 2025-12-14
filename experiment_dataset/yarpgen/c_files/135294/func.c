/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135294
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
    var_18 = ((/* implicit */unsigned char) ((unsigned int) 18446744073709551606ULL));
    var_19 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */int) min((max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (918844175631168135ULL)))), (arr_10 [i_4] [i_4] [i_4] [i_0]))), (((/* implicit */unsigned int) ((4935124394313444385LL) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2]))))))));
                                arr_13 [(unsigned short)4] [i_1] [(unsigned short)4] [i_3] [i_1] &= ((/* implicit */int) ((((unsigned long long int) arr_2 [i_0] [i_4])) < (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0] [i_0 + 2])), (max((((/* implicit */int) (unsigned short)26706)), (arr_3 [i_3]))))))));
                                var_21 -= ((/* implicit */unsigned short) arr_0 [i_4]);
                                arr_14 [i_4] [i_0] [9] [(unsigned char)7] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((int) min((arr_7 [i_0 + 2] [i_0] [3U]), (arr_7 [i_0 + 2] [i_0] [i_0]))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_12 [i_0] [i_3] [i_2] [i_0] [i_4]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */short) ((min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2349263851U)) < (-4935124394313444386LL)))))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 2])))))));
                            arr_22 [i_0] [16ULL] [i_5] [16ULL] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [8]))))))));
                            arr_23 [i_6] [i_0] [9LL] [i_6] [i_6] = ((/* implicit */unsigned int) ((short) arr_17 [i_0] [i_5 + 2] [i_0] [i_0]));
                            var_24 *= ((/* implicit */unsigned long long int) arr_11 [i_0 - 2] [i_0 - 2]);
                        }
                    } 
                } 
                var_25 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_16 [16LL] [8U] [i_0] [16LL]))));
                arr_24 [i_0] = ((/* implicit */unsigned short) (~(1029976943)));
            }
        } 
    } 
}
