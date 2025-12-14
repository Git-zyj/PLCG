/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145119
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_7 [1U] [i_1] = ((/* implicit */short) var_10);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-26797))))) : (((long long int) var_3))));
                var_14 ^= ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_2]))));
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) var_3);
                        arr_17 [i_4] [i_4] [(_Bool)0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) -390484467));
                        var_16 = ((/* implicit */_Bool) ((int) 341693144));
                        arr_18 [i_4] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) (~(((unsigned int) (signed char)49))));
                        arr_19 [i_4] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) (-(390484467)));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [(_Bool)1] [i_3] [i_5])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (18446744073709551615ULL)));
                        var_18 = ((/* implicit */short) ((int) (unsigned char)44));
                        arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) (signed char)70)))));
                        var_19 = ((/* implicit */long long int) ((unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                        var_20 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) arr_6 [i_3])))))));
                        var_22 = ((/* implicit */short) (+(arr_5 [i_0])));
                    }
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                    {
                        var_23 ^= ((/* implicit */_Bool) var_10);
                        var_24 = ((int) -1493432872);
                    }
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((unsigned long long int) (-(-3189976125964119942LL))));
                        arr_33 [i_0] [i_0] [i_2] [(_Bool)1] [i_8] = ((/* implicit */int) ((_Bool) var_12));
                    }
                }
                for (long long int i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (-((+(((/* implicit */int) (unsigned char)240)))))))));
                    arr_37 [i_9] [i_2] [i_2] [i_1] [i_1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 390484451)) ? (-390484460) : (((/* implicit */int) (_Bool)1))));
                    var_27 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (6239777687281047709ULL) : (((/* implicit */unsigned long long int) var_6))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_44 [i_10] [i_11] [i_11] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_7)) ? (-390484492) : (((/* implicit */int) var_8))))));
                        var_28 = ((/* implicit */unsigned char) (-(2147483647)));
                        var_29 = ((/* implicit */short) ((_Bool) var_2));
                    }
                    for (unsigned char i_12 = 3; i_12 < 15; i_12 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned char) 390484450);
                        arr_47 [i_0] [i_1] [i_2] [i_10] = ((/* implicit */unsigned long long int) (short)20729);
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((unsigned char) -1059732033749231594LL)))));
                        var_32 = ((/* implicit */signed char) (unsigned short)23137);
                        var_33 = ((/* implicit */unsigned short) (-(var_6)));
                    }
                    arr_48 [i_10] [1ULL] [1ULL] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)11))));
                    var_34 = ((/* implicit */unsigned short) arr_39 [i_10 - 1] [i_1] [i_0]);
                }
            }
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_35 &= ((/* implicit */unsigned short) ((_Bool) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]));
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 1; i_14 < 18; i_14 += 2) 
                {
                    arr_55 [i_14] [i_13] [i_1] [i_1] [i_13] [i_0] = ((/* implicit */signed char) ((long long int) arr_42 [(unsigned char)0] [(unsigned char)0] [i_13] [i_13] [4ULL]));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) 390484450)))));
                        var_37 = ((/* implicit */signed char) arr_1 [i_15]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        var_38 = ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) (unsigned char)11)));
                        var_39 = ((/* implicit */short) arr_58 [i_16] [17ULL] [i_13] [i_0] [i_1] [i_0]);
                        var_40 = ((/* implicit */unsigned char) (-(-2097152)));
                        arr_61 [i_13] [i_14] [i_13] = ((/* implicit */unsigned char) var_8);
                    }
                    for (short i_17 = 4; i_17 < 18; i_17 += 4) 
                    {
                        arr_64 [i_13] [i_1] [i_1] [i_14] [(_Bool)1] = ((/* implicit */long long int) var_3);
                        arr_65 [i_13] [i_1] [i_13] [i_13] [i_13] = ((unsigned char) (!(((/* implicit */_Bool) var_10))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned char i_18 = 0; i_18 < 19; i_18 += 2) 
                {
                    arr_68 [(short)2] [i_1] [i_1] [i_13] [(signed char)1] [i_13] = ((/* implicit */_Bool) -6390758689666955846LL);
                    /* LoopSeq 4 */
                    for (long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                    {
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (unsigned char)42))));
                        var_42 = ((/* implicit */unsigned int) ((signed char) arr_66 [i_19] [i_18]));
                        arr_71 [i_0] [i_1] [6LL] [i_13] [(unsigned char)12] [i_1] [7LL] = ((/* implicit */int) ((long long int) ((int) var_0)));
                        var_43 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (long long int i_20 = 4; i_20 < 17; i_20 += 2) 
                    {
                        arr_74 [i_0] [i_13] [i_1] [i_13] [i_18] [i_20] = ((/* implicit */long long int) ((_Bool) var_6));
                        arr_75 [i_20 - 2] [i_18] [i_13] [i_13] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((~(0U)))));
                    }
                    for (unsigned int i_21 = 0; i_21 < 19; i_21 += 4) 
                    {
                        var_44 = ((/* implicit */short) ((unsigned int) (_Bool)1));
                        var_45 &= ((/* implicit */unsigned int) arr_14 [i_18] [i_13] [i_1]);
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned int) arr_58 [i_1] [i_1] [i_13] [i_18] [i_22] [i_0]);
                        var_47 = ((/* implicit */_Bool) ((short) (_Bool)1));
                    }
                }
            }
        }
        var_48 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -5161519521071118613LL)) ? (1772297785) : (((/* implicit */int) (unsigned short)58551)))));
        var_49 = ((unsigned long long int) arr_62 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_50 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) 2776912569U)))));
}
