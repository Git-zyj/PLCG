/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18264
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)1921)) <= (((/* implicit */int) max((var_17), ((unsigned short)63615))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) (unsigned short)63615);
        var_20 = ((/* implicit */signed char) (unsigned short)63587);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_21 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (((((/* implicit */_Bool) (unsigned short)1900)) ? (8579066621835701906ULL) : (((/* implicit */unsigned long long int) ((long long int) 8579066621835701906ULL))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_10 [i_2] &= ((/* implicit */signed char) (short)(-32767 - 1));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1])) ? ((+(618721697U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_2]))))))));
                            var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32761)) ? (8579066621835701917ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                            arr_13 [i_2] [i_2] [i_2] [i_4] [i_2] &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                            arr_14 [i_1 - 2] [i_2] [i_2] [i_0] [i_4] [i_2] = ((/* implicit */long long int) (unsigned short)48853);
                        }
                        for (signed char i_5 = 2; i_5 < 23; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_11 [i_3] [i_0] [(short)20])))));
                            var_25 = (-(var_16));
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_3 [i_1 - 2] [i_0]))));
                        }
                        for (long long int i_6 = 2; i_6 < 21; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */long long int) var_2);
                            var_27 = ((/* implicit */unsigned short) ((long long int) ((5278981536470445892ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] [i_1 + 2] [i_0]))))));
                        }
                    }
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        var_28 = ((/* implicit */signed char) arr_20 [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1]);
        var_29 -= ((/* implicit */long long int) var_10);
        var_30 &= ((/* implicit */long long int) max((9867677451873849709ULL), (9867677451873849710ULL)));
    }
    for (long long int i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
    {
        var_31 += ((/* implicit */unsigned char) var_3);
        var_32 = ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (short)7092)))));
        var_33 += ((/* implicit */unsigned int) (short)32765);
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        {
                            var_34 -= ((/* implicit */unsigned int) arr_9 [i_12] [i_11] [i_12]);
                            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (unsigned short)6200)) ? (((/* implicit */int) (unsigned short)1921)) : (((/* implicit */int) (short)32743)))), (((/* implicit */int) (short)29358)))), (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (unsigned short)1921))))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                for (long long int i_14 = 1; i_14 < 11; i_14 += 2) 
                {
                    {
                        arr_42 [i_8] [i_8] [i_13] [i_8] [i_9] [8LL] = ((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned short)63615)))) : (((/* implicit */int) ((signed char) (unsigned short)1920))));
                        /* LoopSeq 2 */
                        for (signed char i_15 = 0; i_15 < 13; i_15 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned char) arr_35 [i_14 + 2] [i_14 + 2] [(unsigned char)11] [i_14 + 1] [i_14 + 1]);
                            arr_47 [i_8 - 1] [i_8] [i_13] [i_8] [i_8 - 1] = ((/* implicit */long long int) ((((((((/* implicit */int) (unsigned short)1906)) <= (((/* implicit */int) var_0)))) ? ((-(((/* implicit */int) (unsigned short)31)))) : (((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_9] [i_8] [21ULL])), (var_10)))))) <= (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned short) (short)32758)), ((unsigned short)1920)))))));
                            var_37 *= ((/* implicit */signed char) arr_40 [i_8] [i_8 + 2] [i_9] [i_13] [i_14] [3LL]);
                        }
                        for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 2) 
                        {
                            var_38 = ((/* implicit */signed char) (~(((/* implicit */int) (((-(((/* implicit */int) (unsigned short)63615)))) < (((/* implicit */int) arr_29 [i_16 + 1] [i_8])))))));
                            var_39 = ((/* implicit */short) ((((/* implicit */int) ((short) (unsigned short)65514))) < (((((((/* implicit */int) (short)32765)) < (arr_4 [i_8 + 1] [i_8 + 2]))) ? (((/* implicit */int) (unsigned short)1924)) : (((((/* implicit */_Bool) arr_49 [i_8] [i_9] [i_13] [i_14 - 1] [i_16])) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (short)-32758))))))));
                            var_40 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63615))))) : (((/* implicit */int) (unsigned char)224)))), (((/* implicit */int) (short)32758))));
                        }
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) (short)25286)) : (((/* implicit */int) (short)-32760))));
                    }
                } 
            } 
            var_42 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */int) (unsigned short)63614)) : (((/* implicit */int) (short)16383)))), (((/* implicit */int) (short)32748))));
            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_8 + 1] [i_8 + 1] [(unsigned short)3])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)-32765))))) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
        }
        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 1) 
        {
            var_44 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) (unsigned char)241)))));
            var_45 = ((/* implicit */unsigned char) max((var_45), ((unsigned char)66)));
            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) (unsigned short)65533))))))))));
        }
    }
    for (long long int i_18 = 1; i_18 < 11; i_18 += 1) /* same iter space */
    {
        var_47 = ((/* implicit */short) var_5);
        /* LoopNest 2 */
        for (unsigned int i_19 = 4; i_19 < 12; i_19 += 2) 
        {
            for (unsigned long long int i_20 = 2; i_20 < 10; i_20 += 1) 
            {
                {
                    var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                    /* LoopNest 2 */
                    for (signed char i_21 = 0; i_21 < 13; i_21 += 3) 
                    {
                        for (unsigned long long int i_22 = 4; i_22 < 11; i_22 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) (unsigned char)100))));
                                var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) (unsigned short)63619))));
                                arr_66 [i_18] [i_18] [12LL] [i_18 - 1] [(short)2] = var_10;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_51 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)32758)), (12933932023654326028ULL)));
}
