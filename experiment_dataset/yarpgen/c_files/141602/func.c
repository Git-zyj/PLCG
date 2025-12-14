/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141602
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
    var_19 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_1 - 1] [i_1] [8U] [16ULL] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 1] [i_2 - 2])) ? (arr_5 [i_2] [i_2 + 1] [(unsigned short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27442)))))));
                    arr_8 [i_0] [12LL] = ((/* implicit */unsigned int) max(((unsigned short)27436), (((/* implicit */unsigned short) (unsigned char)108))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [6U] [6U] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_0] [i_3] [i_2] [i_1] [i_0])) ? (((((/* implicit */_Bool) 6845491258997775319ULL)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1589959479)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)50))))))))));
                                arr_16 [i_0] [(_Bool)1] [i_2 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(10859119992180811588ULL)))) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [2U] [i_3 + 1] [i_3] [2U])) > (((/* implicit */int) arr_4 [16LL] [i_3 + 2] [(unsigned char)14] [16LL]))))))));
                                arr_17 [(signed char)2] [i_1] [(signed char)2] [i_3] [i_3] [i_4] = ((/* implicit */short) (~((+(((/* implicit */int) (!((_Bool)1))))))));
                                arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 - 1])) / ((-(var_1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((((((/* implicit */_Bool) -1373665058682940381LL)) ? (((/* implicit */unsigned int) var_9)) : (1660757931U))) >> (((var_7) - (958137231351349844LL))));
}
