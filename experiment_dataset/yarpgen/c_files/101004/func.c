/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101004
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_18 = max((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) && (((/* implicit */_Bool) (-(var_3))))))), (1075410052));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((1075410052) > (((/* implicit */int) (short)171)))))));
        var_20 = ((/* implicit */unsigned short) max((max((1075410052), (1075410039))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (arr_0 [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
        var_21 = (-(min((((/* implicit */int) (_Bool)0)), (-1696546145))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1696546116)) ? (-1696546145) : (-1075410066)));
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) 1335770113U));
        }
        for (int i_2 = 2; i_2 < 8; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            var_24 = ((/* implicit */unsigned long long int) max((((arr_4 [i_2 - 2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) > (((((/* implicit */int) var_13)) & (((/* implicit */int) arr_6 [i_0])))))))));
            arr_9 [i_0] [i_2] [i_2 - 2] = min((var_16), (((/* implicit */int) arr_6 [i_0])));
        }
        for (unsigned int i_3 = 3; i_3 < 8; i_3 += 2) 
        {
            arr_12 [i_3] = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) -669332864)))))) + (max(((-(-5791538628162509359LL))), (((/* implicit */long long int) ((1075410052) % (1696546154))))))));
            var_25 += ((/* implicit */_Bool) arr_4 [i_3]);
            var_26 = ((/* implicit */short) (-(-1075410052)));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                arr_15 [i_4] [i_3] [i_3] [1LL] = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_15))))))) & (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_4] [(unsigned short)2])) || (((/* implicit */_Bool) (signed char)54)))) && (((/* implicit */_Bool) var_1)))))));
                arr_16 [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((((/* implicit */unsigned long long int) arr_10 [i_0] [5LL])) + (min((var_6), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))) - (237409017559342615ULL)))));
            }
            /* vectorizable */
            for (unsigned short i_5 = 1; i_5 < 7; i_5 += 4) 
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17290995927442301685ULL)) ? (((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11325))) : (17290995927442301685ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_28 = ((/* implicit */unsigned int) var_16);
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 9; i_6 += 3) 
                {
                    for (short i_7 = 3; i_7 < 9; i_7 += 4) 
                    {
                        {
                            var_29 = var_13;
                            arr_24 [(short)8] [i_3] [(short)8] [i_6] [i_3] [i_3] = ((/* implicit */unsigned short) arr_3 [i_0] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) ((int) arr_18 [i_5 + 3] [i_5 + 3] [i_5] [i_5]));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (-(((((-1075410078) + (2147483647))) << (((((/* implicit */int) arr_28 [i_9] [i_3] [i_3] [i_3 - 3] [(unsigned short)6])) - (8964))))))))));
                            var_32 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (unsigned char)197))));
                            arr_31 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((17290995927442301685ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) var_16))));
                            arr_32 [(unsigned short)8] [i_8] [i_3] [i_8] [i_8] [(unsigned char)5] [9ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_0 [i_3 + 2]))));
                        }
                    } 
                } 
            }
        }
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned short) var_16);
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    {
                        var_34 = var_11;
                        var_35 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_19 [i_10] [8ULL] [i_12] [(unsigned char)4])) + (2147483647))) >> (((((/* implicit */int) arr_26 [i_10])) - (41449)))));
                        var_36 = ((/* implicit */_Bool) (((~(var_12))) << ((((~(((/* implicit */int) (unsigned char)152)))) + (176)))));
                    }
                } 
            } 
        } 
        arr_46 [i_10] [i_10] = ((/* implicit */_Bool) (-(1075410038)));
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) 
    {
        var_37 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) (+(var_16))))));
        /* LoopNest 3 */
        for (long long int i_15 = 2; i_15 < 23; i_15 += 3) 
        {
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                for (signed char i_17 = 3; i_17 < 21; i_17 += 2) 
                {
                    {
                        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_1)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 2; i_18 < 24; i_18 += 3) 
                        {
                            var_39 = ((((((/* implicit */_Bool) arr_51 [i_14])) ? (((/* implicit */int) arr_55 [i_14] [(_Bool)1] [i_14] [i_17] [(_Bool)1])) : (((/* implicit */int) (short)0)))) >= (var_16));
                            arr_59 [i_14] [16ULL] [i_14] [(unsigned char)13] [i_17] = ((((/* implicit */_Bool) arr_57 [i_18 + 1])) ? (1987313254U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_19 = 0; i_19 < 25; i_19 += 4) 
        {
            var_40 -= ((/* implicit */unsigned int) ((arr_60 [i_14] [i_19]) / (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_14] [i_14] [i_14] [i_14] [i_14])))));
            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) var_8))));
        }
        arr_62 [8LL] [(unsigned short)12] |= ((/* implicit */short) ((((/* implicit */int) arr_55 [i_14] [i_14] [i_14] [i_14] [i_14])) / ((-(((/* implicit */int) arr_49 [20]))))));
    }
    for (int i_20 = 0; i_20 < 14; i_20 += 3) 
    {
        var_42 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (max((((/* implicit */unsigned int) 1075410078)), (arr_51 [(short)0])))))) ? (((/* implicit */int) var_7)) : (((((((/* implicit */int) var_14)) + (((/* implicit */int) (unsigned short)32768)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_20] [i_20] [i_20] [i_20] [(short)6])) || (((/* implicit */_Bool) var_0)))))))));
        arr_66 [i_20] = ((/* implicit */_Bool) (+(max((-1696546145), (-1976841285)))));
    }
    var_43 -= ((/* implicit */unsigned int) var_3);
}
