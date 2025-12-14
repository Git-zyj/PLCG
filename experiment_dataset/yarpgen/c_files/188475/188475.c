/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((1 ? 65535 : 5))) & ((4539628424389459968 ? -410291506513978957 : 63137)))) < (-1252562436 >= 0)));

    for (int i_0 = 3; i_0 < 24;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = (((((-58 >> (65517 - 65501)))) | (127 | 2757648359871253521)));
            arr_4 [i_1] &= (!-1252562436);
        }
        var_18 ^= (min(2422, 115));
    }
    for (int i_2 = 3; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((~(+-16188)));
        var_19 = (((min(5763358609518128169, (min(25, 169))))));
        var_20 = ((((((((min(410291506513978932, -1252562436))) || 4242222531)))) > 2008010226));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_21 -= (-66 ? 65530 : -1);
        var_22 = (min(var_22, 121));
        var_23 = (max(var_23, 6228522078658667460));
        arr_14 [i_3] = ((6 & (9437652021835251508 <= -1)));
    }
    var_24 = var_0;
    #pragma endscop
}
