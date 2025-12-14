/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1048576;
    var_20 = 11869;
    var_21 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_6 [i_1] = (((((+(min((arr_0 [i_0]), (arr_4 [14] [i_1] [i_1] [i_2])))))) ? 11869 : ((((((1140018416 ? (arr_4 [i_0] [i_1] [i_1] [i_2]) : (arr_3 [i_0] [i_0])))) || ((((-127 - 1) & (arr_4 [i_0] [i_1] [i_1] [i_2])))))))));
                    arr_7 [i_1] [i_1] [i_1] = (!1048575);
                    arr_8 [i_0] [i_1] [i_2] = ((((min((((53681 != (arr_2 [i_2] [i_1] [i_0])))), ((2677268877596471254 ? 1 : (arr_2 [i_0] [i_1] [i_0])))))) ? (min((arr_0 [i_2]), (((~(arr_1 [i_0])))))) : ((((arr_3 [i_0] [i_0]) / 1538981687309256592)))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] = (~-1048576);
                        arr_12 [i_2] &= (-((((min(15769475196113080361, (arr_5 [4] [i_2] [i_0])))) ? ((~(arr_4 [i_0] [12] [i_2] [i_0]))) : ((~(arr_5 [i_0] [i_2] [i_0]))))));
                    }
                }
                var_22 = (min(var_22, ((min(((((((arr_4 [i_0] [i_0] [i_0] [12]) <= 648928601)) ? (arr_9 [i_0] [1] [i_0] [i_0] [i_1]) : (((arr_9 [i_1] [i_1] [i_0] [i_1] [10]) ? (arr_1 [i_1]) : (arr_10 [i_0])))))), ((-504 ? (arr_2 [i_0] [i_1] [i_0]) : (arr_1 [i_0]))))))));
                var_23 = (((arr_5 [i_0] [i_1] [i_0]) ? (((~(arr_3 [i_0] [i_1])))) : (max((arr_0 [i_1]), (arr_5 [i_1] [i_1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
