/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 -= (((max((min(8, 0), (!15))))));
        var_20 += (max((max(0, 2147483634)), 10));
    }
    var_21 = var_0;
    var_22 = ((((((46 - 1048064) ? (max(15752446476445067, -8)) : (((2731781506 ? 0 : 10)))))) ? (((((((74 ? 2251799813685247 : 2147483645))) && ((min(18444492273895866395, 3))))))) : (((((58730 << (65535 - 65535)))) & (min(1, -4))))));

    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_23 = ((((~((min(167, -5166))))) << (((max(((18444492273895866381 ? 934270939 : 0)), ((-8467784184380757621 ? 4294967295 : -8)))) - 4294967286))));

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_1] [i_1] &= ((((((1048572 ? 1856670566305508286 : -1923896938)) >= -240)) ? 12 : (min((~3360696354), (178 == 0)))));
            var_24 = ((-484189167 ? 3183774636 : -16255));
        }
        var_25 = ((((min(-16242, 484189194))) ? (((78 && -484189202) ? 8191 : (max(15, -6333412053056072339)))) : ((((min(188, 1)))))));
    }
    #pragma endscop
}
