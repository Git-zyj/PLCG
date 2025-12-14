/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15401
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
    var_12 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 + 3] [i_0 - 1] [i_3] [i_3] [i_0 - 1])) ? (33554431ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_1] [i_0 + 3] [i_3] [i_4] [i_2] [i_2])))));
                                var_15 &= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((arr_3 [i_0 + 2]) - (15618260823568176305ULL)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1040384)) ? (((/* implicit */int) arr_8 [i_0 + 3] [i_0 + 2] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 + 3]))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [0U] [i_0] [i_0] [i_0] [i_0]))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) % (var_3)));
        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32767))));
    }
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) var_6);
        /* LoopNest 2 */
        for (unsigned int i_6 = 3; i_6 < 10; i_6 += 2) 
        {
            for (short i_7 = 3; i_7 < 9; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            {
                                arr_24 [i_5] [i_5] [i_8] [i_5] = ((/* implicit */unsigned short) arr_6 [i_7] [i_9] [i_7 - 3] [(unsigned char)4]);
                                var_21 = ((/* implicit */long long int) (-(((((/* implicit */int) (signed char)127)) + ((-(((/* implicit */int) (short)32767))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (short)32756)), (18U)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((long long int) arr_5 [i_7 - 3] [i_5] [i_5]))));
                    var_23 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6 - 3] [i_6] [i_6] [i_7])) ? (((/* implicit */int) (short)15872)) : (((/* implicit */int) var_11))))));
                    arr_25 [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (short)2015)))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_30 [i_11] = (+(max((1040384), (((/* implicit */int) var_2)))));
                                var_24 ^= (+(((arr_26 [i_7] [i_7 - 1] [(signed char)1] [i_7] [i_7] [i_7]) % (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) max(((!((_Bool)1))), ((!(((/* implicit */_Bool) -1040357))))))), ((signed char)81)));
        arr_31 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
    }
}
