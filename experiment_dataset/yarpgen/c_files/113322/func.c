/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113322
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
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(_Bool)1] [(unsigned short)10] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)25801)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((int) var_7))) : (((arr_3 [i_0] [i_1]) ^ (arr_3 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_3] [i_0] [i_3 + 2] = ((((((/* implicit */_Bool) -7905166943461696389LL)) && ((_Bool)1))) || ((_Bool)1));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */unsigned long long int) arr_1 [i_2])) + (((unsigned long long int) arr_8 [(_Bool)1])))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */short) max((((((/* implicit */long long int) ((var_8) + (((/* implicit */int) (unsigned short)52011))))) / (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_5)))))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+(min((((/* implicit */int) var_1)), (arr_1 [i_1]))))))));
                arr_12 [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((signed char) (_Bool)1)))));
    var_19 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) var_0)))));
    var_20 = ((/* implicit */unsigned long long int) var_9);
}
