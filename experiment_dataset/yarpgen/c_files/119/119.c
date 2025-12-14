/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (((((var_6 ? 8070450532247928832 : 8070450532247928832)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] |= (((((((((arr_2 [i_2]) || 8070450532247928832))) ^ var_14))) <= (max((~5722894408738434740), (((1663637007206941103 || (arr_2 [i_0]))))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_18 = (min(var_18, ((((((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (min(-var_9, ((min(103, var_14))))) : (max(((var_14 ? 17 : 10376293541461622783)), var_16)))))));
                        var_19 = ((max(var_4, var_13)) << (((max((var_4 * 17), (var_10 || 10376293541461622799))) - 1441560713)));
                    }
                }
            }
        }
    }
    var_20 = ((((8070450532247928833 ? 31044 : (~var_2))) - var_12));
    var_21 = (min(((~(max(var_10, var_2)))), 10));
    #pragma endscop
}
