/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158573
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
    var_11 = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) (~(var_10)));
                arr_7 [i_0] [i_0] = arr_5 [(signed char)9];
                arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) << (((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9ULL)) ? (-88064564) : (((/* implicit */int) (signed char)-94))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-58))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) ^ (var_0)))))));
                arr_9 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)-6)), (((((((/* implicit */int) (signed char)-24)) + (2147483647))) >> (((((/* implicit */int) (signed char)-6)) + (32)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_10);
}
