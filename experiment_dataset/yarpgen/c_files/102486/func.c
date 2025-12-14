/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102486
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3 - 3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((arr_10 [i_0] [i_1] [i_1] [i_0] [i_4]), (((/* implicit */unsigned char) var_11))))))) : (var_2)))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_4] [i_2] [i_3 - 1] [i_4])) >= (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_3 - 3] [i_1]))))) / ((-(((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_3 + 1] [i_3 + 1]))))));
                                arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_3 - 1])))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4290946034U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65527)))))) : ((~(var_5))))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 4290946034U)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_12)))) : (((/* implicit */int) max(((unsigned short)7), (((/* implicit */unsigned short) arr_0 [i_0]))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 2; i_5 < 19; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (unsigned int i_7 = 2; i_7 < 18; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (long long int i_9 = 2; i_9 < 18; i_9 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_8 - 1] [i_5] [i_5] [i_5] [i_5 - 2] [i_5]))))) - (min((arr_21 [i_6] [i_7 - 1] [i_8 - 1] [i_8 - 1]), (((/* implicit */long long int) var_3))))));
                                arr_28 [i_5] [i_8] [i_8] [i_7 + 2] [i_8 - 1] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1381084687U))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((4290946045U), (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)12)) - (((/* implicit */int) (unsigned char)78))))) : (((((/* implicit */_Bool) var_0)) ? (arr_21 [i_6] [i_7 + 2] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_27 [i_5] [i_6] [i_6] [i_10] [i_10])), (arr_26 [i_10] [i_10] [i_10])))))));
                                arr_34 [i_5] [i_5] [i_5 - 1] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_5 - 2] [i_5 - 2])) << (((max((((/* implicit */long long int) (unsigned short)65527)), (((long long int) arr_25 [i_5] [i_6] [i_6] [i_10])))) - (65514LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            {
                                arr_39 [i_13] [i_6] [i_7 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ ((~(((/* implicit */int) var_8))))))) < (max(((~(arr_32 [i_13 + 1]))), (((/* implicit */unsigned int) max((arr_18 [i_6]), (((/* implicit */int) arr_36 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5])))))))));
                                var_18 ^= ((/* implicit */unsigned short) ((unsigned char) (unsigned short)7963));
                                var_19 = ((/* implicit */unsigned short) max((-1723622191), (((/* implicit */int) (unsigned short)15))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
    var_21 = ((/* implicit */unsigned int) var_12);
    var_22 = ((/* implicit */unsigned char) var_13);
}
