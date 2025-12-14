/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122584
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
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) - (arr_3 [i_0]))), (((/* implicit */unsigned int) max(((signed char)10), ((signed char)-17)))))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17)))));
                            arr_8 [i_0] [i_0 + 3] [i_2] [i_0 + 3] [i_0 + 2] = ((/* implicit */long long int) (signed char)-91);
                            arr_9 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((3181507423453639892ULL), (((/* implicit */unsigned long long int) max((arr_7 [i_2] [i_2 + 1] [i_2 + 2] [i_2]), (((/* implicit */unsigned int) (_Bool)0)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_1 [i_0 + 3])) != (max((max((((/* implicit */unsigned long long int) (_Bool)1)), (3181507423453639892ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 5333783620684486644ULL)))) & (max((((/* implicit */unsigned int) (signed char)-6)), (1179928258U)))));
            }
        } 
    } 
    var_21 = min((((/* implicit */unsigned long long int) -4392821854751951361LL)), (max((((/* implicit */unsigned long long int) ((unsigned int) -8612934339153590392LL))), (max((((/* implicit */unsigned long long int) var_3)), (6767028002161622806ULL))))));
    var_22 = ((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-10)));
    var_23 = ((/* implicit */unsigned short) var_18);
    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) max((max((((/* implicit */unsigned char) (signed char)10)), ((unsigned char)31))), (((/* implicit */unsigned char) (_Bool)0))))) << (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-6)) || ((_Bool)1))))));
}
