/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183904
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
    var_13 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 = ((signed char) min((arr_7 [i_0 + 1] [i_1] [i_1]), (arr_7 [i_0 + 1] [i_2] [i_2 - 3])));
                    arr_8 [i_0] [i_2] [i_0 - 1] [i_0] = ((/* implicit */signed char) var_4);
                    var_15 = ((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)0)))) + (((((/* implicit */int) arr_1 [(unsigned char)4] [(unsigned char)4])) - (((/* implicit */int) (_Bool)1)))))) - (((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) max((arr_7 [i_2 - 2] [(signed char)9] [9]), (((/* implicit */short) var_12)))))))));
                    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2 - 3] [i_2 - 2] [(short)8] [i_0 - 1])))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2 + 1] = ((/* implicit */short) max(((+(((((/* implicit */_Bool) var_11)) ? (8989607068696576ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */unsigned long long int) ((long long int) var_1)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) min((var_12), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (var_3)))))))));
    var_18 = ((/* implicit */short) var_5);
}
