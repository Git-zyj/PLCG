/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~0);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (2 ^ 32746);

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_11 += (7692608703406933259 ^ 4294967294);
            var_12 = ((+((((!54369) || 4294967288)))));
            var_13 = (min(var_13, (((((((min(8597039624083380274, 4294967280)) / (7 != 17001649159909463752)))) ? ((((-32764 || 5) ^ (!-22)))) : (2806316352 % 5952))))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_14 -= (-15439 - 15447);
            var_15 = ((((6 ? 2 : 16)) / (((22 ? 30 : ((min(19, 72))))))));
        }
        arr_8 [1] [i_0] = -34275;

        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            arr_11 [i_0] [i_0] [i_0] = 5615;
            arr_12 [i_0] [i_3] = ((min(((3710573402 ? -32745 : 12288)), -22)));
        }
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            var_16 -= 2;
            arr_16 [i_0] [i_4] [i_0] = ((((((22507 ? 37704 : 1496640852)) / 29562)) - 4294967294));
        }
    }
    var_17 = -var_6;
    #pragma endscop
}
