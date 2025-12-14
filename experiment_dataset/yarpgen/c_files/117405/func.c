/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117405
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
    var_18 = ((/* implicit */_Bool) ((short) (~(max((var_3), (((/* implicit */int) var_14)))))));
    var_19 = ((/* implicit */unsigned int) max((((((var_6) << (((((/* implicit */int) var_4)) - (59))))) * (((/* implicit */long long int) ((((/* implicit */int) var_14)) / (var_3)))))), (((/* implicit */long long int) min((((/* implicit */int) ((_Bool) (unsigned char)247))), (max((var_12), (((/* implicit */int) var_1)))))))));
    var_20 &= ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_8))) ? (((((/* implicit */_Bool) var_2)) ? (arr_2 [(unsigned char)9]) : (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_0])))))))) ? (max((((/* implicit */int) ((189706299628230585LL) < (-189706299628230586LL)))), (max((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */int) arr_1 [i_0])))))) : (arr_3 [i_0] [i_1] [i_2]));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((min((max((arr_6 [i_0]), (arr_3 [i_2] [i_2] [i_2]))), (max((arr_3 [i_1] [i_1] [i_1]), (1265105121))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */int) var_2)) << (((var_3) + (1254862734))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 189706299628230585LL))))))))))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((/* implicit */int) (unsigned char)1)), (min((((((/* implicit */int) (unsigned short)65526)) - (1265105121))), (((/* implicit */int) (unsigned short)49051)))))))));
                }
            } 
        } 
    } 
}
