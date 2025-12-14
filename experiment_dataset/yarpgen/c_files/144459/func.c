/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144459
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0]))));
        arr_2 [i_0] |= ((/* implicit */_Bool) (+(67108863U)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) (~((~(15362312402518203934ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
                        var_16 ^= ((/* implicit */long long int) (-((-(((/* implicit */int) arr_0 [i_1]))))));
                    }
                    var_17 += ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    arr_11 [i_0] [i_0] [i_1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 9658408014655086977ULL))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_1 [i_2]))))));
                                var_18 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))));
                                arr_20 [i_0] [i_2] [i_2] [i_2] [i_4] [i_4] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned long long int) (!((_Bool)0)));
                    arr_29 [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_8] [i_7])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(1091332668U))))));
                                arr_36 [(unsigned char)7] [i_7] [(unsigned char)7] [(unsigned char)7] [i_9] [i_6] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(2419581596U)))))))));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 5850169540222424937ULL)))))))));
                                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_4)))))))));
                                var_24 = ((/* implicit */unsigned long long int) (+((~((~(((/* implicit */int) arr_28 [(signed char)9]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_6] [i_12]))))))))));
                    var_26 &= ((/* implicit */short) (~((-(15354463540577667042ULL)))));
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) (~((-(1875385700U)))));
    }
    var_28 = ((/* implicit */unsigned long long int) var_9);
}
