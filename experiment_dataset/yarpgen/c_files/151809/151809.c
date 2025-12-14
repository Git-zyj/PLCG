/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 |= (max(2591957281, 215));
                    arr_7 [i_0] [i_2] [i_2] = (max(((((min(var_1, var_15))) ? (((63 ? var_5 : var_14))) : (min(var_15, var_2)))), ((((max(9174304860541869690, 5026399142210157668))) ? (max(10165, -842035772308570774)) : (((3650397926351685727 ? 986962700 : 117)))))));
                    arr_8 [i_2] [i_1] [i_1] = -23;
                    var_18 = var_12;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                {
                    arr_17 [i_5] = (~3650397926351685727);
                    arr_18 [i_3] [i_4] [i_5] = (max(((max(1, 6428458095362003791))), ((((var_16 ? 18130273191972702863 : var_13)) >> (var_16 + 93)))));
                    var_19 -= ((var_1 ? ((5413792386115404497 ? (~0) : (3650397926351685727 | 28672))) : (max(0, 0))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            {
                var_20 = (min(var_20, ((min((3650397926351685727 & 6254880217643443310), (((max(var_12, 58)))))))));
                var_21 = (max((max(((max(var_0, 7811253617305390271))), 316470881736848753)), ((max(1, ((7831396779273715776 ? 3376113700657608755 : 28679)))))));
                var_22 = ((1 ? 1546465261 : 123));

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_23 -= var_14;
                        var_24 -= var_1;
                    }
                    var_25 = (154831475 || 133);
                    var_26 |= (((max(var_4, 1142793355438719449)) == 91));
                }
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    var_27 = (((3965884835536744927 ? (~164) : (max(var_0, var_11)))));
                    arr_31 [i_6] [i_7] [i_7] [i_7] = ((var_7 ? (max((max(0, 489879002428547617)), var_11)) : 141));

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_36 [i_6] [i_6] [i_6] [i_10] [i_6] = (((((123 ? (var_13 + 98) : var_11))) ? (80 ^ 28679) : (max(22127, (max(123, var_10))))));
                        arr_37 [i_6] [i_7] [i_11] [i_7] = (~7137999420479654880);
                    }
                }
            }
        }
    }
    var_28 = (((((4198 ? var_7 : var_9))) ? ((max(((min(var_11, 126))), (max(var_13, -4199))))) : 83));
    #pragma endscop
}
