/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130589
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((((/* implicit */int) (short)-9575)) < (((/* implicit */int) var_6))))) << (((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)119)), (var_14)))) - (90)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_2 + 2] [i_1] [i_1] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))));
                            arr_11 [(signed char)4] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_9 [i_1] [i_1 + 1] [i_2] [i_2 - 1] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)32764)) > (((/* implicit */int) (unsigned char)0)))))) : ((~(arr_9 [i_1] [i_1 + 3] [i_1] [i_2 + 2] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_5);
    var_19 |= ((/* implicit */_Bool) (~(((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) var_11)))))));
    var_20 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) 1085009233U)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_12)))) << (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_14)))) || (((/* implicit */_Bool) var_2)))))));
}
