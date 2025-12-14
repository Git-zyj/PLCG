/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122795
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9098889109990549392LL))));
        var_18 = ((/* implicit */long long int) (~(arr_0 [i_0])));
        arr_4 [i_0] = ((/* implicit */long long int) (-(456625654U)));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_19 = arr_9 [i_0] [i_1] [6LL] [i_3];
                        arr_11 [i_3] [i_2] [i_1] [i_0] = ((3281017373758056694LL) & (-4044403764407514364LL));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned int) -3516639379273413190LL);
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (var_1)));
}
