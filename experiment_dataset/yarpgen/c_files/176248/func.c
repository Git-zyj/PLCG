/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176248
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
    var_18 = ((_Bool) var_14);
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_5))));
    var_20 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0 - 2] [i_0] [i_0 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)75)) >= (((/* implicit */int) var_17))));
                            var_21 = ((/* implicit */unsigned int) (+(((min((((/* implicit */long long int) (signed char)-95)), (9223372036854775807LL))) + (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (4294967295U))))))));
                            arr_10 [i_0] [i_3] = ((/* implicit */_Bool) var_10);
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0] [i_1])) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) 0)))))))) < (min((((/* implicit */unsigned int) arr_1 [i_1])), (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_10)))))));
                var_22 += ((min((((((/* implicit */int) var_4)) < (((/* implicit */int) (signed char)-23)))), ((!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_1])))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (max((arr_5 [i_1] [i_1] [i_0]), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))))))))) : (((/* implicit */long long int) max((179600838), ((~(((/* implicit */int) (short)12056))))))));
            }
        } 
    } 
}
