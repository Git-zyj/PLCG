/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183964
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)114)) + (((/* implicit */int) (signed char)-115))))) : (((unsigned long long int) 8654065342559912376LL)))) == (((/* implicit */unsigned long long int) -307219572)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_20 = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) arr_4 [i_1] [i_1])))));
                    arr_9 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) > (3698173500245381817LL)));
                }
                var_21 ^= ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-106))))) == ((-(var_3)))))), ((-(((/* implicit */int) ((_Bool) arr_0 [7ULL])))))));
            }
        } 
    } 
}
