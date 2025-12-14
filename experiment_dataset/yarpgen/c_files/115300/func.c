/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115300
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
    var_20 = ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 -= ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_2])))), (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)5992))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) arr_7 [i_1]);
                                arr_15 [i_0] [i_4] [i_2] [i_2] [i_4] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : ((-9223372036854775807LL - 1LL))))) ? (min((arr_10 [i_0]), (arr_10 [i_2]))) : (((/* implicit */int) ((short) arr_1 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
