/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115321
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) 9259800386562091977ULL);
                    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) 9186943687147459644ULL))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) ((signed char) arr_0 [i_0])))))) : (((9186943687147459650ULL) * (9259800386562091978ULL)))));
                    arr_7 [3ULL] [8LL] [8LL] = ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
    {
        arr_10 [i_3] = ((/* implicit */short) ((_Bool) min((min((((/* implicit */unsigned long long int) var_6)), (9259800386562091993ULL))), (min((((/* implicit */unsigned long long int) -1098299503)), (9259800386562091977ULL))))));
        var_15 *= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (min((((((/* implicit */int) (unsigned char)214)) >> (((var_3) + (8823297326992372394LL))))), (((/* implicit */int) arr_9 [(signed char)10]))))));
        var_16 = ((/* implicit */signed char) 2147483647);
    }
}
