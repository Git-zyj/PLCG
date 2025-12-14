/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176627
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [14] = ((/* implicit */_Bool) (-(-8697244582139087559LL)));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) arr_1 [i_0]);
                    var_21 ^= ((/* implicit */signed char) var_2);
                    arr_9 [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_1]);
                    var_22 ^= ((/* implicit */unsigned long long int) (signed char)-27);
                }
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    arr_14 [i_0] = ((/* implicit */_Bool) var_7);
                    var_23 = ((/* implicit */unsigned char) arr_3 [15ULL]);
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 3) /* same iter space */
    {
        var_24 += ((/* implicit */unsigned char) var_18);
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            var_25 = ((int) max(((-(((/* implicit */int) arr_2 [i_5])))), (((/* implicit */int) (signed char)97))));
            var_26 = ((/* implicit */_Bool) var_17);
            var_27 *= ((/* implicit */unsigned long long int) arr_3 [i_4 + 1]);
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) (-((~(arr_13 [i_4] [i_4 + 1] [(_Bool)1] [i_5])))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_29 = ((/* implicit */int) (unsigned char)162);
                            arr_28 [i_4 - 2] [i_5] [i_6] [i_7] [i_5] = ((/* implicit */int) arr_27 [i_4] [i_4] [i_4] [i_4 - 2] [i_5 - 2] [i_8]);
                            var_30 = ((/* implicit */int) var_5);
                            arr_29 [i_5] = arr_22 [i_4 - 1];
                        }
                        var_31 = (-((-((~(11918664069977257847ULL))))));
                    }
                } 
            } 
        }
        var_32 -= (-(arr_24 [(signed char)6] [i_4] [(signed char)10] [i_4 - 2]));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 3) /* same iter space */
    {
        var_33 = ((/* implicit */int) (signed char)28);
        var_34 = ((/* implicit */unsigned char) (signed char)4);
    }
    var_35 = ((/* implicit */signed char) var_10);
}
