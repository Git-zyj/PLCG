/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166645
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (max((((/* implicit */unsigned long long int) var_11)), (max((var_18), (var_17)))))));
    var_20 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) arr_2 [i_0]);
        var_22 &= ((/* implicit */int) var_18);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 2]))))) : (((((/* implicit */int) var_2)) - (((/* implicit */int) var_2))))));
        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) var_11)))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] [i_2] = var_14;
        var_25 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_2] [i_2]))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((max((((int) var_7)), (((var_5) % (((/* implicit */int) var_0)))))), (((/* implicit */int) var_2)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */short) ((signed char) ((arr_8 [i_2] [i_2 - 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1]))))));
                                arr_21 [i_2] [i_3] [i_3] [i_4] [16LL] [i_5] [i_6] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) var_17)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_4]))))))) / (arr_8 [i_3] [i_2])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_12 [i_2 + 2] [i_2 + 2]))) ? (max((((((/* implicit */_Bool) var_10)) ? (arr_12 [i_2] [i_2]) : (arr_12 [i_2] [i_2]))), (((/* implicit */long long int) arr_6 [i_2] [i_2])))) : (var_12)));
        var_29 ^= ((/* implicit */signed char) arr_3 [i_2]);
    }
    var_30 = ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), (var_1)));
    var_31 = ((/* implicit */short) var_10);
}
