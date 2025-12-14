/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126510
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) (short)-16384);
        var_17 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_18 = ((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0]));
        var_19 *= ((/* implicit */unsigned int) arr_1 [i_0] [2U]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [14] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [(short)4] [i_2])))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])) / (((arr_6 [i_0] [i_0] [i_0] [i_0]) / (arr_6 [i_0] [i_0] [i_0] [i_2])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3])) || (((/* implicit */_Bool) arr_8 [i_3]))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 4; i_6 < 20; i_6 += 4) 
                {
                    for (unsigned char i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) arr_15 [i_5] [i_6 - 4] [i_6 + 2] [i_7 + 1] [i_6 - 4]);
                            var_24 = arr_9 [i_3];
                            var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6 + 1] [i_6 + 1] [i_4] [i_6] [i_7] [i_7 + 1] [i_7]))) + (arr_3 [i_6 + 1] [i_4])));
                            var_26 |= ((/* implicit */signed char) 3174437697U);
                            var_27 *= ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) arr_8 [i_3])))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) arr_17 [i_3] [i_4] [i_3]);
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    for (unsigned short i_9 = 2; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_14 [i_3] [i_5] [i_5] [i_8])) ^ (((/* implicit */int) arr_7 [i_3] [i_4]))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_9 [i_3]))) || (((/* implicit */_Bool) arr_16 [i_3] [i_5] [i_8] [i_8] [i_3]))));
                        }
                    } 
                } 
            }
            for (unsigned short i_10 = 4; i_10 < 19; i_10 += 4) 
            {
                var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */int) arr_21 [i_3] [i_4] [i_10] [i_3] [i_3] [i_4])) * (((/* implicit */int) ((_Bool) 3174437697U)))))));
                var_32 = ((/* implicit */unsigned int) max((var_32), (1301343331U)));
                var_33 -= ((/* implicit */unsigned long long int) 1120529599U);
                var_34 = ((/* implicit */unsigned short) arr_29 [i_3] [i_3] [i_3]);
            }
            var_35 = ((/* implicit */unsigned short) arr_8 [i_3]);
        }
        var_36 = ((/* implicit */signed char) ((arr_5 [(unsigned char)4] [i_3] [i_3]) > (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))));
        /* LoopSeq 1 */
        for (unsigned int i_11 = 4; i_11 < 20; i_11 += 2) 
        {
            var_37 = ((/* implicit */signed char) ((int) 3174437697U));
            var_38 = ((/* implicit */unsigned short) (((~(1120529599U))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_11] [i_11] [i_11])) << (((arr_28 [i_3] [i_3] [i_3]) - (866392756))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            for (short i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                {
                    var_39 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_22 [i_3] [i_12] [i_13] [i_3])) && (((/* implicit */_Bool) -2547975375581140589LL)))));
                    var_40 ^= ((/* implicit */unsigned short) arr_8 [i_3]);
                }
            } 
        } 
    }
    var_41 |= ((/* implicit */short) var_3);
}
