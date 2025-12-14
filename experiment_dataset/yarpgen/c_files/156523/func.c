/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156523
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
    var_11 = var_5;
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((8289478158619003748ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (arr_0 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (((/* implicit */short) arr_1 [i_1 + 2] [i_0 - 3]))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((arr_10 [i_2] [4] [i_2] [i_4] [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            arr_16 [i_2] [20LL] [i_2] [i_3] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 + 2]))) ^ (-3544114529323491126LL)))));
                            arr_17 [i_2] = ((/* implicit */short) max(((~(8289478158619003776ULL))), (((/* implicit */unsigned long long int) ((short) var_0)))));
                            arr_18 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) 8738609001623274762LL);
                        }
                    } 
                } 
            } 
            var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_4 [i_0 - 3] [i_1] [i_1 - 3])))) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_10 [(short)8] [i_1] [i_1 + 3] [i_0] [i_1]))) << (((8289478158619003748ULL) - (8289478158619003725ULL)))))) : (-3544114529323491110LL)));
        }
        var_15 *= ((/* implicit */short) min(((-(((/* implicit */int) arr_13 [(signed char)6] [i_0 - 2] [i_0 - 2] [i_0 + 2] [(signed char)6])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_2))))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_6))));
    }
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            arr_25 [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_24 [i_5] [i_5] [i_6]);
            var_17 = arr_23 [i_6] [i_6] [12LL];
            var_18 = (i_5 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_20 [i_5])) - (50031)))))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((((((/* implicit */int) arr_20 [i_5])) - (50031))) + (42989))))));
        }
        for (long long int i_7 = 3; i_7 < 21; i_7 += 3) 
        {
            arr_30 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_27 [i_7 - 3])) == (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            arr_31 [i_5] = min(((~(((/* implicit */int) arr_26 [i_7 - 3] [i_7 + 2] [i_7 - 3])))), (((/* implicit */int) arr_26 [i_7] [i_5] [i_5])));
            var_19 = ((/* implicit */unsigned short) var_1);
        }
        arr_32 [i_5] = ((/* implicit */short) (-(((/* implicit */int) arr_20 [i_5]))));
    }
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        arr_36 [i_8] = ((/* implicit */unsigned long long int) (~(((-1202306611166112819LL) ^ (arr_23 [i_8] [i_8] [i_8])))));
        var_20 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) min((arr_28 [i_8]), (((/* implicit */signed char) (!(var_9))))))), ((unsigned char)127)));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((-3869808904074347261LL) | (((/* implicit */long long int) -818664204))))))) ? (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)63277))))))) : ((-((+(8289478158619003756ULL)))))));
}
