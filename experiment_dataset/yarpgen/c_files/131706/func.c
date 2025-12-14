/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131706
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_12 += ((/* implicit */unsigned long long int) 2119112331);
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned int) arr_5 [9]);
            arr_6 [i_1] [(_Bool)1] = ((/* implicit */_Bool) var_0);
        }
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 16; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    {
                        arr_14 [i_3] = ((/* implicit */unsigned int) var_11);
                        var_14 = ((/* implicit */short) arr_10 [8ULL] [i_3] [(signed char)0] [i_0]);
                        var_15 = arr_2 [0ULL] [i_2];
                        arr_15 [i_3] [15LL] [11U] [i_2] [i_0] [i_3] = ((/* implicit */long long int) (short)19081);
                        var_16 += ((/* implicit */signed char) arr_11 [10ULL]);
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_2)) / (2097144ULL)));
            var_18 = ((/* implicit */unsigned int) 2119112331);
        }
        for (long long int i_5 = 2; i_5 < 17; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 16; i_6 += 4) 
            {
                for (long long int i_7 = 2; i_7 < 18; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        {
                            arr_27 [(_Bool)1] [i_6] [(_Bool)0] [i_6 + 3] [i_6] = ((/* implicit */_Bool) ((arr_19 [i_8] [(signed char)4] [i_8]) * (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7] [(unsigned short)18] [(unsigned char)7] [4ULL] [i_8] [i_6 - 1] [i_5])))));
                            var_19 = ((/* implicit */signed char) var_8);
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_18 [6LL] [i_6 - 1] [13]))));
                            var_21 = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) var_6)) + (23629))))), (var_2)));
                        }
                    } 
                } 
            } 
            arr_28 [i_5 - 1] [(short)8] = ((/* implicit */int) var_11);
        }
        for (int i_9 = 1; i_9 < 18; i_9 += 2) 
        {
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_3 [i_9]))));
            var_23 = ((/* implicit */long long int) var_11);
        }
    }
    var_24 = ((/* implicit */unsigned int) var_4);
}
