/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185968
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
    var_16 = ((/* implicit */int) 7076689531170999769ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1 + 1] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 1]))))));
                var_17 = ((/* implicit */_Bool) max(((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (unsigned short)39004))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) (signed char)72);
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)232))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)40), (((/* implicit */unsigned char) (signed char)-84)))))) : (((long long int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_3))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) - (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1524892436)), (934906214U)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) > (((/* implicit */int) (unsigned char)15))))) : (((/* implicit */int) arr_15 [i_2] [19U] [15LL] [15LL] [i_2] [8ULL] [i_3]))))));
                arr_16 [i_2] = max((-1036409877), (((/* implicit */int) (signed char)102)));
            }
        } 
    } 
}
