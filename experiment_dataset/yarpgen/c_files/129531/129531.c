/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_0 / (((((var_5 >> (4242990562 - 4242990532)))) ^ (min(var_4, 4298520773064819527))))));
    var_11 *= ((var_9 ? (((((max(117, -117)))) & ((var_9 ? var_8 : var_1)))) : -var_7));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_12 = ((-((((arr_1 [i_0 - 2]) != 9701)))));
        arr_2 [6] = ((~(max(117, 5829565507846322470))));
        var_13 = (max(var_13, ((((((-1791826908 ? 3567749217 : var_8))))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (~var_8);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_14 = (var_1 << ((((arr_1 [i_1]) && var_4))));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_15 = (max(var_1, ((var_5 ? 320424943 : (arr_9 [i_1] [i_3])))));
                var_16 = max((var_9 | 15739474435258813260), ((((max(1394182188, 4691642207334775491))) ? (~var_0) : (min(-545221941, 5829565507846322470)))));
            }
            var_17 &= (max((max(889411817068099372, 3517080464)), (arr_5 [6])));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_18 = ((!((((max(var_6, 4666327430843604881)) | (((26776 ? 889411817068099372 : 200))))))));
            var_19 = ((487909590 ? (arr_8 [i_1] [i_4]) : (min(-1986144423, ((5829565507846322470 ? var_2 : var_8))))));
        }
    }

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_20 = ((((((max(622088127, 6168427802732459260)) << ((((max(var_2, var_3))) - 17978))))) ? var_2 : (((arr_15 [i_5]) >> (var_0 + 7409708212958901110)))));
        var_21 = var_9;
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_22 ^= ((~(~49106004)));
        arr_20 [i_6] = 1206374096;
        var_23 = (((((var_9 ? (arr_19 [i_6] [i_6]) : var_7))) ? (((arr_19 [i_6] [i_6]) ? var_2 : 11930930681577821503)) : -24506));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        var_24 = (min((arr_22 [i_7] [i_7]), var_7));
        var_25 = min(((var_3 / (((arr_19 [2] [i_7]) ? 1024658653198789451 : var_5)))), ((var_9 | (16137805999997050224 / -49106004))));
        var_26 = (min((((((((arr_18 [i_7]) < 17422085420510762165))) / ((max(var_1, var_1)))))), (((arr_22 [i_7] [i_7]) ? -1448532245 : (max(4251023651758528118, var_2))))));
        var_27 &= 5829565507846322462;
    }
    var_28 = var_4;
    #pragma endscop
}
