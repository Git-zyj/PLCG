/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177265
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) arr_2 [i_1]);
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_3] [i_0 + 1] [i_0 + 1] [i_0] [i_0] = min(((-(((/* implicit */int) (signed char)109)))), ((-(((/* implicit */int) (signed char)109)))));
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))));
                                var_22 = max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (unsigned short)45017)) : (((/* implicit */int) (unsigned char)55))))), (((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */long long int) arr_13 [i_3] [i_3] [i_3] [i_3] [i_0])) : ((-(-1LL))))));
                                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [1LL] [i_0] [i_2])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) max((arr_6 [i_0] [i_1] [(signed char)18] [i_3]), ((signed char)109)))))))));
                                arr_17 [i_0] [i_3] [i_0] [(short)0] [i_4 - 1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned short)9103)))))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
