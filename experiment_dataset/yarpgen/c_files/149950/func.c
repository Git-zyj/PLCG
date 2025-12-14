/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149950
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_11))));
    var_14 = var_8;
    var_15 = ((/* implicit */unsigned short) 0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (unsigned char)167);
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_16 = ((/* implicit */int) (unsigned char)88);
            arr_7 [i_0] [i_1] = (unsigned char)89;
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (unsigned short)45500);
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 3; i_3 < 19; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), ((unsigned short)45642)));
                            var_18 = ((/* implicit */int) (signed char)-27);
                            arr_20 [i_0] [i_2] [i_2] [i_4] [(_Bool)1] = ((/* implicit */int) (_Bool)0);
                            arr_21 [i_2] [i_5] = ((/* implicit */unsigned short) 37320688);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_7 = 1; i_7 < 18; i_7 += 3) 
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (unsigned short)20036))));
                    var_20 = (unsigned short)42819;
                    var_21 *= ((/* implicit */signed char) (unsigned short)10067);
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_22 -= ((/* implicit */unsigned long long int) (unsigned char)167);
                        var_23 = ((/* implicit */unsigned short) 2142216304U);
                        arr_30 [i_2] [i_8] = ((/* implicit */signed char) (_Bool)0);
                        var_24 += ((/* implicit */_Bool) (unsigned char)128);
                    }
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                    {
                        var_25 = (unsigned short)45500;
                        var_26 = ((/* implicit */int) (short)-13743);
                    }
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                    {
                        arr_36 [i_2] = ((/* implicit */int) (_Bool)0);
                        arr_37 [i_0] [i_2] [i_6] [i_7] [i_6] [i_2] = ((/* implicit */signed char) (unsigned short)45500);
                    }
                    var_27 = ((/* implicit */unsigned char) (_Bool)1);
                }
                var_28 += ((/* implicit */_Bool) 0U);
                var_29 ^= (unsigned char)0;
                var_30 = ((/* implicit */int) (unsigned short)8128);
            }
            arr_38 [i_2] = ((/* implicit */unsigned char) (unsigned short)32038);
            arr_39 [i_0] [i_0] &= ((/* implicit */int) (unsigned char)0);
        }
    }
}
