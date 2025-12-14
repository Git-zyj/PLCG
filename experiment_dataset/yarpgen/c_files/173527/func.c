/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173527
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
    var_15 = ((/* implicit */int) ((signed char) (signed char)(-127 - 1)));
    var_16 = ((/* implicit */short) max((((/* implicit */long long int) var_1)), (2982350260294619834LL)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)105)), ((unsigned short)37615)))) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) ((((/* implicit */long long int) var_10)) > (arr_0 [(unsigned short)3])))) ^ (min((((/* implicit */int) var_4)), (var_1)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 7; i_1 += 4) 
    {
        for (int i_2 = 1; i_2 < 8; i_2 += 2) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 2982350260294619834LL)) ? (2982350260294619813LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)81)))))));
                arr_8 [(signed char)2] |= ((/* implicit */int) ((_Bool) (-(max((arr_0 [i_1]), (2982350260294619834LL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_1);
}
