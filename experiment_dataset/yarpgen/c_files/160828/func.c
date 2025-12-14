/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160828
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
    var_10 = ((/* implicit */long long int) (unsigned short)15749);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) (unsigned short)64777);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0))));
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -4127926729758047552LL))) ? (((((/* implicit */int) (unsigned short)11631)) & (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) == (-2036245050))))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_0]))));
        var_14 = ((/* implicit */signed char) (unsigned short)11648);
    }
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    var_15 = ((/* implicit */_Bool) ((unsigned int) arr_9 [i_6 + 1] [i_6 + 2] [i_6 - 1] [i_6 + 1]));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_4] [i_6 + 2]))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_6 + 1])) || (((/* implicit */_Bool) arr_11 [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [10ULL] [i_6]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 14; i_10 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) arr_7 [i_6 - 1] [i_6 + 2] [i_10 + 1] [i_10 - 1]);
                                var_19 = ((_Bool) (~(((/* implicit */int) (unsigned short)15749))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) var_8);
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_6] [i_6] [i_4] [i_6 - 1] [9] [i_6])) & (((/* implicit */int) (_Bool)1))));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 1; i_12 < 11; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) / (2147483647)));
                                var_23 = ((/* implicit */unsigned long long int) ((arr_1 [i_12] [i_12 + 2]) - (arr_1 [10ULL] [i_12 - 1])));
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (-(((/* implicit */int) (short)8524)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) var_1);
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        for (int i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) var_8);
                                var_27 &= ((/* implicit */unsigned char) 2147483647);
                                var_28 = ((/* implicit */signed char) (unsigned short)53887);
                                var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)11))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 2; i_16 < 13; i_16 += 1) 
                    {
                        for (long long int i_17 = 0; i_17 < 15; i_17 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) ((long long int) (unsigned short)25246));
                                var_31 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)-8549))))));
                            }
                        } 
                    } 
                }
                var_32 = ((/* implicit */unsigned long long int) (~((-(((((/* implicit */_Bool) (unsigned short)53899)) ? (((/* implicit */int) (unsigned short)0)) : (2147483647)))))));
                var_33 -= ((unsigned char) 9223372036854775807LL);
            }
        } 
    } 
}
