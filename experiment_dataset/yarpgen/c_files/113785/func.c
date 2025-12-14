/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113785
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (short)-30608)))));
                                var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (unsigned char)88)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) (unsigned short)0)) : ((~(((/* implicit */int) var_10))))));
                    var_23 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (_Bool)1)), ((~(2765538543U))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                    var_24 -= ((/* implicit */unsigned long long int) ((unsigned char) ((int) ((signed char) var_14))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))), (max((((/* implicit */unsigned long long int) (unsigned char)68)), (17592186044415ULL)))));
}
