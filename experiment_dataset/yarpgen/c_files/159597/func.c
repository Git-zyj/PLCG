/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159597
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
    var_16 = ((/* implicit */unsigned long long int) (-((-((-(((/* implicit */int) (unsigned char)37))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (-((-((-(((/* implicit */int) (unsigned char)140))))))));
                                arr_14 [i_0] [i_4] = ((/* implicit */unsigned char) (~((+((-(((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */_Bool) (-((~((-(((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                var_19 = ((/* implicit */unsigned char) (-(52776558133248LL)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) var_1))))))));
    var_21 |= (!((!((!(((/* implicit */_Bool) var_13)))))));
}
