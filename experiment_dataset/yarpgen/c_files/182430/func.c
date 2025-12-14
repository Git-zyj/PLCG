/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182430
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) >= ((+(((((/* implicit */int) arr_2 [i_1] [i_1] [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) (short)0))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((((((/* implicit */int) (signed char)-17)) ^ (((/* implicit */int) (signed char)(-127 - 1))))), ((+((+(((/* implicit */int) arr_2 [i_3] [i_3] [i_2]))))))));
                                arr_13 [(_Bool)1] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned char)5] [i_4 + 1] [i_0] [i_2] [i_4]))) + ((+(((arr_7 [i_0] [i_1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
                                arr_14 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) max((7174645964687172518LL), (6640793051037549694LL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (~((-(((((/* implicit */long long int) ((/* implicit */int) (signed char)6))) ^ (9223372036854775807LL)))))));
}
