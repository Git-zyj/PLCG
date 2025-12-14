/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124276
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_0))));
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) % (((/* implicit */int) var_14))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            arr_4 [(unsigned char)10] [5] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_0] [i_0 - 2])) / (4294967285U)));
            arr_5 [i_1] = ((arr_3 [(signed char)6] [i_1 + 1] [i_1 + 1]) / (((/* implicit */int) var_13)));
        }
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-12)) || (((/* implicit */_Bool) (signed char)12))));
    }
}
