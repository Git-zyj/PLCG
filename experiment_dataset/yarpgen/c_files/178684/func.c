/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178684
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
    var_13 = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned short) (-(var_5))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((~(0LL)))))));
    var_14 = ((/* implicit */short) (unsigned char)189);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [i_1])) / (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((0) * (((/* implicit */int) (unsigned char)200))))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                var_15 = ((/* implicit */long long int) var_3);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) (((_Bool)1) ? ((-(((/* implicit */int) (short)3840)))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)215))))))) : ((((_Bool)1) ? (((arr_0 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))))) : (((/* implicit */unsigned long long int) ((long long int) (signed char)-66))))));
                            arr_16 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) 4294950912U)))) / (min((arr_5 [i_1]), (arr_5 [i_1])))));
                        }
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */unsigned int) arr_2 [i_0]);
            }
        } 
    } 
}
