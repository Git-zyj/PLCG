/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12411
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_1 - 2] [i_1 - 2] [i_0] = (+((~(2564980532872124119ULL))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~((-(6487132093654225546ULL))))))));
                    var_15 = ((/* implicit */signed char) (~((~((~(((/* implicit */int) (signed char)-88))))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_11 [i_3] [14LL] [i_0] [i_0] &= (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_3])));
                    var_16 &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_1 - 3]))));
                    arr_12 [i_1] [i_1] [i_0] = (~(((/* implicit */int) (signed char)-91)));
                }
                for (unsigned int i_4 = 4; i_4 < 18; i_4 += 1) 
                {
                    var_17 = ((/* implicit */short) (~((~(((/* implicit */int) (signed char)116))))));
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!((!(arr_1 [i_1 - 3])))));
                }
                var_18 -= ((/* implicit */signed char) (+((+(((/* implicit */int) (short)-29646))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_3);
    var_20 = ((/* implicit */short) (+(0U)));
}
