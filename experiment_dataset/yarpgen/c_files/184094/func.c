/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184094
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
    var_20 ^= ((/* implicit */short) var_4);
    var_21 = ((/* implicit */int) var_12);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_22 = ((((/* implicit */int) ((signed char) arr_1 [i_0]))) + (arr_1 [i_0]));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(((arr_3 [i_0] [(unsigned short)0] [i_0]) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [(short)19] [i_1]))))))))))));
            arr_5 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))) : (arr_0 [i_0] [i_1])))))) < ((~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) : (var_10)))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */long long int) arr_2 [i_3] [i_3]);
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) ((_Bool) ((arr_8 [i_0] [i_0]) << (((5588490191510455899LL) - (5588490191510455891LL))))));
                        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_4]))));
                        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2062870735U))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_3] [i_6]));
                        var_29 = ((/* implicit */int) (+(arr_12 [i_0] [(unsigned short)3] [i_3] [i_4])));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0])) < (((/* implicit */int) arr_10 [i_0]))));
                        var_31 = ((((/* implicit */_Bool) ((long long int) arr_0 [i_4] [i_2]))) || (((/* implicit */_Bool) ((unsigned short) var_8))));
                        arr_22 [i_0] [i_2] [i_3] [i_4] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_0] [i_2] [i_3] [i_4] [i_7] [i_7])) - (((/* implicit */int) (short)32748))));
                    }
                    var_32 = ((signed char) arr_7 [i_2] [i_3]);
                    arr_23 [(_Bool)1] [i_0] [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]);
                }
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_27 [i_0] [i_2] [i_8] = ((/* implicit */short) 3594048970U);
                arr_28 [i_0] [i_8] [i_0] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_8]))));
                var_33 *= ((/* implicit */short) 5588490191510455900LL);
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                arr_31 [i_0] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_9])) - (((/* implicit */int) arr_6 [i_0] [i_9]))));
                var_34 = ((/* implicit */long long int) ((arr_10 [i_2]) && (arr_10 [i_0])));
            }
            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))));
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
        {
            arr_34 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_29 [i_10] [7]) ^ (arr_29 [i_0] [i_10])));
            var_36 = ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [(short)9])) < (((/* implicit */int) var_11))));
            var_37 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_10] [i_10]))));
        }
    }
}
