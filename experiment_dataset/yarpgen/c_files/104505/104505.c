/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [0] [0] |= (min(var_5, ((~(((arr_1 [8]) ? var_6 : 244))))));
                arr_7 [i_0] = ((((((arr_0 [i_0]) ? var_2 : var_8))) && -6406387387408176791));
            }
        }
    }
    var_12 ^= (min((((12 || 5475390305035079362) ? ((min(12, var_6))) : var_8)), (((11 || (3407734235417295890 + 1))))));
    #pragma endscop
}
