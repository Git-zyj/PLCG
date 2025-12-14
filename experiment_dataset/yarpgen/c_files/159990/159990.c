/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (max(var_12, -27424));
                var_13 = (min((max(15492, 43888)), var_3));
                arr_6 [i_0] [i_1] = (((!(arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1]))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_11 [i_2] = ((min((max(748750993592635512, -16851)), -15492)) ^ (arr_2 [i_2] [i_2]));
            arr_12 [i_2] = ((~748750993592635491) <= ((((((31744 < (arr_0 [i_3])))) | ((((arr_2 [i_2] [i_2]) && 1)))))));
        }
        var_14 *= ((((max((arr_10 [1] [i_2 + 1] [i_2 + 3]), (arr_10 [i_2] [i_2 + 1] [i_2 + 2])))) ? 960758926457470866 : var_3));
        var_15 = (((((2 * (min(1653220911, -748750993592635512))))) < (max(4700502219058750067, -748750993592635512))));
        var_16 |= ((~(~1238479464)));
        arr_13 [i_2] = (((~5076156522591940665) << ((min(var_9, var_1)))));
    }
    var_17 = (min(var_4, 12023458026266240530));
    var_18 = var_9;
    #pragma endscop
}
