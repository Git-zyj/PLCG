/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178970
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [(unsigned char)7] [i_2] = arr_6 [i_0 - 1];
                    arr_8 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) max((3ULL), (18446744073709551613ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_17 = (unsigned char)19;
                                var_18 = ((unsigned char) (unsigned char)219);
                                arr_16 [i_0] [i_1] [i_2 + 2] [i_2] [i_3] [i_1] [(unsigned char)4] = ((/* implicit */unsigned char) ((arr_0 [i_1] [(unsigned char)5]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_1 - 1] [i_0 + 1])) < (((/* implicit */int) var_13))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((unsigned char) (~(var_10)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 3) 
        {
            for (unsigned char i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            arr_31 [i_5] [(unsigned char)4] [i_5] [i_5] = ((/* implicit */unsigned char) arr_29 [i_7 - 1] [i_6 + 2] [i_5 - 2]);
                            var_20 = ((/* implicit */unsigned char) var_7);
                        }
                        arr_32 [i_5] [i_7] [i_6 + 2] [i_6 + 2] [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)128)), (824056967162149692ULL)));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            var_21 = ((unsigned char) ((unsigned long long int) min((arr_9 [i_5] [i_6] [i_7 + 1] [i_8] [i_10]), (var_12))));
                            var_22 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_25 [i_5 + 1] [i_5 + 1] [i_6 - 1]))))));
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) arr_22 [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5]);
        arr_35 [(unsigned char)2] |= ((/* implicit */unsigned long long int) arr_34 [i_5] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1]);
        arr_36 [i_5] = ((/* implicit */unsigned char) min((((5488267456923852861ULL) >> (((/* implicit */int) (unsigned char)24)))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)44)))));
    }
    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 2) 
    {
        var_24 = ((unsigned char) var_5);
        arr_40 [(unsigned char)10] [i_11] = ((/* implicit */unsigned char) min((((/* implicit */int) var_9)), ((-(((/* implicit */int) var_8))))));
    }
    for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 3) 
    {
        arr_43 [i_12] = ((unsigned char) (!(((/* implicit */_Bool) arr_6 [i_12 - 1]))));
        /* LoopSeq 2 */
        for (unsigned char i_13 = 1; i_13 < 8; i_13 += 3) /* same iter space */
        {
            var_25 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_13]))));
            /* LoopSeq 2 */
            for (unsigned char i_14 = 1; i_14 < 9; i_14 += 3) 
            {
                arr_50 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5488267456923852861ULL)) || (((/* implicit */_Bool) ((arr_46 [i_14] [i_12 + 1]) & (arr_46 [i_12] [i_12 - 1]))))));
                var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9028430001784335848ULL))));
            }
            for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                var_27 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_13 + 2])) <= (((/* implicit */int) (unsigned char)218))));
                var_28 &= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_48 [i_12 - 1] [i_13 + 2] [i_12 - 1])) % (((/* implicit */int) arr_48 [(unsigned char)8] [i_13 - 1] [i_12 - 1])))));
            }
        }
        /* vectorizable */
        for (unsigned char i_16 = 1; i_16 < 8; i_16 += 3) /* same iter space */
        {
            arr_57 [i_12] = ((/* implicit */unsigned char) var_15);
            var_29 = ((/* implicit */unsigned long long int) ((unsigned char) 2626990076128687470ULL));
            var_30 = ((/* implicit */unsigned long long int) ((unsigned char) var_7));
            arr_58 [i_12] [i_16] [i_16] = ((/* implicit */unsigned char) (+(arr_30 [i_12] [i_12] [3ULL] [i_12] [i_16 - 1] [i_16 + 1] [i_16])));
        }
    }
}
