/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148619
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [(_Bool)1]))))) ? (var_6) : (((/* implicit */unsigned int) (-(arr_9 [(unsigned short)16] [i_1 - 2] [i_2] [i_2]))))))), (arr_2 [i_0])));
                    arr_10 [i_1] = ((max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */int) (unsigned short)13332)) : (((/* implicit */int) (_Bool)0)))))) % (arr_4 [i_0] [i_1] [i_0]));
                    arr_11 [i_0] [i_0] [i_1] [19LL] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_5 [i_0] [i_1 + 3] [i_2]))))));
                    var_16 = ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1384074660U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)-127)) / (8388608))), ((((_Bool)1) ? (8388608) : (((/* implicit */int) (_Bool)0))))))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25170)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (4411991117721947277ULL)))))));
}
