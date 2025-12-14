/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186404
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) 3119045921U);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_13 [i_3] [i_1] [i_3] = ((/* implicit */short) (((~(((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) arr_6 [i_4] [i_0] [i_1] [i_0])))))) & (var_6)));
                                var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_8 [i_4] [i_1 - 1] [i_0 - 2] [i_0]) >= (arr_8 [i_1] [i_1 - 1] [i_0 - 2] [i_0])))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_8 [i_1 - 1] [i_1 - 1] [i_0 - 2] [(unsigned short)19])) : (4224861359438064327ULL)))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] = ((/* implicit */signed char) ((16766051603186651847ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_0 - 2] [i_0 - 1]))) : (arr_8 [i_0 - 1] [i_0] [i_1 - 1] [i_2]))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_5] &= arr_7 [i_5] [i_2] [i_1] [i_0 - 2];
                                var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0 + 1] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                    arr_22 [(unsigned short)12] [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)32755);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (~(1175921374U)));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_10))));
    var_20 = ((/* implicit */short) var_2);
}
