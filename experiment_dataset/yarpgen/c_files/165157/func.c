/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165157
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
    var_14 *= ((/* implicit */unsigned char) (~((~(((var_10) ^ (((/* implicit */unsigned int) var_2))))))));
    var_15 = ((/* implicit */short) (+(8589672448ULL)));
    var_16 = ((long long int) (!(((/* implicit */_Bool) max((486835364U), (((/* implicit */unsigned int) (unsigned char)0)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))) - (var_5))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1 + 1] [i_1 + 1] [i_0] = ((/* implicit */_Bool) var_12);
                    var_17 = ((/* implicit */signed char) (!((!((_Bool)1)))));
                    arr_10 [i_0] [i_1 + 1] [14] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])) : (var_6))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 1] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 2351885888U)))))) : (-1352091189)));
                    var_18 = arr_4 [i_2] [i_1 + 1] [i_1 + 1];
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) - (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((~(var_10))) : (((/* implicit */unsigned int) var_2))))));
    }
    var_20 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))) - (var_13));
}
