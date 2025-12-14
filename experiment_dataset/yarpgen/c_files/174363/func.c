/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174363
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((unsigned short) -908202802));
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
        arr_3 [i_0] = ((/* implicit */_Bool) (unsigned char)0);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) ((short) var_12)))));
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) arr_5 [10LL] [i_1])) : ((-(11U))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)19871)) : (arr_5 [i_1] [i_1]))))))));
        arr_6 [i_1] = arr_1 [i_1] [i_1];
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((long long int) 18446744073709551600ULL));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        arr_20 [i_3] [i_3] [i_4 - 1] [i_4] = max((max((((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */long long int) arr_13 [i_2])) : (-7610861410090621165LL))), (((/* implicit */long long int) max((var_5), (arr_19 [i_2] [i_3] [i_4] [i_5])))))), (min(((~(arr_8 [i_3]))), (((/* implicit */long long int) arr_19 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1])))));
                        arr_21 [4LL] &= ((/* implicit */unsigned short) max((((/* implicit */long long int) 908202819)), (131941395333120LL)));
                        var_23 = ((/* implicit */signed char) arr_14 [i_4 - 1]);
                    }
                } 
            } 
        } 
        arr_22 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [7ULL]))));
        arr_23 [i_2] = ((/* implicit */short) (-((+(4294967295U)))));
    }
}
