/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155717
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))));
                arr_4 [i_1] [(unsigned short)13] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -4762014262749369154LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (7272233638834054134LL))) > (4762014262749369146LL))) ? (max((min((((/* implicit */long long int) (unsigned short)261)), (4762014262749369141LL))), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 2633634904U))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0] [i_1])), (var_9))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((7272233638834054103LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
