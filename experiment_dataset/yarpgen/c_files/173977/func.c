/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173977
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
    var_11 |= ((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_3), (var_4))))))));
    var_12 = (-(((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_3))))) ? (min((var_8), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) min((min((((((/* implicit */_Bool) var_9)) ? (2341930720774284691LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (-(((/* implicit */int) var_4))))))), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), (var_4))))));
                var_14 = ((((/* implicit */_Bool) min((var_9), (-2341930720774284690LL)))) ? (var_8) : (((long long int) arr_0 [i_0 + 1])));
            }
        } 
    } 
}
