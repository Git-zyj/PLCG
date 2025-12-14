/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167394
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
    var_17 -= ((/* implicit */short) ((((/* implicit */int) var_8)) & (((((/* implicit */int) var_6)) + (((/* implicit */int) (signed char)-55))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_0 [i_1 - 1])))))) >> ((((-(((/* implicit */int) (signed char)21)))) + (43))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) ((signed char) ((signed char) (-(((/* implicit */int) (signed char)45))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) -674767115548828174LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-122))));
                                var_20 &= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)121))));
                                arr_14 [i_0 - 1] [i_4] [i_2] [i_4] [(_Bool)0] [i_1] = ((/* implicit */short) min((min((((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 2] [i_1] [i_3] [i_0 - 1] [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (signed char)115)))), (((((/* implicit */int) (unsigned char)138)) - (((/* implicit */int) var_3)))))), (((((/* implicit */int) min((arr_10 [i_1]), ((signed char)-115)))) | (((((/* implicit */int) (short)27374)) ^ (((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
