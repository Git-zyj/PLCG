/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147325
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [5U] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (unsigned short)57358));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (var_8)));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) var_4))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) (unsigned short)57360);
                var_13 += ((/* implicit */unsigned char) (((~(max((((/* implicit */unsigned long long int) var_5)), (arr_8 [(signed char)8] [(signed char)0]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57360)))));
                arr_13 [i_2] [i_2] = ((/* implicit */int) ((unsigned char) (_Bool)1));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)46939))));
}
