/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101316
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
    var_16 = ((/* implicit */short) var_15);
    var_17 = (+(((/* implicit */int) var_9)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_0 [5LL]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (arr_5 [i_0]) : ((-(arr_5 [i_0]))))))));
                }
            } 
        } 
        arr_8 [17] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((arr_5 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (min((((/* implicit */unsigned int) (unsigned short)0)), (arr_1 [i_0])))))));
        var_20 = ((/* implicit */unsigned char) 66584576);
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_1 [(signed char)23])))) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)62)))))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_11 [(unsigned char)22]);
        arr_15 [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_3]))))), (arr_11 [i_3])));
        arr_16 [i_3] = ((/* implicit */unsigned int) var_13);
    }
    var_21 = min((var_15), (((/* implicit */int) var_11)));
}
