/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141763
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
    var_19 = ((/* implicit */signed char) var_12);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_3);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((-75575101) + (((/* implicit */int) (signed char)-66))))));
        var_20 = ((/* implicit */long long int) var_8);
        var_21 = ((/* implicit */long long int) ((unsigned short) (~(6081643675925373949LL))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) var_11);
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16777215LL)) ? (((long long int) arr_0 [i_1])) : (-1LL)));
    }
    for (unsigned char i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        var_24 += ((/* implicit */long long int) (+(((unsigned long long int) arr_1 [i_2] [8]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_25 = ((/* implicit */long long int) arr_0 [i_2 - 2]);
            arr_13 [i_2] [i_3] [i_3] = ((/* implicit */signed char) arr_2 [(unsigned short)18]);
            arr_14 [i_2] = ((/* implicit */long long int) arr_0 [i_2 - 1]);
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_26 = ((/* implicit */int) var_9);
                        arr_21 [6ULL] [i_3] [i_3] [i_2] [i_5] = ((/* implicit */long long int) ((arr_2 [i_5]) ? (arr_11 [i_2 + 1] [i_4 - 1]) : (((unsigned int) 8191U))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            arr_24 [i_2] [i_2] = ((/* implicit */int) var_10);
            var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1284247484))));
        }
        arr_25 [i_2] = ((/* implicit */signed char) var_8);
        arr_26 [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18341))) : (arr_11 [i_2 - 1] [i_2 + 1])))) % ((~(var_10))));
        arr_27 [i_2] = ((/* implicit */long long int) arr_20 [i_2] [i_2] [16U] [i_2]);
    }
}
