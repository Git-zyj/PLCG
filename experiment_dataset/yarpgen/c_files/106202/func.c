/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106202
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_14 = ((signed char) max((((/* implicit */signed char) var_11)), (arr_3 [i_2])));
                            arr_9 [9U] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (+(239926302)));
                            arr_10 [i_3] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 1847286115U)) : (3063599731362983996LL))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1] [i_2] [i_2])))) * (min((((/* implicit */long long int) (unsigned char)255)), (arr_1 [(signed char)0])))))));
                            var_15 -= ((/* implicit */long long int) var_4);
                        }
                    } 
                } 
                var_16 |= ((/* implicit */signed char) ((((/* implicit */int) ((((var_11) ? (arr_1 [8ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1]))))) <= (((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) / (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_5 [i_1] [i_0]))))));
                arr_11 [i_1] [i_0] &= ((/* implicit */long long int) (+((~(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_17 = 11232301517889467079ULL;
    var_18 = ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) 378086028U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))))), (((/* implicit */int) var_12))));
}
