/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173433
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
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_4)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~((~((-(var_5)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 17; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                        {
                            arr_12 [i_0] [i_0] [i_4] [i_1] [i_4] [i_4] = ((/* implicit */long long int) (+((-((-(((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                            arr_13 [i_0] [i_1 - 2] [i_0] [i_1] [i_4] = ((/* implicit */signed char) (+((-((-(((/* implicit */int) arr_4 [i_1]))))))));
                        }
                        for (short i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                        {
                            arr_16 [i_1] = ((/* implicit */short) (+((-((+(((/* implicit */int) arr_1 [i_1] [i_1]))))))));
                            var_12 += ((/* implicit */short) (-((-((+(((/* implicit */int) var_8))))))));
                            arr_17 [i_0] [i_1 + 3] [i_2] [i_3] [i_5] [i_2] [i_0] |= ((/* implicit */unsigned char) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                            var_13 += ((/* implicit */unsigned short) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 2; i_6 < 18; i_6 += 4) 
                        {
                            var_14 -= ((/* implicit */int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) var_1)))))))));
                            var_15 += ((/* implicit */signed char) (-((+((+(0LL)))))));
                            var_16 = ((/* implicit */unsigned char) (~((~(4294967295U)))));
                        }
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */short) (-((+((-(((/* implicit */int) arr_4 [i_0]))))))));
    }
    for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_8 = 2; i_8 < 9; i_8 += 3) 
        {
            arr_26 [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)16)))))))));
            /* LoopNest 3 */
            for (short i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned short) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) 2014702922U)))))))));
                            var_19 = ((/* implicit */short) (~((~((~(((/* implicit */int) var_7))))))));
                            var_20 -= ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) var_5))))))));
                            arr_34 [i_7] = (~((+((+(((/* implicit */int) arr_7 [i_10] [i_8 + 1] [i_8 - 2] [i_8 + 1])))))));
                        }
                    } 
                } 
            } 
            arr_35 [i_7] [i_7] [i_8] = ((/* implicit */signed char) (-((+((-(((/* implicit */int) (unsigned short)64058))))))));
            arr_36 [i_7] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-21741))));
        }
        for (short i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            arr_40 [i_12] [i_12] [i_7] = ((/* implicit */unsigned int) (-((~((~(-2048047848)))))));
            arr_41 [i_12] = ((/* implicit */unsigned short) (-((+((-(50189233U)))))));
        }
        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            arr_45 [i_13] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)64058))))));
            arr_46 [i_13] [i_7] [i_7] = ((/* implicit */signed char) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
            arr_47 [(unsigned short)3] [i_13] [i_13] = (-((-((-(10ULL))))));
        }
        var_21 = ((/* implicit */unsigned char) (-((+((-(arr_20 [i_7] [i_7] [i_7] [i_7] [i_7])))))));
        arr_48 [i_7] = ((/* implicit */signed char) (+((~((-(var_10)))))));
        var_22 = ((/* implicit */unsigned int) (-((-((~(((/* implicit */int) arr_1 [i_7] [i_7]))))))));
    }
    var_23 = ((/* implicit */unsigned short) (~((-((+(((/* implicit */int) (short)2011))))))));
    var_24 = ((/* implicit */short) (+((~((-(((/* implicit */int) (short)2011))))))));
    var_25 = ((/* implicit */short) (~((-((+(var_10)))))));
}
