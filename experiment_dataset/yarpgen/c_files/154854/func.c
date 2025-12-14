/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154854
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | ((((~(((/* implicit */int) arr_0 [i_0] [i_0])))) | (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((var_2) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30736)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))) ? (var_5) : (648850403203768043ULL)));
    }
    var_17 = ((/* implicit */unsigned long long int) (unsigned short)24174);
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */int) (((_Bool)1) ? (2653584960513224915ULL) : (((/* implicit */unsigned long long int) arr_6 [i_2]))));
            var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) 18446744073709551605ULL)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1])))));
        }
        for (short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            arr_11 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (short)30034))));
            var_19 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)63)) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) arr_10 [(short)1] [i_3] [i_3]))));
        }
        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_6 [i_4]))));
            var_21 = ((/* implicit */unsigned short) (+(8046356179716117759ULL)));
            arr_15 [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) 67043328ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_5)))));
            arr_16 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_1] [i_4] [i_1])) != (((/* implicit */int) (unsigned short)15))));
            var_22 = (_Bool)1;
        }
        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [i_5] [i_5])) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_4)))))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_1] [i_5] [i_1])) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1]))));
            arr_19 [(short)4] [i_5] = 67043328ULL;
            arr_20 [i_1] [i_5] = ((/* implicit */int) var_15);
            var_25 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)24174))));
        }
        var_26 += ((/* implicit */_Bool) ((5833436103011442006ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3968)))));
        var_27 &= ((/* implicit */_Bool) var_13);
        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1])) + (((/* implicit */int) (unsigned short)65535))));
    }
    for (int i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        var_29 -= ((/* implicit */unsigned short) ((((/* implicit */int) (short)63)) - (((/* implicit */int) (_Bool)1))));
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_6] [i_6]))))) ? (max((((/* implicit */unsigned long long int) (short)-10305)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) var_9)))))))))));
        var_31 = ((/* implicit */unsigned short) (short)(-32767 - 1));
        arr_23 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_6] [i_6])) && (arr_22 [i_6])));
        arr_24 [i_6] = ((/* implicit */_Bool) var_11);
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)52166)) ? ((-(33554368))) : (((/* implicit */int) var_10)))))));
        arr_27 [(unsigned short)11] = arr_13 [i_7] [i_7] [i_7];
        arr_28 [i_7] = ((/* implicit */short) (unsigned short)24174);
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            var_33 = ((/* implicit */_Bool) (short)16608);
            arr_33 [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */int) (short)-6179)) != (((/* implicit */int) arr_22 [i_7]))));
            var_34 = ((/* implicit */short) 18446744073709551615ULL);
            /* LoopNest 3 */
            for (unsigned short i_9 = 1; i_9 < 15; i_9 += 3) 
            {
                for (short i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                            arr_45 [i_7] [(short)13] [i_10] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19114)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-4921))))) || (((/* implicit */_Bool) var_5))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                arr_48 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_2)) : (arr_6 [i_8])));
                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) arr_38 [i_7] [i_7] [(short)2] [i_8] [i_12] [(short)2]))));
            }
        }
        for (short i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            var_37 = ((/* implicit */int) var_0);
            /* LoopSeq 1 */
            for (short i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    arr_57 [i_13] &= ((/* implicit */_Bool) ((((/* implicit */int) (short)2048)) | (((/* implicit */int) (unsigned short)22926))));
                    arr_58 [i_7] [i_7] [i_7] [i_14] = arr_5 [i_15];
                }
                arr_59 [i_14] [i_13] [i_14] [(unsigned short)5] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) (short)63)) - (60)))));
                var_38 = ((/* implicit */short) (+(((/* implicit */int) (short)20343))));
                var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_14] [i_13])) ? (arr_18 [(_Bool)1] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16619)))));
                /* LoopSeq 2 */
                for (int i_16 = 3; i_16 < 14; i_16 += 3) 
                {
                    var_40 = ((/* implicit */short) (_Bool)1);
                    var_41 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) -711864599)) / (arr_14 [i_16 + 2])));
                    arr_63 [i_7] [i_14] [i_13] [i_14] [(unsigned short)2] [i_16] = ((/* implicit */unsigned long long int) arr_29 [i_7] [(short)0] [(short)6]);
                    var_42 = ((/* implicit */int) min((var_42), ((-(var_3)))));
                }
                for (short i_17 = 0; i_17 < 16; i_17 += 2) 
                {
                    var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31951))))))));
                    var_44 = ((/* implicit */unsigned short) var_8);
                }
            }
        }
        var_45 -= ((/* implicit */unsigned short) ((620131413) & (((/* implicit */int) (short)-755))));
    }
    for (short i_18 = 0; i_18 < 16; i_18 += 1) /* same iter space */
    {
        arr_70 [i_18] = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_8)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_8))) : (min((812482769381584046ULL), (((/* implicit */unsigned long long int) (short)4903))))))));
        var_46 = ((/* implicit */unsigned short) var_15);
        var_47 = ((/* implicit */int) (!((_Bool)1)));
    }
}
