/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12849
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_10 |= ((/* implicit */unsigned int) ((unsigned short) ((_Bool) min((arr_7 [i_2] [2ULL] [2ULL] [i_2]), (arr_1 [i_1] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) ((unsigned short) (short)511))))));
                                var_12 &= min((min(((~(((/* implicit */int) (short)505)))), (((/* implicit */int) (short)-511)))), (((/* implicit */int) ((_Bool) max((var_3), (((/* implicit */long long int) var_0)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 4; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_21 [i_2] = ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) ((short) (unsigned short)65535))));
                                arr_22 [i_0] [i_1] [i_2 - 1] [i_2] [i_5] [i_6] = ((/* implicit */int) ((short) ((long long int) (+(((/* implicit */int) (unsigned short)1))))));
                                arr_23 [i_0] [i_6] [i_2] [i_5] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max(((-(arr_11 [(unsigned short)4] [i_1] [i_0] [2LL] [i_0]))), (((/* implicit */long long int) ((_Bool) var_8)))))), (max((((unsigned long long int) (short)-511)), ((~(arr_4 [4LL] [i_1] [i_2])))))));
                            }
                        } 
                    } 
                    var_13 = ((long long int) ((short) ((long long int) arr_19 [i_0] [i_1 - 3] [i_1] [i_1 - 3] [i_0] [i_2 + 2])));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((_Bool) (~(((unsigned long long int) var_1)))));
    var_15 = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (((long long int) var_0)))));
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((signed char) ((long long int) ((unsigned long long int) (signed char)101))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 4) 
        {
            arr_31 [i_8] [i_8] = ((/* implicit */unsigned short) ((long long int) ((unsigned int) var_7)));
            var_17 = ((/* implicit */_Bool) (-(((int) 1754593468U))));
            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_8])))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    {
                        var_19 = ((signed char) ((long long int) (unsigned short)4095));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((unsigned long long int) ((unsigned long long int) var_4)))));
                        arr_38 [(signed char)0] [i_8] [i_8] [i_8] [i_10] [i_10] = ((unsigned int) (signed char)115);
                    }
                } 
            } 
        }
        arr_39 [i_7] = ((/* implicit */unsigned short) ((_Bool) (-(((unsigned int) arr_0 [i_7] [i_7])))));
    }
    var_21 = ((/* implicit */signed char) (+(max((((unsigned int) var_3)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)29775)))))))));
}
