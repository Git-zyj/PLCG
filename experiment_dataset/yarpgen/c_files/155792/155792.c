/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = (max(-1023, ((max(63, (-127 - 1))))));
        var_12 = ((((min((!255), (max(995, 1))))) ? (max((max(18446744073709551596, 9271421472773063755)), -1024)) : (((995 ? 0 : (!-1024))))));
    }
    var_13 = (min(var_13, (min(var_8, ((max((!-9223372036854775793), (!966))))))));
    var_14 *= (min(((max((max(55, 1)), var_1))), ((-1 ? ((max(23, 79))) : (!-1017)))));
    #pragma endscop
}
