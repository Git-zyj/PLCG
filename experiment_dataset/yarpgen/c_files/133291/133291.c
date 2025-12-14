/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        arr_2 [i_0] = (((1 % var_0) ^ ((((max(4, 32746))) ? 1 : ((min(0, (arr_1 [i_0 + 1]))))))));
        var_16 = (min(((min((arr_1 [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 + 1])))), ((-4998909854997324074 ? (max((arr_0 [6] [i_0]), var_3)) : (248 <= 1)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (max(var_17, (((((((~(arr_5 [i_1]))))) > ((1050918562577385607 ? 1 : -48)))))));
        arr_7 [i_1] [i_1] = (((((3938577683094110171 ? -1050918562577385602 : (arr_4 [i_1])))) && ((((-1050918562577385602 && 40228) ? (arr_4 [15]) : ((var_11 ? 55 : var_7)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_18 -= ((!(((1 ? ((min((arr_6 [i_2]), var_11))) : ((-1024717186 ? (arr_4 [i_1]) : 11366533637650959996)))))));
                    var_19 = ((((max(0, (((arr_8 [i_2]) ? 18446744073709551611 : 13239))))) ? (((!((((arr_6 [i_1]) ? var_4 : (arr_6 [i_2]))))))) : ((((~7618) == ((1 ? 99 : 102)))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_20 = (arr_5 [i_4]);
        var_21 = (min(var_21, (((32752 / ((((((arr_9 [i_4] [i_4]) ? (arr_0 [i_4] [i_4]) : var_13)) <= (arr_5 [i_4])))))))));
    }
    var_22 = (!156);
    var_23 -= ((((max((1 | var_4), ((min(255, 247)))))) ? ((-65 ? (~250) : -18506)) : -1));
    #pragma endscop
}
