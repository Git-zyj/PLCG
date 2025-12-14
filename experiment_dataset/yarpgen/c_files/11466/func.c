/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11466
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
    var_17 *= (((-(var_5))) > (max(((+(6659395233207811501ULL))), (((/* implicit */unsigned long long int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((6659395233207811501ULL) << (((((unsigned long long int) var_15)) - (153ULL))))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_19 *= (unsigned char)195;
                                var_20 = ((((/* implicit */unsigned long long int) min((arr_14 [10ULL] [i_1 - 2] [i_1 - 2] [i_2] [i_3] [i_4 + 2] [i_4]), (arr_13 [(signed char)7] [i_1 + 1] [(signed char)7] [(unsigned short)0] [i_4] [i_4 + 2])))) % (((((/* implicit */_Bool) arr_13 [i_1] [i_1 - 1] [i_3] [(unsigned short)7] [i_3] [i_4 + 3])) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1 - 3] [i_2] [i_3] [i_4] [i_4 - 1] [i_4])) : (14107225674789179457ULL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_3);
    var_22 = ((/* implicit */unsigned long long int) var_15);
}
