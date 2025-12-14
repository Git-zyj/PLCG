/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177846
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) var_1);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */int) ((unsigned char) ((int) -5)))), ((-(-1))))))));
                            var_22 *= (!(((/* implicit */_Bool) (-(var_15)))));
                            arr_9 [i_0] [i_1 - 1] [i_0] [i_3 - 2] = ((/* implicit */unsigned char) arr_4 [i_1] [i_1] [i_1 - 2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_6))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (-(min((-2147483640), (((/* implicit */int) var_14))))))) : (min((var_11), (((/* implicit */unsigned int) arr_14 [i_1 + 1] [i_4 + 2]))))));
                            var_25 += ((/* implicit */unsigned short) -2032234912);
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = (-(min((max((var_3), (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) var_13)))));
    var_27 = ((/* implicit */unsigned short) var_18);
}
