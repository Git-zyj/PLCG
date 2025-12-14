/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13612
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
    var_17 = (+(var_16));
    var_18 = (+(((((/* implicit */_Bool) -6110538189701913793LL)) ? ((-9223372036854775807LL - 1LL)) : (-7488041059233299635LL))));
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) min((arr_2 [i_0 + 1]), (arr_1 [i_0 - 2] [i_0 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_2) : (arr_2 [i_0])))) ? (arr_2 [i_0 - 3]) : (-9LL))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 8436915544140418622LL)))))))));
        var_19 = ((long long int) 6559323242576438291LL);
        arr_5 [i_0] [i_0] = max((-4348212654819178834LL), (9223372036854775801LL));
    }
    for (long long int i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        var_20 = (~(((((arr_6 [i_1 + 2]) + (9223372036854775807LL))) >> (((arr_3 [i_1 - 3]) + (8782867136670929368LL))))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((long long int) var_14)) : (max((arr_6 [i_1]), (-2799459493778763168LL))))))));
    }
    for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        arr_11 [i_2] = var_13;
        arr_12 [i_2] = var_10;
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                {
                    var_22 = arr_15 [i_4 + 1] [i_2];
                    var_23 |= max((((long long int) (-9223372036854775807LL - 1LL))), (((((/* implicit */_Bool) 8413541874634188357LL)) ? (831619881121883325LL) : (var_4))));
                    var_24 = var_7;
                }
            } 
        } 
        var_25 = arr_7 [i_2 - 2];
    }
}
