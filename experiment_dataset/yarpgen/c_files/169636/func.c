/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169636
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-43))))) >= (max((((/* implicit */unsigned long long int) var_8)), (var_3)))));
    var_11 = ((/* implicit */signed char) var_4);
    var_12 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) var_5)), (max((var_0), (((/* implicit */unsigned long long int) (signed char)-52))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_13 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-55)) && (((/* implicit */_Bool) 10794805380769356519ULL)))), ((!(((/* implicit */_Bool) (signed char)-68)))))))) * (16126675608820701948ULL));
                    arr_8 [i_0] [i_2] [i_2] |= max((min((max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (2320068464888849694ULL))), (max((var_3), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_1])))))), (((/* implicit */unsigned long long int) var_6)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) 2320068464888849694ULL);
                                var_15 = ((/* implicit */unsigned char) 712303483);
                                var_16 = ((/* implicit */unsigned char) (short)26103);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((16126675608820701922ULL), (((/* implicit */unsigned long long int) (signed char)-41)))))));
                }
            } 
        } 
    } 
}
