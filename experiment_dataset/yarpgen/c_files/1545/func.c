/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1545
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
    var_10 = ((/* implicit */unsigned char) (+(((int) (!(((/* implicit */_Bool) var_1)))))));
    var_11 = ((/* implicit */signed char) (-(((/* implicit */int) (short)20095))));
    var_12 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) <= (-25930541)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) min((((((/* implicit */int) var_9)) / (((/* implicit */int) var_4)))), (((/* implicit */int) var_4))));
        arr_2 [i_0] = (-(var_2));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_5 [i_0 - 1] = ((/* implicit */signed char) ((min((((/* implicit */int) ((short) var_7))), (-1228549118))) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (min((var_1), (((/* implicit */int) var_4))))))));
            arr_6 [i_0] [i_1] [i_1] = (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) != (((/* implicit */int) ((signed char) var_6)))))));
            var_14 *= ((unsigned short) var_0);
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                        {
                            arr_18 [i_0 - 1] [i_2] [i_2] [i_4] [i_5] = ((var_0) & (1903306936));
                            arr_19 [i_0] [i_2] [i_4] [i_5] = ((/* implicit */signed char) var_2);
                        }
                        for (short i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)24436)) - (0)));
                            arr_22 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)46261))) : (((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            arr_25 [(unsigned char)1] [(unsigned char)1] [i_2] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((arr_16 [i_2]), (((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) (unsigned char)201)))) : ((-(((/* implicit */int) var_8)))))), (((/* implicit */int) ((unsigned char) arr_7 [i_0 - 1] [i_2])))));
                            var_16 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((min((arr_12 [i_3]), (((/* implicit */int) (signed char)4)))) & (((/* implicit */int) ((unsigned char) -25930541))))))));
                        }
                        arr_26 [i_2] [i_2] [i_3] [i_4] = (((~(1228549118))) % (((/* implicit */int) ((((/* implicit */int) max((var_9), (((/* implicit */short) var_5))))) >= (((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 1]))))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */short) (_Bool)1)), (arr_3 [i_3]))))));
                    }
                } 
            } 
            arr_27 [i_2] = ((/* implicit */int) (unsigned char)222);
            arr_28 [i_2] [i_2] = ((/* implicit */int) (_Bool)0);
            /* LoopNest 2 */
            for (unsigned short i_8 = 4; i_8 < 13; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        arr_35 [i_2] [i_2] [i_8 - 3] [i_2] [i_9] [i_9] = min((((int) 25930568)), (((/* implicit */int) ((short) var_3))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            var_18 = (i_2 % 2 == zero) ? (((/* implicit */unsigned short) ((((arr_7 [i_0 - 1] [i_2]) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (((/* implicit */unsigned short) ((((((arr_7 [i_0 - 1] [i_2]) - (2147483647))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                            arr_38 [i_2] [i_2] [i_8 + 1] [i_9] [i_2] = ((/* implicit */short) ((int) var_0));
                            var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))));
                        }
                        /* vectorizable */
                        for (short i_11 = 4; i_11 < 13; i_11 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_31 [i_0] [i_0])) == (((/* implicit */int) var_4))))) >= ((((_Bool)0) ? (((/* implicit */int) (unsigned short)3072)) : (((/* implicit */int) (_Bool)1))))));
                            arr_43 [i_2] [i_2] [i_2] [i_8] [i_9] [i_11 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                for (int i_14 = 1; i_14 < 13; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_21 += ((unsigned short) (~(((/* implicit */int) (unsigned char)20))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_14] [i_14] [i_14] [i_14 - 1])) || (((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                            arr_57 [i_0] [i_12] [i_0] [i_14] [i_15] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned short)47893))))));
                        }
                    } 
                } 
            } 
            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_46 [i_0 - 1] [i_0 - 1])) + (((/* implicit */int) (signed char)127))));
            /* LoopNest 2 */
            for (unsigned short i_16 = 2; i_16 < 12; i_16 += 3) 
            {
                for (signed char i_17 = 1; i_17 < 12; i_17 += 3) 
                {
                    {
                        arr_63 [i_16] [i_12] [i_16 + 2] [i_17] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_47 [i_0] [i_16 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) == (((/* implicit */int) var_3))));
                        arr_64 [i_12] [i_16] [i_17] = ((/* implicit */unsigned char) var_7);
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 14; i_18 += 1) 
                        {
                            var_24 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_34 [(short)8] [(short)8] [i_16 + 2] [(short)8]))));
                            arr_69 [i_0] [i_0] [i_16] [i_16] [i_0] = ((/* implicit */int) (!(((((/* implicit */int) var_8)) >= (-2054491102)))));
                            var_25 = ((unsigned short) var_7);
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_19 = 1; i_19 < 13; i_19 += 1) 
        {
            arr_72 [i_0] [i_19] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)42))));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_19])) % (((/* implicit */int) arr_36 [i_0] [i_19 + 1] [i_19]))));
        }
    }
    /* vectorizable */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        arr_77 [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (unsigned short)49152))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_74 [i_20])))))));
        var_27 = ((/* implicit */int) (unsigned char)145);
        arr_78 [i_20] [i_20] = (~(((/* implicit */int) ((var_1) < (((/* implicit */int) (unsigned char)211))))));
    }
    for (short i_21 = 0; i_21 < 21; i_21 += 2) 
    {
        arr_81 [i_21] [i_21] = ((/* implicit */short) 0);
        arr_82 [i_21] = ((/* implicit */short) (+(((/* implicit */int) max(((unsigned short)12143), (arr_76 [i_21]))))));
        arr_83 [i_21] [i_21] = max((((/* implicit */short) ((((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned char)111)))) == (((((/* implicit */int) var_6)) + (((/* implicit */int) var_4))))))), ((short)-15323));
    }
}
