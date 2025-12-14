/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((5694984814815319523 ? ((min((!var_9), ((var_2 ? var_12 : var_2))))) : ((17257159908454465638 ? ((max(var_4, var_11))) : (max(var_3, 4318822798732355060))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((~56470) ? (((4611686018393833472 ? 0 : -105))) : var_9)));
        var_14 = (min(var_14, (min((((20391 - 16) | (!var_0))), (((!(((var_9 ? (arr_1 [i_0]) : (arr_0 [i_0])))))))))));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_15 *= ((32767 ? 20391 : 45145));
            var_16 = (((max((arr_1 [i_1 + 1]), 4059729405047619156)) << (((min((arr_4 [i_1] [i_1] [i_1]), (arr_4 [i_1] [i_1 - 1] [i_0]))) - 3180986584))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_0] [i_2] = 1920;
            var_17 = (((((((~(arr_3 [i_0] [i_0] [i_2]))) % (max(var_8, (arr_3 [i_0] [i_0] [i_0])))))) ? ((((min(var_6, -542980597))) ? (arr_5 [i_0] [i_2] [i_0]) : ((2112653160 ? (arr_5 [i_0] [i_2] [i_2]) : -598156660)))) : ((min((max(var_5, -773847859)), ((40820953 << (var_0 - 126))))))));
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_18 = ((((max((-8679275444198462688 > 168), (min(0, 7566840607760412475))))) ? (((((((arr_9 [i_3]) ? var_11 : var_6))) ? ((min(40820933, (arr_9 [i_3])))) : -31))) : (max((max(-21477, var_10)), (arr_9 [i_3])))));
        var_19 *= ((((max((min(20391, var_10)), ((max((arr_10 [20]), -1347533161737427370)))))) ? ((((-40820953 ? var_0 : 23633)))) : (105 * 15500994653154403671)));
        var_20 = (~var_6);
    }
    var_21 |= (((var_11 ? var_5 : var_9)));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                var_22 ^= ((~((0 ^ (arr_19 [i_4])))));
                var_23 = ((((((((23633 ? var_2 : var_12))) ? (((arr_9 [i_4]) ? 7881677299031353717 : (arr_11 [i_4]))) : ((max(1525, (arr_19 [i_4]))))))) ? ((((!(~var_5))))) : (max((arr_9 [i_4]), ((var_8 ? 1 : (arr_4 [i_4] [i_4] [i_4])))))));
                var_24 = ((((min(var_10, 6140330083278028587))) ? (((((((arr_16 [i_4]) + 12825596826852891801))) ? ((max((arr_13 [i_4]), 4))) : ((var_6 ? 71 : var_6))))) : (max((~var_2), (arr_6 [i_4] [i_5])))));
            }
        }
    }
    var_25 = (min((max(-959963295410954252, (max(var_2, var_10)))), (((1 ? 32767 : 4192781928)))));
    #pragma endscop
}
