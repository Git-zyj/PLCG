/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max((max(((min(1, 20))), (max(34111, -712676581)))), 0)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] [10] = (max(-10, (max(-20, (max(11316, 28))))));
                        var_17 = min(-1898676891344068572, (max(((max(-16, 2750))), (max(20, 3576626142479368924)))));
                        arr_16 [i_0] [i_1] [i_1] [i_3] [i_2] = (max((min(8, ((max(-21, 1))))), 3617));
                    }
                }
            }
            var_18 *= 40672;
        }
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            var_19 *= min(26, ((max((min(103148595, 1)), ((min(15430, 1)))))));
            var_20 = (max(1, (min((max(1, 712676581)), 1))));
            var_21 = (max((min(((min(244354045, -3206109442249942751))), 18446744073709551615)), ((min(((min(4191818701, 712676574))), -5519683228030553524)))));
            var_22 = (max((max(((max(-712676581, 1))), (min(-1686464719, -8976099693521161888)))), ((max(113, 8)))));
        }
        var_23 = (min(var_23, ((max(37736, (max(103148584, 13)))))));
    }
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        var_24 ^= max(23847, 47);
        var_25 = (max((min(140, (max(18446744073709551612, 18446744073709551588)))), (min(4089381581150699294, (max(56, 14357362492558852302))))));
        arr_23 [i_5 + 1] [i_5] = (max(6976676309926805337, (min(4294967295, 1366298381774118405))));
        var_26 = (max(((min((max(26625, -26625)), 15941))), 356529828));
        arr_24 [i_5] = (max((max(((max(189, -30228))), (max(1591606773, 15611822953739301996)))), ((min((max(-32747, -5923614336449556135)), ((max(3915150816, 1))))))));
    }
    var_27 = 4294967287;
    #pragma endscop
}
