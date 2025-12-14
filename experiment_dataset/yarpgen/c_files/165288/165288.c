/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((((((((min(var_3, 6264578337815436372))) ? (~1) : (arr_1 [i_0])))) & (max(((var_1 ? var_13 : (arr_1 [i_0]))), (min((arr_0 [i_1] [i_1]), 12182165735894115257)))))))));
                var_16 = (((arr_1 [i_0]) >> (((!(arr_3 [i_0]))))));
                var_17 = (((arr_0 [i_1] [i_0]) ? (((((!32767) || (arr_0 [i_0] [i_0]))))) : (min(1, (var_6 / 12182165735894115245)))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = 281474972516352;
                        var_19 = (arr_3 [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_20 += var_10;
                        arr_11 [i_0] [i_1] = ((-(min(var_2, -1))));
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_14 [i_0] = (max(0, 6264578337815436372));
                        var_21 = ((~((((arr_10 [i_0] [6] [i_2] [i_5]) >= (arr_1 [i_0]))))));
                        arr_15 [i_0] [i_1] [i_2] [i_5] = 1;
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_22 |= (1522569911 % var_6);
                        arr_19 [i_0] [i_0] = max(-449, ((max((var_12 != 12182165735894115263), var_10))));
                        var_23 = (((((arr_13 [i_6 - 1] [i_6 + 1] [i_6] [i_6]) ? ((217 ? -22870 : 6264578337815436355)) : 2093505818435877473)) * ((((arr_17 [17] [i_1] [17] [i_6] [i_6 + 1]) >> (((arr_17 [i_0] [i_0] [i_2] [5] [i_6 + 1]) - 58316)))))));
                    }
                    for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_24 = (max(103, (((((min((arr_20 [i_0] [i_0]), 0))) ? ((-(arr_9 [i_7] [i_2] [i_0] [i_0]))) : 18001)))));
                        var_25 &= ((-(arr_1 [i_7 - 1])));
                        var_26 = (min(var_26, var_12));
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_27 = ((((((0 ? var_12 : var_10)))) ? (arr_22 [i_0] [i_8] [i_0]) : ((((min((-2147483647 - 1), 14303))) ? var_9 : ((-1 - (arr_10 [i_0] [i_1] [i_2] [14])))))));
                        var_28 = ((7214758651444849542 ? ((11727802476636483096 ? (arr_6 [i_8] [14] [i_8]) : 57090)) : 121));
                        var_29 = (max((((3957351103 - 0) ? (((arr_5 [12]) ? (arr_20 [1] [i_0]) : var_8)) : ((-18001 ? 6264578337815436372 : -7016)))), 6264578337815436394));
                    }
                    var_30 = (max(var_30, ((min(((-(217650291 | var_13))), var_5)))));
                }
            }
        }
    }
    var_31 = (((((~(min(141863388262170624, 7936))))) ? (((((min(-14273, 61))) ^ 14302))) : ((var_7 ? (var_8 ^ 75) : var_0))));
    #pragma endscop
}
