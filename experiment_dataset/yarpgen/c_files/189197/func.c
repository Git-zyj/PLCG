/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189197
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
    var_12 = ((/* implicit */int) var_2);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 -= ((/* implicit */int) var_6);
        arr_2 [i_0] = var_1;
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5)));
        var_15 = ((/* implicit */unsigned short) var_9);
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_11) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            var_17 = ((/* implicit */int) var_1);
            var_18 = ((/* implicit */int) var_7);
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_11)) : (var_5)));
            arr_12 [i_2] = ((/* implicit */_Bool) var_2);
        }
        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_20 = ((/* implicit */long long int) var_2);
            var_21 = var_11;
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (var_4)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */int) var_2)))))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (int i_7 = 3; i_7 < 12; i_7 += 3) 
                {
                    {
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_9)) ? (var_0) : (var_0))));
                        var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (var_9)))) ? (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */int) var_2)))) : ((((_Bool)0) ? (((/* implicit */int) (short)-3)) : (((/* implicit */int) (unsigned char)153))))));
                        var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */int) var_2))));
                        arr_22 [5ULL] [5ULL] [(short)9] = ((/* implicit */short) var_4);
                        arr_23 [i_7 - 3] [i_6] [i_2] [i_2] [i_2] = ((/* implicit */short) var_0);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            var_26 += ((/* implicit */unsigned char) var_5);
            var_27 += ((/* implicit */_Bool) var_2);
        }
        var_28 = ((/* implicit */_Bool) var_5);
    }
    for (int i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        var_29 = ((/* implicit */unsigned char) var_2);
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))));
            arr_32 [i_10] [i_9] = ((/* implicit */short) var_6);
        }
    }
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (int i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            {
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) var_10)))) : (var_11))))));
                var_32 = ((/* implicit */long long int) var_11);
                arr_37 [i_12] [i_11] [i_11] = ((/* implicit */unsigned char) var_11);
                arr_38 [i_12] [13ULL] [i_12] = ((/* implicit */_Bool) var_8);
            }
        } 
    } 
    var_33 *= ((/* implicit */short) var_8);
}
