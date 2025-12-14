/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-6366869566427403430 && ((max((max(var_2, 9223372036854775775)), (arr_1 [i_0]))))));
        arr_3 [i_0] = 6366869566427403430;
        arr_4 [i_0] = ((((((-1 || (arr_1 [i_0])))) <= var_12)));
        var_16 = (max(var_16, ((((max(((((arr_0 [i_0]) && 226239701868752496))), -var_4))) ? -8504264363858451810 : (((((14104887099897479619 ? var_6 : var_3)) / ((max(var_7, 1))))))))));
    }
    var_17 = var_2;
    var_18 ^= (4341856973812071996 != var_6);
    var_19 = -31630;
    #pragma endscop
}
