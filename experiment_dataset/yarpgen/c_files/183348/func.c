/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183348
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
    var_20 = ((/* implicit */int) ((((max((4096LL), (((/* implicit */long long int) 1980001944)))) == (max((((/* implicit */long long int) (unsigned char)68)), (8210840081813705785LL))))) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (min((((/* implicit */long long int) var_5)), (((-8210840081813705797LL) - (-8210840081813705796LL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_2]);
                                arr_14 [i_3] = ((/* implicit */unsigned int) var_15);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] = (~((~(((((/* implicit */int) (unsigned char)61)) & (((/* implicit */int) arr_8 [i_0] [i_1])))))));
                                var_22 = ((/* implicit */int) (~(((unsigned int) arr_6 [i_5] [i_1] [i_1 + 1]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (9223372036854775807LL)))));
                }
            } 
        } 
    } 
}
