/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157548
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_10 [i_3] [i_2] [i_1] [3LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (max((arr_4 [i_2 + 2] [i_1] [i_2 + 1]), (arr_4 [i_2 + 2] [i_2 + 2] [i_2 + 2]))) : ((+((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))))))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((max((((/* implicit */int) arr_7 [i_0] [i_1] [3U] [i_2 + 1])), (arr_8 [i_0] [i_0] [i_1] [i_2 + 1]))) >> (((((((/* implicit */_Bool) min((arr_4 [9ULL] [i_1] [i_1]), (((/* implicit */int) (signed char)-104))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_2 - 1]))))) : ((~(-1LL))))) + (5775LL))))))));
                        var_20 -= arr_0 [i_1];
                        var_21 = ((/* implicit */int) min((var_21), (max((((int) 2799521723U)), (((/* implicit */int) ((((/* implicit */_Bool) ((int) 0ULL))) || (((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 2])))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [i_0]);
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((long long int) 1495445573U)))))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_0))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 18014398509473792LL))) ? (((/* implicit */unsigned long long int) -1264183883639752156LL)) : (((arr_5 [i_0]) >> (((1544274475U) - (1544274464U))))))))));
    }
    var_25 = ((/* implicit */long long int) (((-(((/* implicit */int) var_0)))) != (((/* implicit */int) var_0))));
}
