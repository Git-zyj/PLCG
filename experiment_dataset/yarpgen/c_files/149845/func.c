/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149845
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
    var_19 -= ((/* implicit */int) var_13);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_5 [i_0] [0ULL])) || (((/* implicit */_Bool) 37070963164509312ULL))))))));
                    arr_10 [i_2] [(unsigned char)3] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(-2881719369831067206LL)))), (arr_6 [i_2] [i_0] [i_0])))) ? (((long long int) arr_1 [i_1])) : (((/* implicit */long long int) max(((~(arr_8 [i_0] [i_0] [i_1] [i_2]))), (((((/* implicit */int) arr_0 [i_0] [i_0])) << (((arr_8 [(_Bool)1] [i_1] [i_1] [i_2]) - (1613171425))))))))));
                    arr_11 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) (+(((((/* implicit */int) arr_4 [i_0])) & (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))) - ((~(3460673825346599370LL)))));
                    var_21 = ((/* implicit */unsigned short) var_11);
                }
            } 
        } 
    } 
}
