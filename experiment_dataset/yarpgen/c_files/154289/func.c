/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154289
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
    var_15 -= ((/* implicit */long long int) ((70394028U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (1372396742911630737LL))) >= (((/* implicit */long long int) ((-199776320) - (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] = ((/* implicit */short) (_Bool)0);
                                var_16 = ((/* implicit */_Bool) 70394028U);
                            }
                        } 
                    } 
                    var_17 += ((70394028U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_2] = ((/* implicit */int) (_Bool)1);
                                arr_19 [i_0] [i_1] [15U] [i_5] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (short)26394);
                                var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)108)) && (((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) 543348574043837788LL)))))) || ((((_Bool)1) && (((/* implicit */_Bool) -1995079934))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) 168197140U))));
    var_20 = ((/* implicit */unsigned short) ((((8294179217069900832LL) / (1979517949197310137LL))) * (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (-173805016)))) / (8294179217069900832LL)))));
}
