/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126619
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? ((-(6392241229215523603LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (signed char)-6)))))))), (((unsigned long long int) (signed char)-126))));
                                var_11 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (unsigned short)16077)))), (((((/* implicit */_Bool) (signed char)-9)) ? (-890121414) : (((/* implicit */int) (signed char)23))))));
                                var_12 = ((/* implicit */int) max((((((/* implicit */_Bool) 10666745348289902478ULL)) ? (17703671425442645962ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32754))))), ((~(6702461180479893801ULL)))));
                                var_13 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-50)))) ? (((((/* implicit */_Bool) 1932941180U)) ? (((/* implicit */int) (unsigned short)26265)) : (-890121414))) : (((/* implicit */int) ((_Bool) (signed char)-3)))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-32762)), ((~((+(((/* implicit */int) (signed char)-3))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_3);
}
