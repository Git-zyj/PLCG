/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108192
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_4)) % (11463023460320371943ULL))))));
    var_17 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 127LL)) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) - (1461069939218720778ULL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) var_6);
                            var_19 = ((/* implicit */unsigned short) var_11);
                            var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) var_11))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) 2588930986488283997LL)) : (1040074558363078729ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2047)))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (14744693711635936736ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4032))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_14);
}
