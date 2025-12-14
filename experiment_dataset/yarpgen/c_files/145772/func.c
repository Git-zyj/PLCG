/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145772
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
    var_13 = 5;
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) 83031611U);
        arr_4 [i_0] [i_0] = -119132068;
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_8 [i_1] = ((unsigned int) ((unsigned int) -1));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((int) ((unsigned char) 238139914U)));
        arr_10 [i_1] = ((int) ((unsigned char) 4056827382U));
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_15 *= ((unsigned char) (unsigned char)214);
        var_16 = ((/* implicit */int) ((unsigned char) 4056827381U));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (unsigned char i_4 = 4; i_4 < 11; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    {
                        arr_20 [i_2] [(unsigned char)0] [i_3] [i_3] [i_3] [i_5] = ((unsigned char) ((int) 1798485871U));
                        arr_21 [i_2] [i_2] [i_4 + 2] [i_5] &= ((/* implicit */int) 2821954996U);
                        var_17 = ((/* implicit */unsigned char) 4056827385U);
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                        {
                            arr_24 [i_2] [i_3] [i_3] [i_4] [i_3] [i_5] [i_3] = ((/* implicit */int) ((unsigned char) ((unsigned int) 238139911U)));
                            var_18 = (unsigned char)63;
                        }
                        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                        {
                            var_19 = ((unsigned int) ((int) 4056827382U));
                            var_20 *= ((/* implicit */unsigned char) ((unsigned int) (unsigned char)153));
                            arr_27 [i_3] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */int) ((unsigned int) (unsigned char)12));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 10; i_8 += 4) 
        {
            for (unsigned int i_9 = 3; i_9 < 12; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) 357253073);
                        var_22 ^= ((/* implicit */unsigned char) 3079107460U);
                        arr_35 [i_2] [i_9] [i_9] [i_10] [i_9] [i_2] = ((/* implicit */int) ((unsigned int) (unsigned char)238));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((unsigned char) ((unsigned char) 238139911U)))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((int) ((unsigned char) (unsigned char)245))))));
                    }
                } 
            } 
        } 
        arr_36 [i_2] = (unsigned char)0;
    }
    for (int i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((unsigned int) ((unsigned char) (unsigned char)0))))));
        var_26 -= ((unsigned char) 724998571U);
        arr_40 [i_11] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) ((unsigned int) (unsigned char)74))));
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            for (int i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    {
                        arr_50 [i_11] [i_11] [i_13] [i_11] = ((/* implicit */unsigned char) 858863931);
                        arr_51 [i_14] [i_13] [i_13] [i_12] [i_11] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)14));
                        arr_52 [(unsigned char)0] [i_11] [i_13] |= ((/* implicit */int) 958929670U);
                        var_27 = ((/* implicit */unsigned char) ((int) (-2147483647 - 1)));
                        var_28 ^= (unsigned char)48;
                    }
                } 
            } 
        } 
        arr_53 [i_11] = ((/* implicit */unsigned char) ((unsigned int) ((int) 4056827382U)));
    }
    var_29 += ((/* implicit */int) ((unsigned char) var_7));
}
