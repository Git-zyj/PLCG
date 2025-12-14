/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132677
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) max(((-(((/* implicit */int) min((arr_4 [i_1] [i_0]), ((_Bool)1)))))), ((-(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((((/* implicit */int) arr_1 [i_1])), ((+((-(((/* implicit */int) (_Bool)1)))))))))));
                arr_7 [i_1] [i_1] [(unsigned short)18] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) max((((/* implicit */signed char) arr_5 [(signed char)22] [(signed char)22])), (arr_1 [i_0]))))))));
                var_17 = ((/* implicit */long long int) max((var_17), ((-(((((/* implicit */_Bool) arr_0 [i_1] [17LL])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1)));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_14)))))))));
}
