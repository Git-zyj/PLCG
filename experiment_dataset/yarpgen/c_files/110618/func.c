/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110618
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) min((var_0), ((!(((/* implicit */_Bool) var_3))))))), (((((/* implicit */int) (_Bool)1)) >> (min((4294967295U), (((/* implicit */unsigned int) var_13))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3017)))))) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0])) / (((((/* implicit */_Bool) 576458553280167936LL)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) arr_5 [i_1 - 1])))))))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) arr_5 [i_3])))))) < (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4294967295U))) + (arr_3 [(unsigned char)5] [i_0 - 1]))))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)192);
                    }
                    var_19 = ((_Bool) (~(((/* implicit */int) ((signed char) var_10)))));
                    var_20 -= ((/* implicit */_Bool) max((max((var_4), ((unsigned short)49912))), (((unsigned short) var_15))));
                }
            } 
        } 
    } 
}
