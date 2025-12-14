/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171937
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
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)16))))), (var_1))))));
    var_20 = (unsigned char)0;
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (signed char)-8))));
        arr_3 [i_0] [i_0] = (!((_Bool)0));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (signed char)70);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_11 [i_2] = (!(((/* implicit */_Bool) (signed char)-75)));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)57623)) < (((/* implicit */int) (unsigned char)196))));
        arr_13 [i_2] [(unsigned char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3176372070U)) && ((_Bool)1)));
    }
    var_22 = ((/* implicit */unsigned short) 2031297283U);
}
