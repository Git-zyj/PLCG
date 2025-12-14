/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106672
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) -1LL))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 4; i_3 < 7; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) 977670486U)) & (-7272698536710066825LL))), (((/* implicit */long long int) 3317296809U))));
                        var_17 *= ((/* implicit */unsigned long long int) ((signed char) var_6));
                    }
                    arr_11 [i_0] [i_2] = ((/* implicit */_Bool) (+((+(((((/* implicit */int) var_10)) - (((/* implicit */int) var_8))))))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) 977670487U))));
                }
                for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) -9LL))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned short) (-(((/* implicit */int) var_15))));
                                var_21 = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_18 [i_5] [i_0] [i_0 - 1])))), (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((3317296807U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -7272698536710066825LL)))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)21925))));
                                var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                                arr_30 [i_8] [i_8] [i_0] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) arr_7 [i_9] [i_1 - 1] [i_0 + 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_7 [i_0] [i_9] [i_0 + 1] [i_1 + 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1)))))));
                        arr_33 [i_0] [i_1] [7] [i_1] = ((unsigned short) ((3317296807U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                        var_25 = ((/* implicit */int) var_4);
                    }
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_11), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-32753))))))))) : (((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 3171498430U)) : (arr_17 [i_0 - 1] [i_7] [i_7] [i_0] [i_1] [i_7])))))))));
                }
                var_27 = arr_21 [i_0] [i_0] [i_1] [i_0 + 1] [i_1 - 1];
            }
        } 
    } 
}
