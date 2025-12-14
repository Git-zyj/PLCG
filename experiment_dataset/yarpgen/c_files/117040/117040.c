/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((!25520) ? var_6 : (((((3145544832 ? var_0 : 0))) ? ((-7605079388632560738 ? 7605079388632560738 : 7605079388632560738)) : (max(-281, -7605079388632560739))))));
    var_15 = (((!-28568) ? (((!(((2102458729 ? 17354563310314265608 : 259866158)))))) : (min(((904681508 ? var_1 : 1536062399)), var_3))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        arr_3 [i_0] = (((!-906862931) != (arr_2 [i_0])));
        arr_4 [i_0] = ((arr_2 [i_0]) < (~-26664));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = ((~(((-974095496 + (arr_5 [i_1]))))));
        var_18 *= (min(60299, 1));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_3] [i_4] = (((+-7605079388632560747) ? (((0 ? ((42 ? (arr_5 [i_4]) : (arr_8 [i_2] [i_2]))) : (~77)))) : (((arr_8 [i_2] [i_2]) ? (((arr_16 [i_2] [5] [10] [i_2]) & (arr_13 [i_2] [i_3]))) : ((((arr_12 [i_4] [i_2]) ? -24881 : -449056701)))))));
                    arr_18 [i_2] [i_2] = (((max((!11), (!13405))) ? (((arr_6 [i_2]) ? ((((arr_11 [i_2]) <= 2097120))) : ((((arr_15 [i_4] [i_4] [i_2] [i_2]) && (arr_16 [i_2] [i_2] [i_4] [i_2])))))) : ((max((arr_13 [i_2] [i_2]), (arr_6 [i_2]))))));
                    arr_19 [i_2] [i_2] [i_2] [i_4] = (((((arr_16 [i_2] [i_3] [i_3] [i_2]) ? ((((arr_15 [i_3] [i_3] [3] [i_4]) ? -49034966 : -7237))) : (min(-7605079388632560740, 1))))) ? (((~(arr_6 [i_2])))) : (arr_12 [i_2] [i_4]));
                }
            }
        }
        arr_20 [i_2] = (min(17354563310314265608, ((max(((!(arr_8 [i_2] [i_2]))), ((!(arr_10 [i_2] [i_2] [i_2]))))))));
        arr_21 [10] &= (arr_6 [0]);
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_19 = (min(((max((arr_26 [i_6]), 10993))), (min((min(2192508566, -7237)), (-736463032019781414 || -906862937)))));
                var_20 = (!((177 && (~1))));
                var_21 = (!38);
            }
        }
    }
    #pragma endscop
}
