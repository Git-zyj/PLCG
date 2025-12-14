/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121389
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
    var_16 ^= ((/* implicit */int) 3180004840U);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_9 [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) max((min((16476601922755038401ULL), (min((9932842430101684031ULL), (((/* implicit */unsigned long long int) 2718076658U)))))), (((/* implicit */unsigned long long int) (unsigned char)37))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) 2147483647))));
                            var_18 = ((/* implicit */int) (unsigned short)42094);
                            var_19 = ((/* implicit */unsigned int) min((min((-2074309133772754535LL), (((/* implicit */long long int) 7)))), (((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) (unsigned short)36117)))))));
                        }
                    } 
                } 
                var_20 += ((/* implicit */_Bool) min((min(((unsigned char)69), ((unsigned char)186))), (min(((unsigned char)69), (((/* implicit */unsigned char) (signed char)13))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((min((min((((/* implicit */int) (unsigned char)192)), (1565846087))), (((/* implicit */int) max(((unsigned char)252), ((unsigned char)101)))))), (((/* implicit */int) (unsigned char)101)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned char) (signed char)65)), ((unsigned char)0))), (min((((/* implicit */unsigned char) (signed char)-111)), ((unsigned char)238)))))), (max((min((11680218700119792373ULL), (((/* implicit */unsigned long long int) -2235183910836001870LL)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-6278)), (139339866))))))));
    /* LoopNest 3 */
    for (unsigned short i_4 = 4; i_4 < 17; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 3; i_7 < 16; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                arr_24 [i_8] [i_7] [i_6] [i_7] [i_4] = ((/* implicit */unsigned long long int) min((max((-5148645586715673658LL), (((/* implicit */long long int) (signed char)55)))), (((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) (unsigned char)158)))))));
                                var_23 = ((/* implicit */unsigned int) (signed char)-1);
                                var_24 = ((/* implicit */unsigned int) max((min((-139339866), (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) (unsigned short)21975))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) (unsigned char)254);
                    arr_25 [i_4 - 1] [i_5] [i_5] [i_6] = ((/* implicit */signed char) max((min((max((((/* implicit */unsigned long long int) (_Bool)0)), (12554833757409976092ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)52)), (336159004U)))))), (((/* implicit */unsigned long long int) 475479130U))));
                    var_26 &= ((/* implicit */_Bool) 1595503293U);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) min((((/* implicit */unsigned int) max((var_11), (((/* implicit */int) max(((unsigned short)43561), ((unsigned short)36979))))))), (max((((/* implicit */unsigned int) var_13)), (var_2)))));
}
