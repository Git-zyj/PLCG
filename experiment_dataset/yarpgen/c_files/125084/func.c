/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125084
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
    var_12 = ((/* implicit */signed char) max((max((((((/* implicit */int) var_5)) | (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245))))))), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_3))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) -1502027883);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_14 ^= ((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3] [(signed char)0] [(_Bool)0]);
                                var_15 = ((/* implicit */unsigned int) (-((((~(((/* implicit */int) arr_6 [i_4] [i_4] [i_4])))) & (((/* implicit */int) var_10))))));
                                arr_13 [i_0] [i_3] [i_2] [i_2] [i_3] [i_3] [(short)6] = ((/* implicit */_Bool) (unsigned char)0);
                                var_16 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [14] [i_1] [i_2] [i_1] [i_3] [i_0] [i_3])) / ((-(((/* implicit */int) arr_11 [(signed char)12] [i_1] [(signed char)12] [i_1] [i_1] [i_2] [i_2]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [0LL])) : (((/* implicit */int) (signed char)127)))) < (((/* implicit */int) var_11))));
                }
            } 
        } 
    } 
    var_17 *= ((unsigned short) (unsigned short)25284);
}
