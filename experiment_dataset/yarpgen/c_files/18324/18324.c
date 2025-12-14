/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((-20478 | ((var_6 << (176947548468439555 - 176947548468439544)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (((((arr_1 [i_0]) - (arr_1 [i_0]))) << (((176947548468439567 < ((((arr_1 [i_0]) % (arr_1 [i_0])))))))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_16 = (arr_3 [i_0] [i_0]);
                var_17 = ((((176947548468439555 / (arr_4 [i_1] [i_1]))) == ((((85 != (arr_3 [i_2] [i_2])))))));
                var_18 ^= (((arr_1 [i_1 + 2]) > (arr_1 [i_1 + 4])));
            }
            arr_7 [i_0] [i_0] |= 0;
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_19 &= ((-562343320136826579 >= ((((arr_6 [i_0] [i_3 + 1] [6] [i_0]) << (arr_6 [i_0] [i_3 - 1] [4] [i_0]))))));
            var_20 = 176947548468439555;
            arr_11 [i_0] &= (((arr_2 [i_3 - 1] [i_3 - 1]) && ((1 == (arr_2 [i_3 + 1] [i_3 + 1])))));
            arr_12 [i_0] [i_0] = (arr_6 [i_0] [i_3] [i_0] [i_0]);
        }
    }
    #pragma endscop
}
