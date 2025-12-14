/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131968
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [(signed char)3] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 - 1] [i_0] [i_2]))))), ((-(((/* implicit */int) (signed char)28))))));
                            var_17 += ((/* implicit */_Bool) (((!((_Bool)1))) ? (((arr_9 [i_2 - 1] [i_2 + 1] [i_0] [i_0]) % (((/* implicit */int) arr_6 [i_3] [i_2 + 1] [i_2] [i_3])))) : ((+(((/* implicit */int) (_Bool)1))))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_3 [i_2 + 1])) & (((/* implicit */int) var_9))))))));
                            arr_12 [i_3] [i_3] [i_1] [i_2 - 1] [i_3] [i_3] &= ((/* implicit */signed char) (+((-(((/* implicit */int) arr_4 [i_2] [i_1]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (_Bool)1))));
                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-10))));
                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)112))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [(signed char)3] [19] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_8 [i_0] [17LL] [i_4] [i_5]);
                                var_22 = ((/* implicit */int) min((2122326418U), (((/* implicit */unsigned int) (unsigned short)47102))));
                                var_23 += ((/* implicit */int) var_10);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_9);
    var_25 ^= ((/* implicit */unsigned short) (-((~(max((((/* implicit */long long int) (signed char)-17)), (var_14)))))));
}
