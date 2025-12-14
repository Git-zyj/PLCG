/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164953
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
    var_18 = ((/* implicit */long long int) (short)32760);
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 0U)))))) % (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_2 + 1] [i_2 + 1])) ? (var_1) : (arr_3 [i_2 + 1] [i_2 - 1] [i_2 + 1])))) ? ((~(arr_3 [(signed char)1] [i_2 - 1] [i_2 + 1]))) : (min((-8099243816131815429LL), (8099243816131815432LL)))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (8099243816131815435LL))))) && (((/* implicit */_Bool) (~(8099243816131815432LL)))))))));
                    var_21 = ((/* implicit */signed char) 3042517201453536587LL);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) min((((long long int) min((var_13), (arr_8 [(short)3])))), (((((/* implicit */_Bool) var_3)) ? (8099243816131815432LL) : (max((((/* implicit */long long int) var_12)), (1749755584267598273LL)))))));
    }
}
