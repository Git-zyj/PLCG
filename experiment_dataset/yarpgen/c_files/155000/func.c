/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155000
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
    var_12 = ((/* implicit */unsigned char) ((signed char) max((var_0), (((/* implicit */unsigned long long int) (-(242467891)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_9), (((/* implicit */int) arr_0 [i_0]))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) arr_2 [i_0] [i_1 - 2])) : (((/* implicit */int) arr_2 [(_Bool)1] [i_1 + 1])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_2]))) ^ (var_0)));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            arr_11 [i_3] [i_3] [i_2] = ((/* implicit */long long int) arr_0 [i_2]);
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (((int) 403399712740532161ULL)) : (((/* implicit */int) (_Bool)1))));
            var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3])))))));
            var_16 = ((/* implicit */signed char) (_Bool)1);
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 7; i_5 += 3) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_5 - 1] [i_5 - 1])) | (((/* implicit */int) arr_13 [i_5 + 3]))));
                        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_5 + 2] [8LL] [i_5 - 2] [i_5] [i_5 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_5 + 2] [i_5] [i_5] [7] [i_5 + 3])));
                        var_19 = ((/* implicit */long long int) arr_10 [i_5] [i_4]);
                        arr_17 [i_2] [i_2] [2LL] [i_5] &= ((/* implicit */signed char) (+((~(((/* implicit */int) arr_12 [i_2]))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_19 [i_6] [(unsigned short)2]))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_19 [i_6] [i_6])) : (((/* implicit */int) (unsigned short)65535))))))));
        var_22 *= ((/* implicit */signed char) ((((/* implicit */int) (short)-20077)) & (((/* implicit */int) arr_19 [i_6] [i_6]))));
    }
}
