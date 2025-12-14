/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139344
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((1300248237U), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)81)))))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [(unsigned short)14] [(unsigned short)14] [i_1 + 1] [i_0])))));
                    var_21 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 473202142))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_17);
    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) min((3187598221673223018LL), (-2467978976201610200LL))))));
}
