/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166341
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_19 *= arr_1 [i_0];
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 18; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                arr_10 [14LL] [i_1] [i_2] = ((/* implicit */int) arr_8 [i_1] [i_1] [i_1]);
                var_20 &= ((/* implicit */int) ((long long int) var_10));
                var_21 &= ((((((/* implicit */int) (short)511)) >= (((/* implicit */int) var_8)))) ? (((int) var_2)) : (((/* implicit */int) arr_7 [i_1 + 1] [i_0] [i_0] [i_0])));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 3])) && (((/* implicit */_Bool) arr_2 [i_1] [i_1 + 3]))));
            }
            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) var_15))));
            var_24 = ((/* implicit */long long int) (short)-16);
        }
        for (short i_3 = 1; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_25 |= max((var_10), (((/* implicit */unsigned short) ((unsigned char) arr_1 [(short)15]))));
            var_26 -= ((/* implicit */_Bool) max(((+(((((/* implicit */int) var_18)) & (((/* implicit */int) var_12)))))), (((/* implicit */int) var_5))));
            arr_14 [i_3] [i_3] = max((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)16)))), (((/* implicit */int) max((min((((/* implicit */short) var_8)), ((short)15))), (((/* implicit */short) min((arr_13 [i_0] [(short)5]), (var_11))))))));
        }
        /* vectorizable */
        for (short i_4 = 1; i_4 < 18; i_4 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned char) var_15);
            var_28 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23))) : (var_7)));
        }
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (unsigned char)17))));
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-16))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (var_9)))) : (((((/* implicit */_Bool) (short)-16)) ? (((/* implicit */int) (short)24)) : (((/* implicit */int) (short)-16)))))))));
        }
        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-1)) >= (((/* implicit */int) var_15))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) min((((((/* implicit */_Bool) min((5166543657839545634ULL), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((/* implicit */int) arr_25 [i_6 + 3] [i_6 + 3])))), (((/* implicit */int) ((((/* implicit */int) arr_27 [i_0] [i_6 - 1] [i_6] [i_6 - 1])) < (((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) (short)32767)))))))))))));
                        arr_28 [i_0] [17] [i_6] [i_8] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0] [i_0] [(_Bool)1])) / (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) -6576443161724647200LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))) : (var_1))) : (((((/* implicit */_Bool) arr_20 [i_7])) ? (var_14) : (((/* implicit */unsigned long long int) arr_11 [i_6])))))), (((/* implicit */unsigned long long int) var_15))));
                        var_33 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) arr_17 [i_0] [i_6 - 1] [i_7])), (6576443161724647199LL))), (((/* implicit */long long int) arr_17 [i_0] [i_6 + 3] [14LL]))));
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (_Bool)0))));
                    }
                } 
            } 
            arr_29 [i_0] [i_0] [i_6] = ((short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (7695085959789861132ULL)))) ? (((/* implicit */unsigned long long int) (+(arr_26 [i_6] [i_6 + 3] [i_6 - 1] [i_6] [i_6] [i_6])))) : (var_14)));
        }
    }
    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned char) (unsigned short)3750);
        arr_32 [(_Bool)1] [i_9] = ((/* implicit */unsigned short) var_0);
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
    {
        arr_35 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_10] [i_10])) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) var_17))));
        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)61792)) ? (((/* implicit */int) arr_31 [i_10])) : (var_16))))));
        var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    }
    for (unsigned short i_11 = 3; i_11 < 24; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            for (short i_13 = 1; i_13 < 24; i_13 += 4) 
            {
                {
                    var_38 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned char)8)))))), (((((/* implicit */_Bool) ((unsigned int) (short)-16))) ? (((/* implicit */int) ((unsigned short) arr_40 [i_11] [i_13]))) : ((~(((/* implicit */int) arr_36 [i_11 + 1] [i_13]))))))));
                    arr_43 [i_13 + 1] [i_13] = ((/* implicit */unsigned short) ((signed char) var_2));
                }
            } 
        } 
        var_39 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_41 [i_11] [i_11 - 1] [i_11 + 1] [i_11]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_36 [(unsigned char)1] [i_11 - 2])), ((~(((/* implicit */int) (short)-31))))))) : (((max((797738343560341820ULL), (((/* implicit */unsigned long long int) arr_36 [i_11] [i_11 - 1])))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)2)))))))));
        var_40 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)34))))) ? (((((/* implicit */_Bool) (unsigned short)3750)) ? (((/* implicit */int) (unsigned short)3750)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((arr_41 [i_11 + 1] [i_11] [i_11] [i_11]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) < (((/* implicit */int) var_5))));
    }
    var_41 -= ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
    {
        for (signed char i_15 = 2; i_15 < 9; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_42 = ((/* implicit */short) var_9);
                    arr_51 [i_14] = (unsigned short)31423;
                }
            } 
        } 
    } 
}
