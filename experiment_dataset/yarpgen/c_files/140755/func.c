/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140755
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
    var_18 += ((/* implicit */unsigned int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] = ((/* implicit */unsigned char) (~((+((-(((/* implicit */int) (unsigned char)211))))))));
                                var_19 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)211)))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)199)))))))));
                var_20 &= ((/* implicit */unsigned char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_13 [i_0] [(_Bool)1] [i_0] [i_1] [2U] [14LL] [i_1])))))))));
                var_21 = ((/* implicit */unsigned int) (-((~((~(((/* implicit */int) var_14))))))));
            }
        } 
    } 
}
