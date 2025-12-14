/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180639
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((8251059390914744932LL), (((/* implicit */long long int) (_Bool)1))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) 4078612660U);
                                var_22 = ((/* implicit */signed char) ((long long int) arr_2 [i_2] [i_4]));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) (unsigned char)8))))) + (((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) <= (arr_11 [i_0] [i_0] [i_0] [4] [i_0]))))));
                arr_16 [(short)3] [i_1] = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((var_11) << (((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (216354636U)))) - (60507LL)))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    arr_25 [i_5] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                    arr_26 [i_5] [i_5 - 2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [9LL]))))) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) var_17))));
                }
            } 
        } 
    } 
}
