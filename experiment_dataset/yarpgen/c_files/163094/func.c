/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163094
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
    var_17 -= max((((/* implicit */int) var_15)), (1204586702));
    var_18 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_5)), (var_10))))) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((/* implicit */unsigned int) var_0)), (var_3))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_20 |= min((((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_9)))))), (((/* implicit */int) min((arr_1 [i_0 - 1]), (((/* implicit */unsigned char) var_2))))));
        var_21 = ((_Bool) var_5);
        var_22 = ((/* implicit */_Bool) var_11);
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                {
                    var_23 += ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 + 1]))) == (((/* implicit */unsigned int) min((((((/* implicit */_Bool) -3172150071445713002LL)) ? (((/* implicit */int) var_16)) : (arr_10 [i_1] [i_1] [i_3] [i_1]))), (var_14))))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (+(((/* implicit */int) min((((_Bool) var_9)), (var_7)))))))));
                }
            } 
        } 
    } 
}
