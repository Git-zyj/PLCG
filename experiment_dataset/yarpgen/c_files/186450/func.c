/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186450
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) 243406017);
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) ((((arr_2 [i_1] [i_0 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_0 [i_1]))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((arr_0 [i_1]) - (608798491U))))))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_13 [8LL] |= ((((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)41116))))))) < (((((/* implicit */_Bool) arr_12 [i_0] [(signed char)2])) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-65))))) : (min((((/* implicit */long long int) (signed char)127)), (-3618391484747645439LL))))));
                                var_14 &= ((/* implicit */_Bool) (signed char)-71);
                                var_15 = ((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)56)))))) : (-3618391484747645439LL));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) -3618391484747645416LL))), ((-(((/* implicit */int) ((var_2) == (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))))));
                arr_14 [i_1] [i_0] = ((/* implicit */unsigned int) var_1);
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((((/* implicit */long long int) (+((-(1556053413U)))))), (((((((/* implicit */long long int) ((/* implicit */int) var_11))) / (-3618391484747645436LL))) / (var_8)))));
}
