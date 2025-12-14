/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117160
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
    var_20 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned int) (signed char)-92))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned short) (unsigned char)19)));
                var_22 = ((unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))), (arr_0 [(unsigned char)1] [i_0 - 2])));
                var_23 = ((/* implicit */unsigned short) (-(arr_1 [i_0])));
                arr_6 [i_1] = ((signed char) (unsigned char)27);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) ((int) 1257109485));
        arr_9 [(signed char)12] = ((/* implicit */int) ((4294967295U) ^ (var_19)));
        arr_10 [i_2] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_5 [i_2])) | (((/* implicit */int) arr_5 [i_2])))));
        var_25 = min((((((/* implicit */int) min(((signed char)113), (var_1)))) + (((/* implicit */int) ((signed char) var_9))))), (((/* implicit */int) (signed char)85)));
    }
}
