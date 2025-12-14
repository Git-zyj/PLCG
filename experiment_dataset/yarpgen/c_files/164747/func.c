/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164747
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
    for (long long int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741696)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))), ((~(arr_6 [i_2] [i_1] [i_0])))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_0 - 2])) : (((((/* implicit */int) (signed char)82)) ^ (((/* implicit */int) arr_5 [i_4] [i_3 - 1])))))) : ((-(((/* implicit */int) (short)-1590))))))));
                                arr_11 [i_1] [i_1] [i_2 + 1] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2] [i_1]))))));
                                var_14 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) max((var_11), ((signed char)-63))))), (min((((/* implicit */unsigned long long int) var_12)), (arr_1 [i_0] [i_0 + 1])))));
                                arr_12 [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)59)) || (((/* implicit */_Bool) max(((signed char)72), ((signed char)-81))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */_Bool) ((signed char) (signed char)(-127 - 1)));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (long long int i_6 = 3; i_6 < 22; i_6 += 3) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_5] [(signed char)4] |= ((/* implicit */signed char) arr_14 [i_0] [i_1] [i_5] [i_5]);
                            var_16 &= max((var_11), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-21152))))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_6)))))));
                            arr_22 [i_0 - 3] [i_0 - 3] [i_5] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)27221);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_6))));
}
