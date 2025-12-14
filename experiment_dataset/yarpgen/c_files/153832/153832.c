/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_14 = (((max(var_12, 4241807818330263849))) ? (max(323249768, var_13)) : ((((max(var_6, var_8))) ? var_0 : (((arr_2 [i_0]) ? var_13 : 323249777)))));
            var_15 = (((((-4687 ? 20048 : 323249793))) ? (max((arr_3 [i_0] [i_1 + 1] [1]), var_0)) : ((((max(-16, 0))) ? (arr_5 [i_0 - 2] [i_0 - 2]) : 119983827))));
            var_16 = (max(3436254922, 858712373));
            arr_6 [i_0] = ((((min((max(323249787, 174)), 4174983489))) ? (((arr_3 [i_0] [15] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : 4294967282)) : (((arr_3 [i_0] [i_0 - 1] [i_1]) ? (((min(var_0, (arr_5 [i_0] [8]))))) : 119983817))));
            arr_7 [i_0] = (max(((((arr_2 [i_0]) ? var_0 : -51))), ((var_1 ? (arr_2 [i_0]) : var_11))));
        }
        var_17 = (((((3971717519 ? 471 : 1073740800))) ? ((1 ? var_8 : (min(var_4, var_10)))) : ((min(((min(-20050, -649635935))), ((18446744072635810796 ? 827331358 : 649635934)))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_18 = min(((min(50, var_0))), (min((((13665 ? 1 : 1))), (((arr_11 [i_2] [i_3]) ? 51 : (arr_9 [i_3]))))));
                    arr_16 [i_2] [i_3] [i_2] = (max(35, (min(81, 7860106090100688818))));
                    arr_17 [i_2] [i_3] = ((((max(((3971717514 ? var_3 : var_2)), (arr_3 [i_3] [i_3] [i_3])))) ? ((1 ? 7860106090100688800 : 1)) : (((1 ? ((min(var_6, var_6))) : (arr_11 [i_2] [i_3]))))));
                }
            }
        }
        arr_18 [4] = ((((((arr_1 [i_2]) ? -649635950 : var_5))) ? (((arr_13 [i_2] [i_2] [i_2]) ? var_9 : -739855972)) : (max(323249755, (arr_1 [i_2])))));
    }
    var_19 = (min(var_10, var_10));
    var_20 = (8456091417662352842 ? 24658 : 2306935836);
    #pragma endscop
}
