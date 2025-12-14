/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162514
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
    var_15 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_2);
        var_16 = ((/* implicit */short) var_7);
    }
    var_17 ^= ((/* implicit */short) var_12);
    /* LoopSeq 1 */
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((var_14) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(var_12))))))))))));
            var_19 = (+(((1199384500U) >> (((((/* implicit */int) var_9)) - (85))))));
            var_20 -= ((/* implicit */unsigned short) var_13);
            var_21 -= ((/* implicit */unsigned short) var_2);
        }
        var_22 = ((/* implicit */unsigned int) var_5);
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) (~((~(4029249330U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)154)) > (((/* implicit */int) (unsigned short)50477))));
                                arr_21 [i_6] [i_1] [(signed char)6] [3U] [i_1] [i_1 - 2] = ((/* implicit */unsigned short) var_12);
                                var_25 -= (~(((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    var_26 -= ((/* implicit */unsigned short) var_13);
                    var_27 = var_14;
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_7 = 3; i_7 < 16; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) var_14);
                        var_29 = ((/* implicit */short) var_2);
                        var_30 = ((/* implicit */unsigned int) var_6);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (short i_10 = 1; i_10 < 18; i_10 += 1) 
    {
        for (unsigned int i_11 = 4; i_11 < 16; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                {
                    var_31 = ((/* implicit */short) var_10);
                    var_32 = ((/* implicit */long long int) var_5);
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_13))))))))) ^ (var_14)));
                    var_34 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_6))));
                    arr_38 [i_11 - 1] = ((/* implicit */unsigned int) (-((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (var_10)))))));
                }
            } 
        } 
    } 
}
