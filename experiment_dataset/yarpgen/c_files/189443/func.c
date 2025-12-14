/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189443
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_10 += ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_7))))));
        var_11 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)27820))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) var_0)) ? (8756609399333760686ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
        var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [18ULL])) ? (((((((/* implicit */_Bool) 3378804493506476799ULL)) ? (var_6) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 + 1])))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_1 + 2]))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                var_14 *= ((/* implicit */short) ((((arr_3 [i_3]) + (((/* implicit */int) arr_8 [i_1] [i_2] [i_3] [i_3])))) < (((((/* implicit */_Bool) 1171315215789133909ULL)) ? (((/* implicit */int) arr_1 [i_2])) : (arr_9 [i_3])))));
                var_15 = ((/* implicit */unsigned long long int) var_1);
            }
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (int i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_0)) + (((/* implicit */int) arr_13 [i_2] [i_5]))))));
                        arr_16 [i_5 + 3] [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
                        arr_17 [i_1] [i_2] [i_4] [i_5 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3484263762964290925ULL))));
                    }
                } 
            } 
            arr_18 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (short)29712);
            arr_19 [i_1] [i_1 - 1] [i_1] = ((((/* implicit */int) (_Bool)1)) < (arr_6 [i_1]));
        }
        var_17 ^= ((/* implicit */_Bool) var_7);
    }
    var_18 = ((/* implicit */short) (-(15919691460520567871ULL)));
    var_19 = ((/* implicit */unsigned long long int) -1637483671);
    var_20 = ((/* implicit */int) (unsigned char)119);
}
