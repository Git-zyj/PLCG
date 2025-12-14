/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(min((max(10737042659895155258, 10188169272159923605)), (max(18446744073709551615, 22))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (min(var_15, ((max(12728, ((min((!1), (!-192751182)))))))));
        arr_3 [i_0] [i_0] = ((0 ? (min(31917, 1218486476)) : -0));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = (min(2199023255551, 0));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 6;i_3 += 1)
            {
                var_16 = (max(var_16, (((!((max(((min(12604, 1))), 51))))))));
                arr_14 [i_1] [i_1] [i_3] = ((-(max((~-1), (~-11774)))));
                var_17 = (max(var_17, (((31776 ? (max(8, ((min(8757058789428092365, -1))))) : ((max(-728412940385047038, -65535))))))));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_18 = ((7684327975840413922 ? ((max((min(-43, -815543111)), 31))) : (max((max(0, 4294967274)), (~0)))));
                var_19 = (max(var_19, ((min(18446744073709551588, -20586)))));
                var_20 = -63;
            }
            var_21 -= (min(((min(192, 0))), ((((max(-2147483640, 6337))) ? (max(9422, 0)) : 204))));
            arr_19 [i_1] [1] [i_2 - 1] = (max(60935, 18446744073709551615));
        }
        var_22 = ((0 ? ((112 ? (!268419072) : (max(1525075968, 16)))) : 131071));
    }
    #pragma endscop
}
