/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18292
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
    var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((-5306238644186834451LL), (-1593024364917208778LL))), (((/* implicit */long long int) var_17))))) ? (((/* implicit */unsigned int) var_18)) : (((min((((/* implicit */unsigned int) 2147483642)), (4212776557U))) & (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])), (arr_1 [i_2])))), (((((/* implicit */_Bool) ((long long int) 88021204))) ? (((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [5LL] [i_0] [i_0]))) : (5334160319546990127ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967291U)) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [(signed char)6]))))))));
                    var_22 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) var_17)))))))), ((~((+(var_19)))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) 1396294556))) ? (((long long int) (unsigned char)113)) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [8ULL] [i_1])))));
                }
            } 
        } 
    } 
    var_24 = (~(36U));
    var_25 = ((/* implicit */unsigned short) ((long long int) var_12));
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (845444693)));
}
