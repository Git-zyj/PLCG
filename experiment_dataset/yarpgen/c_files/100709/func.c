/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100709
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (max(((+(var_13))), (var_12)))));
    var_20 = ((/* implicit */unsigned short) var_18);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */int) var_2)), (max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)0))))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) min((var_5), (((/* implicit */long long int) var_16)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) : ((~(((/* implicit */int) (signed char)0))))));
    }
    for (unsigned short i_1 = 3; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1 - 2] [i_3 + 1] [(unsigned short)18]))) + (arr_7 [i_1] [i_1 - 2]))))))));
                    var_24 = ((/* implicit */unsigned int) arr_8 [i_1]);
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 2; i_5 < 23; i_5 += 3) 
                        {
                            arr_15 [i_1] [i_2] [(short)3] [i_4] [(unsigned short)17] [i_5 - 2] [i_5] = ((/* implicit */short) var_3);
                            arr_16 [i_3] [i_4] [i_1] [i_1] [i_2] [(short)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1] [i_3 + 1] [i_1])) : (((/* implicit */int) (unsigned short)65513))))) ? (((/* implicit */int) ((unsigned short) arr_10 [(_Bool)1] [i_2] [i_3 + 1] [i_1]))) : (((/* implicit */int) ((unsigned short) var_6)))));
                        }
                        arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_14)), (var_13)))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1]))) <= (var_3)))))), (((/* implicit */int) ((unsigned short) (short)27)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_9 [12LL])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                            arr_20 [i_1] [10U] [i_3 + 1] [(_Bool)1] [i_1] [i_6] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */unsigned short) max(((short)-11), ((short)1)))), (var_14))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 21; i_7 += 4) 
                        {
                            var_26 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */int) max(((short)32767), (((/* implicit */short) (signed char)0))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (short)16380)))))), (((/* implicit */int) max((((unsigned short) var_15)), (((/* implicit */unsigned short) max((var_7), ((short)-16361)))))))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (!(((((/* implicit */_Bool) 1331056595U)) && (((/* implicit */_Bool) max((9223372036854775807LL), (9223372036854775807LL)))))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_28 *= ((/* implicit */unsigned int) arr_5 [i_1]);
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) (short)0))) < (((/* implicit */int) var_17))))) ^ (((/* implicit */int) max((max(((unsigned short)1536), (((/* implicit */unsigned short) var_2)))), (((/* implicit */unsigned short) min(((short)-19847), (((/* implicit */short) arr_24 [i_1] [i_1] [i_3] [i_3] [i_3]))))))))));
                            arr_26 [i_8] [i_1] [6LL] [i_8] [6LL] [i_8] [i_8] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_25 [i_2] [19U] [i_2] [i_3 + 1] [i_1] [i_2] [i_8])) : (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_3 + 1] [i_4] [i_2] [i_4])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65532)) && (((/* implicit */_Bool) var_1)))))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (-((~(((/* implicit */int) (short)0)))))))));
                        arr_29 [i_1 - 2] [i_1] [i_3 + 1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (5236917563877377995LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1])))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    {
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((max((((/* implicit */long long int) var_16)), (arr_38 [i_10] [i_12]))) & (((/* implicit */long long int) (+(arr_7 [i_1] [i_1])))))) % (((/* implicit */long long int) min((((/* implicit */int) (short)-13520)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-16386)) : (((/* implicit */int) (short)19820))))))))))));
                        arr_39 [i_1] = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) ((unsigned short) 5522925099047619097LL))))));
                        arr_40 [i_1] [i_10] [i_11] [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) var_3)))));
                        var_32 = ((/* implicit */unsigned short) max((((/* implicit */short) (signed char)-1)), (((short) max((var_18), (((/* implicit */long long int) (short)-1)))))));
                        arr_41 [i_1 - 1] [i_10] [i_1] [i_12] = ((/* implicit */long long int) (unsigned short)30549);
                    }
                } 
            } 
        } 
        arr_42 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_1])) >= ((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [21LL] [i_1] [i_1] [i_1 - 3]))) == (arr_8 [i_1]))))))));
        /* LoopNest 3 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (signed char i_14 = 2; i_14 < 22; i_14 += 3) 
            {
                for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) 
                {
                    {
                        var_33 = arr_50 [i_1 + 1] [i_1 + 1] [i_15] [i_1 + 1] [i_14] [i_14 + 1];
                        arr_53 [i_1] [i_1] [i_14] [i_1] [i_13] = ((/* implicit */short) (~(((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
    {
        arr_57 [i_16] = ((/* implicit */_Bool) var_5);
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_55 [i_16] [i_16])))))));
    }
    /* vectorizable */
    for (short i_17 = 3; i_17 < 14; i_17 += 1) 
    {
        arr_61 [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_32 [i_17 - 1] [i_17 + 4] [i_17 + 3] [(short)17]) : (var_13)));
        arr_62 [i_17] [i_17] = ((/* implicit */_Bool) ((arr_52 [i_17 + 4] [i_17 + 4] [i_17 + 3]) & (((/* implicit */long long int) 0U))));
    }
}
