/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_2 > (max(var_0, var_1))))) > var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 += (max(135, ((-(min(34747, (arr_3 [6])))))));
                arr_4 [0] &= (-487899460 > 0);
                var_16 += ((-((min((arr_1 [i_0]), ((((arr_3 [14]) > (arr_3 [4])))))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (((((((max((arr_3 [i_1]), (arr_6 [i_0]))) > (max((arr_6 [i_1]), (arr_3 [i_1]))))))) > (arr_3 [i_1])));
                    arr_8 [i_0] [i_0] [i_0] [i_1] = (((((((min((arr_5 [i_0]), (arr_5 [i_0])))) > ((((arr_2 [i_0] [i_1]) > (arr_2 [i_1] [i_2]))))))) > (arr_1 [i_2])));
                    var_17 = (min((arr_3 [i_1]), ((((min((arr_3 [i_1]), (arr_5 [i_1]))) > ((((!(arr_3 [i_1]))))))))));
                    var_18 = ((!(arr_3 [i_1])));
                }
            }
        }
    }
    var_19 = -var_10;
    #pragma endscop
}
