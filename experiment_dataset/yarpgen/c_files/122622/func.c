/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122622
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
    var_14 = ((/* implicit */short) ((int) var_3));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) arr_4 [i_0] [(short)13] [(short)13]);
                                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)32768))))) : (14862446692373928647ULL)))));
                                var_17 *= ((/* implicit */unsigned char) ((arr_9 [i_4]) - (((/* implicit */unsigned long long int) 1605702819))));
                                var_18 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_4)), ((+(-53779376)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 23; i_5 += 2) 
                {
                    for (signed char i_6 = 2; i_6 < 24; i_6 += 3) 
                    {
                        {
                            var_19 = var_3;
                            var_20 = (_Bool)0;
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) (((+(((/* implicit */int) var_10)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 1605702836)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_11);
}
