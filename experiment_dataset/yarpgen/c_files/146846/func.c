/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146846
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 += ((/* implicit */unsigned int) arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1))))))) ? ((-(((((/* implicit */_Bool) var_3)) ? (3190234268U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                                var_18 = ((/* implicit */signed char) var_11);
                                var_19 += ((/* implicit */unsigned int) arr_13 [i_4]);
                                arr_15 [i_0 + 1] [i_0] [i_2] [i_3] [i_1 - 1] = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) (~(((/* implicit */int) var_13))))), (6761138004231601849LL)))));
                                var_20 += ((/* implicit */unsigned int) (+(6761138004231601849LL)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) 0U))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        for (short i_6 = 3; i_6 < 14; i_6 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((long long int) var_12))))) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_8 [i_5] [i_6]), (((/* implicit */unsigned long long int) (unsigned char)255))))))))));
                arr_21 [i_5] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (short)63)))), (((/* implicit */int) arr_14 [i_5] [i_6] [i_6] [i_6] [(unsigned char)19])))))));
                var_23 = ((((/* implicit */long long int) max((((/* implicit */int) (signed char)(-127 - 1))), (253696108)))) % (((((/* implicit */_Bool) (signed char)-99)) ? (((long long int) var_13)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5])) ? (0) : (((/* implicit */int) var_2))))))));
            }
        } 
    } 
    var_24 |= ((/* implicit */signed char) var_15);
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (signed char i_9 = 4; i_9 < 14; i_9 += 4) 
            {
                {
                    arr_29 [i_7] [(_Bool)1] [(signed char)4] [i_9] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8]))) : (arr_8 [i_7] [i_9])))) ? (((/* implicit */int) arr_13 [i_9])) : (((/* implicit */int) ((var_15) && ((_Bool)1))))))));
                    arr_30 [i_7] [i_8] [i_7] = ((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_9]);
                    arr_31 [i_7] [i_7] [i_7] [1U] = ((/* implicit */long long int) ((unsigned long long int) (+(arr_12 [i_7] [i_8] [i_9] [i_8] [20LL] [21U] [2U]))));
                }
            } 
        } 
    } 
}
