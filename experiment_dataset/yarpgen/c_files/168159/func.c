/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168159
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
    var_10 = ((/* implicit */short) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    var_11 = var_4;
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_12 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(min((65504U), (((/* implicit */unsigned int) var_8)))))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max(((unsigned short)16384), (((/* implicit */unsigned short) (signed char)-52))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) (+(var_0)));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-77)), (2815687589U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-21))))) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 2351508127U)) : (5604682209566296830ULL)))));
                var_15 = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_2))), (((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (4294901791U))))))));
            }
        } 
    } 
}
