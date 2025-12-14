/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115787
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
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0 - 2] [i_0] = ((/* implicit */short) (((+((+(9289459320803847290ULL))))) - (((/* implicit */unsigned long long int) -1329055062))));
        var_14 = ((/* implicit */_Bool) (+((~(((/* implicit */int) ((((/* implicit */_Bool) 243738915518694902LL)) || (((/* implicit */_Bool) var_1)))))))));
        var_15 &= ((/* implicit */unsigned int) (+(var_2)));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            {
                arr_9 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_8);
                var_16 = arr_8 [i_1] [i_1];
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_0);
}
