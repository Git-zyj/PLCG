/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165456
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
    var_13 = ((/* implicit */int) (+(min((((unsigned int) 1909551403U)), (((942656601U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_5);
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (signed char)-127))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */signed char) ((var_9) == (((/* implicit */long long int) ((unsigned int) (signed char)9)))));
                                arr_12 [i_3] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) var_7)) <= (min((((/* implicit */int) var_11)), (33554431)))))), ((+(((/* implicit */int) ((unsigned char) (signed char)0)))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) / (((/* implicit */int) (signed char)9))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
