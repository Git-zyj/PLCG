/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119944
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((var_2), (((/* implicit */int) (!(((((/* implicit */_Bool) 15871435335663135955ULL)) && (((/* implicit */_Bool) 2575308738046415661ULL)))))))));
                    arr_11 [i_0] [i_1 - 1] [i_2] [i_2] &= ((/* implicit */short) min(((-(3069201448507964246ULL))), (var_15)));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((((/* implicit */_Bool) ((arr_2 [i_0 - 1] [i_2]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */int) max((var_4), (((/* implicit */short) var_14))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned short) var_7)))));
    var_19 = ((/* implicit */int) var_9);
    var_20 = ((/* implicit */_Bool) 7324103501747284605ULL);
    var_21 += ((/* implicit */unsigned char) var_1);
}
