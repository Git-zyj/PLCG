/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164744
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
    var_20 = ((/* implicit */long long int) ((short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (var_5)))), (((long long int) var_6)))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((((/* implicit */int) var_8)) == (((/* implicit */int) var_3)))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 - 3])) : (var_5))) : (((/* implicit */int) var_17)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */_Bool) ((long long int) min((var_17), (var_13))));
                                var_22 = ((/* implicit */int) min((var_22), (min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (var_4))), (((/* implicit */int) arr_6 [i_0]))))));
                                var_23 = ((min((8133218793547924319LL), (((/* implicit */long long int) (short)-32716)))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-12233)) : (((/* implicit */int) (unsigned char)112))))));
                                var_24 = ((/* implicit */int) arr_12 [i_0 - 2] [i_1] [i_4] [i_2] [(short)9]);
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */unsigned int) min((arr_11 [i_1] [i_0 + 1] [i_0] [i_0 - 3] [i_0 + 2]), (min((((/* implicit */signed char) arr_0 [i_0 + 2])), ((signed char)109)))));
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) max((var_8), (arr_0 [i_0]))))), (min((((long long int) (short)-1)), (((/* implicit */long long int) arr_4 [i_0] [i_0 + 1] [i_0]))))));
                                var_26 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [6] [i_5] [i_5])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-1)))))) + (((/* implicit */int) max((((/* implicit */signed char) max((arr_19 [i_0]), (var_11)))), ((signed char)-4))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((unsigned short) var_16);
}
