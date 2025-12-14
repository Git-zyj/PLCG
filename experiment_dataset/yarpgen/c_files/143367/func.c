/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143367
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((short) ((arr_2 [i_0] [i_0] [i_1]) <= (arr_2 [i_0] [i_1] [i_1]))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3977909644U)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) ((_Bool) (~(arr_3 [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((arr_10 [5U]), (((/* implicit */unsigned long long int) var_7))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_2] [i_3]))) ? (((/* implicit */unsigned long long int) 751397082)) : (((((/* implicit */_Bool) arr_9 [i_4] [i_2] [i_4] [i_4])) ? (var_12) : (arr_9 [i_4] [i_2] [i_2] [i_2]))))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_7 [i_4] [4ULL]))));
                    var_20 = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((var_12) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) -133536415))) ? ((+(-8017162597585058853LL))) : (((/* implicit */long long int) ((int) var_8))))))));
}
