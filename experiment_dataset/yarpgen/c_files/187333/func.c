/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187333
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
    var_20 = (~((+(6867232498119467628LL))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)0))));
                        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                        var_23 = ((/* implicit */short) (~(6867232498119467607LL)));
                    }
                    /* vectorizable */
                    for (short i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(6867232498119467633LL))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_25 = (!(((/* implicit */_Bool) (unsigned char)17)));
                            var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        }
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (-((~(-3720593173125943708LL))))))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (~((~(6867232498119467607LL))))))));
                        var_29 = ((/* implicit */unsigned short) (short)-21436);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        var_30 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 10111029061916970325ULL)))))));
                        var_31 |= ((/* implicit */unsigned long long int) (short)-21425);
                        arr_22 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-11780))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 3) 
                        {
                            arr_27 [i_0] [i_1] [i_0] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)67)))))));
                            var_32 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                        }
                        var_33 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(6867232498119467623LL))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        var_34 *= (_Bool)1;
                        var_35 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)3326))));
                        arr_30 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)32))));
                    }
                    var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)17))));
                    arr_31 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)3330))));
                    var_37 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(3297821150U)))))))));
                }
            } 
        } 
    } 
}
