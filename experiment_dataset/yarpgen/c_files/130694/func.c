/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130694
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
    var_13 |= var_9;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_14 += ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_5 [i_2])))), ((-(((/* implicit */int) (short)-4))))));
                    arr_7 [9ULL] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 402653184U)) ? (-6860185608003396781LL) : (6683065151428888962LL)))) ? (((/* implicit */long long int) min((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */int) (unsigned short)52210)) << (((-6683065151428888957LL) + (6683065151428888967LL)))))))) : (min((var_5), (((/* implicit */long long int) arr_2 [4ULL] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
}
