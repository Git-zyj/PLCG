/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164142
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6)));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_19 *= ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) 2147483647)) : ((~((+(arr_0 [2U]))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) ((arr_4 [i_1] [i_0] [i_0 + 2]) << (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) arr_5 [i_2 - 1] [i_2 - 2] [i_2]);
                var_22 = 15ULL;
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((var_15), (((/* implicit */int) ((unsigned char) 18446744073709551600ULL))))))));
            }
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((unsigned short) 9223372036854775807LL)))));
            var_25 = ((/* implicit */unsigned long long int) var_6);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 4; i_4 < 20; i_4 += 1) 
            {
                var_26 &= ((/* implicit */int) min((((arr_4 [i_4 - 3] [i_4 - 2] [i_4 - 4]) & (arr_4 [i_4 - 3] [i_4 - 2] [i_4 - 4]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_4 - 3] [i_4 - 2] [i_4 - 4])) || (((/* implicit */_Bool) 18446744073709551600ULL)))))));
                var_27 = ((/* implicit */signed char) ((unsigned char) ((int) var_2)));
            }
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_16 [i_5] [i_3] [i_5] [i_0 - 1] = ((/* implicit */int) var_8);
                var_28 |= ((/* implicit */_Bool) (~(4380010940315627900ULL)));
                var_29 |= ((/* implicit */int) arr_12 [i_5] [i_0 - 3]);
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */short) var_4);
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_6 = 2; i_6 < 21; i_6 += 1) 
            {
                var_30 = ((/* implicit */unsigned int) max((var_30), (var_11)));
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    var_31 &= ((/* implicit */short) (-(arr_20 [i_6 - 1] [i_6 - 1])));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) var_17);
                        var_33 -= ((/* implicit */unsigned char) (short)32749);
                    }
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        var_34 = (+(1185820082));
                        var_35 |= ((/* implicit */short) ((unsigned short) ((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                    }
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_36 = ((/* implicit */short) ((unsigned int) 3998126030U));
                    var_37 = ((/* implicit */long long int) max((var_37), (arr_9 [i_3] [8U])));
                    var_38 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 14932836763346277958ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (296841266U)))) : (arr_29 [i_6] [i_6 + 1] [i_6] [i_6 - 2] [i_6 - 2])));
                }
                var_39 += ((/* implicit */unsigned int) arr_6 [i_0] [i_0 - 1]);
            }
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                var_40 = ((/* implicit */_Bool) var_13);
                var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_12)))))));
            }
        }
        var_42 = (-(((/* implicit */int) ((unsigned char) var_17))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_12 = 1; i_12 < 18; i_12 += 4) 
        {
            var_43 = (-9223372036854775807LL - 1LL);
            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (+(((int) 868834650)))))));
        }
        for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            var_45 = arr_23 [i_13] [i_13] [i_13] [i_13];
            /* LoopSeq 1 */
            for (long long int i_14 = 4; i_14 < 19; i_14 += 1) 
            {
                var_46 *= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 296841258U))))), (var_7))) >> (((/* implicit */int) var_13))));
                arr_40 [i_14] = ((/* implicit */long long int) ((_Bool) arr_28 [i_0 - 1] [i_13] [i_14 - 3] [i_0 + 1] [i_14]));
            }
        }
    }
}
