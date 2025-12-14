/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180732
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
    var_17 = var_6;
    var_18 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */short) arr_1 [i_1] [i_0])), (((short) var_7))));
                var_21 = ((/* implicit */unsigned char) (_Bool)1);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) (~((((_Bool)1) ? (((/* implicit */int) arr_6 [i_1] [16ULL] [i_1])) : (((/* implicit */int) min(((unsigned char)11), (((/* implicit */unsigned char) (_Bool)1)))))))));
                                arr_12 [i_0] [i_0] [i_2] [10U] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_12)))) ? ((~(arr_5 [i_0] [(short)22] [i_1]))) : (((((/* implicit */_Bool) arr_10 [i_4 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_5 [i_1] [i_2] [i_1]))));
                                var_22 *= ((/* implicit */_Bool) ((unsigned long long int) min((arr_4 [i_3]), (arr_4 [i_0]))));
                                arr_13 [i_0] [i_1] [i_1] [i_3 - 1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)3)) || (((/* implicit */_Bool) 15101092870691424059ULL)))))) : (var_0))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
