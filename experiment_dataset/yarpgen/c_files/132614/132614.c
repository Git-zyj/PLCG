/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_5 || ((max(1, (min(1, -112)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 ^= 1;
        var_17 &= ((-77 ? var_9 : ((((max((arr_1 [i_0]), -11958))) ? ((~(arr_0 [i_0]))) : ((-112 ? (arr_0 [i_0]) : (arr_0 [9])))))));
        var_18 = (max((2 & -24758), (arr_1 [i_0])));
        var_19 = 13852257420539254543;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_20 = (((((-11958 && (arr_4 [i_1])))) >= ((((-29196 < (arr_4 [i_1])))))));
        arr_6 [i_1] = (min(((((((arr_5 [i_1]) ? (arr_4 [i_1]) : 31834))) ? (arr_4 [5]) : ((min(26787, -15986))))), 112));
        var_21 = ((2500505020923021263 ? -14003 : ((min((2969959250 >= var_14), (min(1, var_12)))))));
        var_22 = ((1 | 1) <= (((arr_4 [i_1 - 1]) | (~24758))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_23 = ((-(var_3 >> 3)));
                arr_11 [i_3] [i_2] [i_2] |= (((min(((237 ? -19 : (arr_5 [i_2]))), ((-14013 ? -14003 : 145)))) >= (((arr_5 [i_3]) ^ (arr_5 [i_2])))));
                arr_12 [i_3] [i_3] = (arr_0 [i_3]);
                var_24 = (min(var_24, 8806));
            }
        }
    }
    #pragma endscop
}
