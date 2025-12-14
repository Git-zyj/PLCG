/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154536
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
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) 1631355235))));
    var_19 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_17))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) 2019665179U)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (arr_0 [i_0 - 1] [i_0 + 2]) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) ((long long int) arr_3 [i_0]))) ? (((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((-1896585543) >= (((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */int) (+(min((((unsigned long long int) 3642570854U)), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_3 [9ULL])))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 + 1]);
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            var_22 -= ((/* implicit */int) arr_6 [i_1]);
            var_23 = ((/* implicit */unsigned short) (~(((((((/* implicit */long long int) 1896585542)) + (arr_7 [i_1] [i_2] [i_2]))) + (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_1])))))))));
        }
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) | (arr_5 [i_1])))))) : ((+((~(arr_7 [i_1] [i_1] [i_1])))))));
    }
}
