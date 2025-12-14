/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102185
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
    var_19 += ((/* implicit */signed char) (+((((+(190960265))) >> (((-2147483637) - (-2147483647)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55195)) != (((/* implicit */int) (_Bool)1))))), (max((var_7), (((/* implicit */long long int) (_Bool)1))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) & (2599183431U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) == (16907521600830942293ULL)))))))));
                    arr_8 [i_2 - 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(5450197428358628984ULL))))));
                    arr_9 [13] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned short) (((+(7))) < ((~((~(((/* implicit */int) var_15))))))));
                }
            } 
        } 
    } 
}
