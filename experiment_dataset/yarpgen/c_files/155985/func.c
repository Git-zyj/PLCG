/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155985
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 += ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]))) > (((((/* implicit */_Bool) (~(4294967295U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22188)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4] [i_3]))) : (var_7)))) : (max((1805467547593076603LL), (((/* implicit */long long int) arr_10 [i_4] [i_0] [i_0] [i_2] [i_1] [i_0]))))))));
                                var_12 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1805467547593076603LL)) || (((/* implicit */_Bool) (unsigned short)65535)))))) : (max((((/* implicit */long long int) (short)32005)), (-1805467547593076598LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [4LL] [i_3] [i_3] [i_3 + 1])))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (((((/* implicit */_Bool) var_6)) ? (1396433351841966903ULL) : (((/* implicit */unsigned long long int) var_8)))))))) : ((-(max((((/* implicit */long long int) var_8)), (1805467547593076625LL)))))));
                    var_14 = ((/* implicit */_Bool) 1805467547593076603LL);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            {
                arr_16 [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) -2108204010)), ((-(3145728ULL)))));
                var_15 = ((/* implicit */unsigned short) var_4);
                var_16 = ((/* implicit */int) ((((unsigned int) ((((/* implicit */_Bool) var_7)) ? (-1578099626) : (((/* implicit */int) (unsigned char)252))))) | (((unsigned int) 815225634))));
            }
        } 
    } 
}
