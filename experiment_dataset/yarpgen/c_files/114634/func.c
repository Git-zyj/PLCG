/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114634
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
    var_12 -= ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */signed char) (~(max((((/* implicit */long long int) var_9)), (min((0LL), (((/* implicit */long long int) var_2))))))));
                        arr_9 [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_0))));
                    }
                } 
            } 
            arr_10 [i_0] [i_1] = ((/* implicit */signed char) (+(var_11)));
            var_14 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) (short)29189)))))))));
        }
        arr_11 [i_0] = ((/* implicit */int) 4294967294U);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_9))) << (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) ((short) (unsigned short)0))))))));
        arr_12 [i_0] = ((/* implicit */int) (signed char)-64);
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    {
                        arr_19 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [(signed char)6] [i_4]))))) / (((((/* implicit */_Bool) var_5)) ? ((+(19U))) : (((/* implicit */unsigned int) (-(1677694641))))))));
                        var_16 = ((/* implicit */short) var_0);
                    }
                } 
            } 
        } 
    }
}
