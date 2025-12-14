/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181670
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
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] [i_0] = arr_0 [i_0];
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                /* LoopSeq 4 */
                for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    arr_13 [i_0] [i_0] [i_2] [i_3] = (!(((/* implicit */_Bool) arr_3 [i_0 - 2])));
                    var_19 += ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_2] [i_3]);
                }
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    var_20 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_0 - 2]))));
                    var_21 += ((/* implicit */_Bool) arr_0 [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_22 += ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0] [i_5]);
                        var_23 = ((/* implicit */short) (+(arr_6 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 - 2])));
                    }
                    arr_19 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))));
                }
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 - 2] [i_1]))));
                        var_25 = ((/* implicit */unsigned short) arr_16 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2]);
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_2 [i_0 + 1] [i_0 + 1]))));
                    }
                    for (signed char i_8 = 1; i_8 < 10; i_8 += 1) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_6 [i_0 + 2] [i_0 + 2] [i_8 + 2] [i_8 + 1]);
                        var_27 = ((/* implicit */short) arr_12 [i_8 + 4] [i_6] [i_1] [i_1]);
                        var_28 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_8 - 1] [i_6] [i_8] [i_0 + 1]))));
                        arr_28 [i_8 + 1] [i_6] [i_1] [i_1] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_8 - 1] [i_0 + 2]))));
                    }
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_2] [i_6]))));
                    var_30 += ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_31 = (-(arr_6 [i_6] [i_0 - 1] [i_0 - 1] [i_0 - 1]));
                    var_32 -= ((/* implicit */unsigned long long int) arr_7 [i_0 - 2] [i_0]);
                }
                for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
                    var_34 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_0] [i_9] [i_2]))));
                }
                var_35 ^= ((/* implicit */long long int) arr_12 [i_0 + 2] [(_Bool)1] [i_2] [i_0 + 2]);
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) arr_12 [i_0] [i_0] [i_0 + 1] [i_0 + 1]))));
            }
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_37 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 - 2]))));
            var_37 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]))));
            arr_38 [i_0] = ((/* implicit */unsigned short) (~(13879778961654577890ULL)));
            var_38 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))));
            var_39 ^= ((/* implicit */unsigned char) arr_34 [i_0 + 1]);
        }
        for (short i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_0 - 2] [i_11] [i_11] [i_11] [i_11])))))));
            var_41 ^= ((/* implicit */long long int) arr_36 [i_0] [i_0] [i_0]);
            var_42 -= (+(((/* implicit */int) arr_18 [i_0] [i_0 - 1])));
            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [(unsigned char)6] [i_11] [i_11] [i_11] [i_11] [i_0 + 1] [i_11])))))));
        }
        arr_41 [i_0] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0]);
    }
    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
    {
        var_44 += ((/* implicit */unsigned short) (+((-(arr_42 [i_12] [i_12])))));
        var_45 = ((/* implicit */int) arr_42 [i_12] [i_12]);
        arr_44 [i_12] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3071680299U))))), (max((arr_42 [i_12] [i_12]), (((/* implicit */unsigned long long int) arr_43 [i_12]))))));
        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)0)), (458878682067304495ULL))))));
    }
    var_47 = ((/* implicit */_Bool) var_12);
}
