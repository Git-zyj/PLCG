/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146185
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
    var_17 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) (short)13271))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (7398558184420519108LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2006393224)) || (((/* implicit */_Bool) 1ULL))))))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 4294967278U))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-76))))) : (((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (5111542873740944013ULL)))));
                    arr_9 [i_0] = ((/* implicit */unsigned short) (+((~((-(var_11)))))));
                    var_19 = ((/* implicit */short) var_16);
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (short)248);
                }
                var_20 = ((/* implicit */_Bool) (signed char)96);
                var_21 = ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_5);
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) var_1)) << (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((unsigned char) var_12))))))))));
}
