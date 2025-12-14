/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180002
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 2])) >= (((((((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 3])) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 3])) + (7454))) - (10)))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_13 [i_2] [i_1] [i_2 - 1] [i_3] = (((~(arr_4 [i_3] [i_3] [i_2 - 2]))) >= (((arr_3 [i_3] [i_3] [i_2 + 4]) ? (arr_4 [i_3] [i_3] [i_2 - 2]) : (arr_4 [i_3] [i_2 - 2] [i_2 + 2]))));
                            arr_14 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) (~(((unsigned int) 4294967295U))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) var_6);
                                arr_24 [i_0] [i_5] [i_5] = ((unsigned long long int) (+(var_11)));
                                arr_25 [i_0] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((long long int) var_8));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_1)));
    var_19 = ((/* implicit */signed char) ((_Bool) var_6));
}
