/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133726
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((var_6) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) >= ((-(((/* implicit */int) var_10)))))))));
    var_18 |= ((/* implicit */_Bool) (short)32767);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_0 [i_0])) + (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((var_6) ? (((/* implicit */unsigned long long int) arr_0 [(_Bool)1])) : (2351320581183473935ULL)))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) % (min((((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (6626810462510246260LL))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17304576582567256548ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [(short)1]))));
                    var_21 = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
        arr_8 [(_Bool)1] [i_0] &= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_7))))));
    }
}
