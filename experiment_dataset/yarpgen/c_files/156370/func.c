/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156370
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (-((~(var_3)))));
        arr_2 [(unsigned short)14] = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_14))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1))))))));
        arr_6 [i_1] = ((/* implicit */signed char) var_10);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
            {
                {
                    arr_11 [i_1] [i_2] [10LL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
                    var_22 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 12; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (var_10)));
                                var_24 = ((/* implicit */short) (-(((/* implicit */int) var_18))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */short) (-(((/* implicit */int) var_5))));
                                arr_33 [i_4] [i_5] [i_10] [i_9] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (~(var_17)));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15)))))));
        arr_34 [i_4] = ((/* implicit */signed char) (~(9273550688447120153ULL)));
    }
    var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_9)))))))));
}
