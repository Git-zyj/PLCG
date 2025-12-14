/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_14 = ((!((((((-690329050 ? 11009045387208277579 : 8721344925043738398))) ? (((arr_7 [i_0] [i_2] [i_3]) ? (arr_8 [i_0] [i_0]) : (arr_7 [i_0] [i_0] [16]))) : (((!(arr_5 [11] [i_1] [i_2] [i_0])))))))));
                        var_15 |= (min((((arr_4 [i_0] [i_0]) ? ((((arr_6 [i_2]) ? (arr_2 [i_1] [1]) : (arr_3 [i_0] [i_1] [i_2])))) : (min((arr_4 [i_2] [i_1]), (arr_3 [13] [i_2] [17]))))), (arr_4 [i_0] [i_2])));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = ((((max((arr_4 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) ? ((((min((arr_10 [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? ((min((arr_8 [i_0] [i_0]), (arr_1 [i_0])))) : (arr_8 [i_0] [i_0]))) : ((min(106, 10673)))));
        arr_12 [i_0] = ((((((arr_7 [i_0] [i_0] [i_0]) % (arr_2 [i_0] [i_0])))) ? (min((min((arr_6 [i_0]), (arr_10 [4] [i_0]))), (arr_10 [i_0] [i_0]))) : ((((!((((arr_1 [i_0]) ? (arr_6 [i_0]) : (arr_5 [i_0] [i_0] [i_0] [1]))))))))));
        arr_13 [i_0] [13] = (max(((max((arr_6 [i_0]), (arr_6 [i_0])))), 8211761340063481455));
    }

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_16 = ((((min((arr_16 [i_4]), (arr_16 [i_4])))) || (((((arr_15 [i_4] [i_4]) ? (arr_14 [i_4]) : (arr_14 [i_4])))))));
        var_17 = (min((((arr_17 [i_4]) ? (arr_15 [i_4] [i_4]) : (arr_17 [i_4]))), ((max((arr_15 [i_4] [i_4]), (arr_17 [i_4]))))));
    }
    #pragma endscop
}
