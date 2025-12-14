/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159765
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
    var_14 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [4LL] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 - 1]))))), (min((676520696532612560ULL), (((/* implicit */unsigned long long int) -8510154371022834432LL))))));
                arr_6 [14LL] [14LL] = ((/* implicit */long long int) ((((unsigned long long int) arr_1 [i_0] [i_0])) <= (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_10)))))));
                arr_7 [(unsigned char)18] [(unsigned char)4] [(unsigned char)4] = ((unsigned short) 10ULL);
                arr_8 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 1]))))))));
            }
        } 
    } 
}
