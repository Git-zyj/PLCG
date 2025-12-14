/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((max(62, 44))) >= 127)) ? ((-62 ? ((62 ? 34 : var_4)) : -67)) : ((var_4 - ((var_14 >> (var_13 + 1806693127)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_0] [i_1] = var_5;
                    arr_7 [i_0] [2] [i_1] [i_1] = arr_5 [i_2] [i_2] [i_2];
                    var_16 = (max(var_16, -2975159205));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (min((((arr_4 [i_0] [i_2]) * 241)), (min(32767, -2147483640))));
                }
            }
        }
    }
    var_17 = (max(var_3, var_11));

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_17 [i_3] [i_3] [i_3] = 268948099595494448;
                var_18 = 9552488869754823674;
            }
            arr_18 [11] [i_3] [11] = ((((((max((arr_2 [i_3] [i_4] [i_4]), 1150669704793161728)) % (-58 - 67)))) ? (((arr_10 [i_3]) >> (((arr_10 [i_4]) - 1067685796998699341)))) : (arr_16 [i_3] [i_4] [i_3])));
            arr_19 [i_3] [11] [11] = (arr_15 [i_3] [i_3] [i_3] [0]);
        }
        var_19 = (max(var_19, ((((((arr_15 [9] [i_3] [i_3] [i_3]) | (-7768002887115081257 > 5))) % (((min(var_2, 1788447834)))))))));
    }
    #pragma endscop
}
