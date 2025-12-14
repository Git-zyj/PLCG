/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157164
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 637953627U)) ? (10137080909247395990ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_4 [i_0]) : (((/* implicit */long long int) arr_2 [i_0] [i_0])))))));
                var_19 = ((/* implicit */_Bool) var_6);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 |= ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (15518825618694531132ULL) : (((/* implicit */unsigned long long int) arr_2 [(unsigned short)6] [i_3]))))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)31549)) ? (min((((/* implicit */unsigned int) (unsigned short)21595)), (arr_8 [i_1] [i_1]))) : (((/* implicit */unsigned int) 464480171))))));
                                arr_15 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_0] [i_0])), (min((arr_12 [i_1] [i_1] [i_2] [i_3] [i_2 - 1] [i_3]), (((arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]) + (((/* implicit */long long int) var_17))))))));
                                arr_16 [i_0] [i_1] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)95)) > (((/* implicit */int) (unsigned char)71))));
                                var_21 = ((/* implicit */long long int) ((arr_4 [i_2]) > (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) (+(-1896218571)))) : (arr_0 [i_3] [i_0])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_6);
    var_23 = ((/* implicit */unsigned int) var_18);
}
