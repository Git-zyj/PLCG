/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114697
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
    var_18 = (unsigned short)58606;
    var_19 &= ((/* implicit */unsigned short) 2305807824841605120ULL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((1851324093), (((/* implicit */int) (unsigned short)4092)))))));
                                var_21 = ((/* implicit */_Bool) (unsigned char)97);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 528040724U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))) : (3766926572U)));
            }
        } 
    } 
}
