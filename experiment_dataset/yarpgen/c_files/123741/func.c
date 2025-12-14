/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123741
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_4);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_8 [i_1 - 1] [i_1 + 1]), (arr_8 [i_1 - 1] [i_1 + 1])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 1]))))));
                    var_10 = ((/* implicit */short) min((((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)5] [(unsigned char)5])) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) var_5)))) < (((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [6] [i_2])), (var_1))))))), (((unsigned short) ((unsigned long long int) arr_3 [i_2 + 1] [i_1 + 1])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        var_11 = ((/* implicit */int) (~(arr_7 [i_3] [i_3] [i_3] [i_3])));
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)112)) >= (((/* implicit */int) (unsigned short)15673))));
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 2) 
        {
            var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4 - 2] [i_4 - 1]))) : (arr_1 [i_4 - 1])));
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(arr_1 [i_4 + 1]))))));
        }
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
        {
            var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))));
            /* LoopSeq 2 */
            for (unsigned short i_6 = 2; i_6 < 20; i_6 += 3) 
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((unsigned char) 1626567449)))));
                var_16 = ((/* implicit */int) ((unsigned char) 1626567458));
                var_17 = ((/* implicit */int) (unsigned char)231);
                arr_23 [i_3] [i_3] = ((/* implicit */int) (unsigned short)2);
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_7])) >= (((/* implicit */int) (unsigned short)53164)))))) | (arr_25 [i_5])));
                var_19 = ((/* implicit */int) arr_5 [i_3] [(_Bool)1] [i_7]);
                arr_27 [14ULL] |= (!(((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3] [(unsigned char)19])));
            }
            arr_28 [i_3] [i_5] [i_3] = ((/* implicit */unsigned int) var_3);
        }
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
            /* LoopNest 2 */
            for (signed char i_9 = 1; i_9 < 19; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_12 [i_10]))));
                        var_22 = ((/* implicit */short) arr_1 [i_3]);
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((9763449849438308195ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            arr_41 [i_3] [i_3] [i_8] [i_3] [(_Bool)1] [i_11] = arr_29 [i_9 + 1] [i_9 + 1] [i_3];
                            var_24 = ((/* implicit */int) arr_11 [i_3]);
                        }
                    }
                } 
            } 
            var_25 = ((/* implicit */signed char) (-(arr_22 [i_3] [i_3])));
            var_26 = ((/* implicit */signed char) arr_21 [i_3]);
        }
    }
    var_27 &= ((/* implicit */int) max((((/* implicit */unsigned short) min((((62644033) >= (((/* implicit */int) (signed char)79)))), ((!(((/* implicit */_Bool) var_5))))))), ((unsigned short)16)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
    {
        var_28 -= ((/* implicit */unsigned char) arr_18 [i_12]);
        var_29 &= ((/* implicit */int) (!(((/* implicit */_Bool) (-(3717525479363247047LL))))));
    }
}
