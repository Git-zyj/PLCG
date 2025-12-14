/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127838
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
    var_15 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_3)), (var_11))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (unsigned short)36787))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_2)) & (var_14)))) : (((var_11) + (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) var_13);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)82)) << (((/* implicit */int) var_6))))));
                            arr_14 [13LL] [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)174))));
                            arr_15 [(unsigned short)4] = ((/* implicit */unsigned short) max((var_5), (((/* implicit */unsigned long long int) (-(-6873154289135571696LL))))));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned char)70)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (unsigned char)185)))))))))))));
                            arr_16 [i_0] [i_1] [i_1] [(signed char)6] [i_2] [i_3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)82)) << (((((/* implicit */int) (signed char)124)) - (108)))))))) ? (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (unsigned char)70)))) : (((/* implicit */int) (signed char)-125)))) : (((/* implicit */int) var_0))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((((((/* implicit */int) var_3)) / (((/* implicit */int) var_8)))), (((/* implicit */int) var_0))));
}
