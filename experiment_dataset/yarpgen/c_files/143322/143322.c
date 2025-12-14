/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((arr_1 [i_0]) ? (!18446744073709551615) : ((-(arr_1 [i_0]))));
        var_20 = (max(var_20, (((~((9223372036854775788 ? 1417765732020681603 : -1823553629)))))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (var_10 ? 5630655210487327807 : -4309031656827936357);
        var_21 *= ((396460121 ? 6357908545427237257 : 18446744073709551606));
        var_22 *= (((arr_3 [16]) || (-1409035583 / -3072211330639388184)));
        var_23 = ((((min(-3072211330639388184, 4309031656827936356))) || (((160243687385642638 ? 4963290194437205242 : -1430149809)))));
    }
    var_24 = ((((min(var_9, 4440149113958832224))) ? ((11227490885524156760 ? 18446744073709551615 : 7219253188185394855)) : (var_14 <= -407075668729501457)));
    var_25 = -1430149809;
    var_26 = ((-215729022184154706 || ((min((!4309031656827936368), 4309031656827936357)))));
    #pragma endscop
}
