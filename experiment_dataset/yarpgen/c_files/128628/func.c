/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128628
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
    var_14 = ((/* implicit */signed char) var_12);
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) var_4))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (var_10)))));
    var_16 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (min((((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (signed char)100)))), (((/* implicit */int) (signed char)58)))) : (((/* implicit */int) (signed char)-73))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -730766890)) ? (((/* implicit */int) arr_3 [i_2])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) var_4))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_11))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 8; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_2]))));
                            arr_21 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) (signed char)64)))));
                        }
                    } 
                } 
                arr_22 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) arr_18 [i_3] [i_2] [i_1])) : (-4611686018427387904LL))));
                var_20 = ((/* implicit */short) ((arr_18 [i_1] [i_1] [i_1]) << (((/* implicit */int) var_9))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_4))));
            }
            var_22 = ((/* implicit */short) var_5);
            arr_23 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_2] [i_1]))) | (arr_9 [5U])));
        }
        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
        {
            arr_27 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)121)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_1])) / (((/* implicit */int) var_3))))) : ((+((+(3345783125U)))))));
            arr_28 [i_1] [i_6] = ((/* implicit */unsigned char) var_12);
        }
        for (signed char i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) min((min(((((_Bool)1) ? (arr_7 [7LL] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) max((var_5), (((/* implicit */unsigned short) var_11))))))), (min((((((/* implicit */_Bool) (signed char)-61)) ? (var_13) : (((/* implicit */long long int) 1667998511U)))), (((/* implicit */long long int) (~(((/* implicit */int) var_11)))))))));
            var_24 = min((((((((/* implicit */_Bool) var_10)) ? (arr_9 [i_1]) : (var_13))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)16))))))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) < (((/* implicit */int) arr_25 [i_1]))))));
            var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)77)) ? (arr_8 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) << (((((((/* implicit */unsigned int) (+(65011712)))) & (var_1))) - (25165781U)))));
            var_26 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_30 [i_1])))) % ((~(var_1))))) < (((/* implicit */unsigned int) (-(((/* implicit */int) (!(arr_19 [i_1] [i_1] [(short)9] [9LL] [i_7] [(signed char)6] [i_7])))))))));
            var_27 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_5))))));
        }
        arr_33 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_8 [i_1] [i_1])))) ? (arr_18 [i_1] [i_1] [i_1]) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) arr_3 [8]))))))))));
    }
    /* LoopSeq 2 */
    for (short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
    {
        arr_37 [(unsigned char)9] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) var_7)))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 3; i_9 < 9; i_9 += 4) 
        {
            for (short i_10 = 2; i_10 < 11; i_10 += 3) 
            {
                {
                    var_28 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_38 [i_8] [i_9 - 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                    var_29 = ((/* implicit */unsigned int) var_13);
                    arr_43 [i_8] [i_9] [i_10] [(unsigned char)5] = ((/* implicit */signed char) ((unsigned short) var_2));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) ((long long int) var_8));
    }
    for (short i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_42 [i_12] [i_13] [i_14])) ? (((/* implicit */long long int) arr_42 [i_15] [i_14] [i_13])) : (var_13))) | (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (730766889))))));
                                arr_57 [i_14] [i_14] [7LL] [i_14] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((730766873) >> (((144115188075855871LL) - (144115188075855856LL)))))), ((+(min((var_6), (((/* implicit */unsigned long long int) var_8))))))));
                                arr_58 [i_14] [i_15] [(unsigned char)3] = ((/* implicit */_Bool) (-(min((arr_47 [i_13] [(short)1]), (arr_47 [i_12] [i_15])))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) min(((signed char)-51), (((/* implicit */signed char) (_Bool)1))))), (((unsigned char) arr_42 [(_Bool)1] [i_12] [i_11])))))));
                    var_33 = ((/* implicit */unsigned int) max(((-(max((1152886320234758144LL), (((/* implicit */long long int) (signed char)-53)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
                    arr_59 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)90), (arr_1 [i_13]))))) ^ (((((/* implicit */_Bool) arr_1 [i_12])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_12])))))));
                }
            } 
        } 
        var_34 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_44 [i_11] [i_11])), (661756005U))) << (((((((/* implicit */int) (signed char)100)) << (((arr_55 [i_11] [10] [i_11] [i_11] [i_11]) + (6533591632833661129LL))))) - (3194)))));
    }
}
