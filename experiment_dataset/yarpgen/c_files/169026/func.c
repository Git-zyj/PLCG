/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169026
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned long long int) min((-1557925700), (((/* implicit */int) (unsigned short)44125))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 3294422143U)) : (274877906688ULL))))))))));
    var_19 = ((/* implicit */short) max((max((((/* implicit */long long int) var_11)), (var_8))), (((((/* implicit */_Bool) var_2)) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) var_14);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_0)))) != (((((/* implicit */int) arr_5 [(short)3] [(short)3] [(short)3] [i_4])) | ((+(((/* implicit */int) (signed char)-20))))))));
                                var_20 *= ((/* implicit */unsigned char) (+(var_1)));
                                arr_14 [i_0] [i_0] [i_0] [i_3 + 1] [i_0] = (~(((/* implicit */int) var_15)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            {
                                arr_21 [i_1 - 1] [i_1 - 1] [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1000545152U)) ? (274877906688ULL) : (var_1)))))) && (((/* implicit */_Bool) var_17))));
                                var_21 = ((/* implicit */int) (!(((((/* implicit */int) arr_3 [i_6 + 1] [i_1 + 1])) > (((/* implicit */int) arr_3 [i_6 + 1] [i_1 + 1]))))));
                                arr_22 [i_0] [i_1 + 1] [i_2 + 1] [(unsigned short)7] [i_5] = ((/* implicit */signed char) (~(4936813954123000508LL)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) var_5);
                }
            } 
        } 
    } 
}
