/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115991
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                var_19 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_1 [i_0 + 1]))) == ((~(((/* implicit */int) (short)-19653))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) <= (var_0)))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_0 [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_1 [i_0 + 1]);
            }
        } 
    } 
    var_21 = var_0;
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (signed char i_3 = 3; i_3 < 9; i_3 += 2) 
        {
            {
                arr_11 [i_3] [i_3] [i_2] = ((/* implicit */signed char) ((unsigned int) (!(((((/* implicit */int) arr_7 [i_2])) == (((/* implicit */int) arr_7 [i_2])))))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_3] [i_5]))));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_4))));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_11))))) / (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_12 [i_2] [i_3 - 3] [i_3 - 3] [i_6])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
