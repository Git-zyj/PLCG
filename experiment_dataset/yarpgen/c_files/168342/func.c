/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168342
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
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */short) var_9)), (var_3)))), (var_12)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 -= (unsigned char)30;
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_15)), (6291456ULL))) != (max((var_12), (((/* implicit */unsigned long long int) var_7))))))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (4041884953502023469LL) : (((/* implicit */long long int) 1804044217))));
                                arr_17 [i_4] [9] [i_2] [i_1 - 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_14 [(unsigned short)3] [(unsigned short)3] [i_2] [i_1 + 1] [i_0])))), (((5606542040245485359ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])) || (((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 - 1] [4] [i_3 - 1]))))) : ((((-(var_14))) & (((/* implicit */int) var_16))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) max((var_3), (var_5)))) ? (max((var_2), (((/* implicit */unsigned long long int) -1804044218)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (var_1))))))));
    var_22 &= ((/* implicit */unsigned short) var_16);
}
