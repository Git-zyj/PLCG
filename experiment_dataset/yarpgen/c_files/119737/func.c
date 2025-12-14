/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119737
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
    var_13 = ((/* implicit */long long int) (((((+(var_1))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2)))))) && (((/* implicit */_Bool) var_11))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) var_8))))) ? (((var_6) ? (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))))) : (((/* implicit */long long int) var_5))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) (+(((((/* implicit */int) arr_1 [i_0 + 1])) >> (((((/* implicit */int) var_8)) & (((/* implicit */int) arr_0 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */int) (((!(((((/* implicit */int) var_3)) > (((/* implicit */int) var_10)))))) || (((/* implicit */_Bool) ((signed char) arr_0 [i_0 - 2])))));
        var_16 = ((/* implicit */long long int) (unsigned char)214);
    }
    for (int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_4 [i_1 + 1]), (((((/* implicit */long long int) ((/* implicit */int) var_4))) == (var_1)))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 2]))) : (var_1)));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) | (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2]))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((unsigned short) arr_7 [i_1 - 1] [i_1 - 1])))));
            /* LoopSeq 4 */
            for (short i_3 = 2; i_3 < 19; i_3 += 3) 
            {
                var_21 = ((/* implicit */unsigned short) (+(((long long int) arr_8 [i_3 + 1]))));
                var_22 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_2]))));
            }
            for (int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
            {
                arr_14 [i_4] [i_2] [i_4] [i_2] = ((/* implicit */long long int) (!(arr_4 [i_1 - 2])));
                /* LoopSeq 2 */
                for (int i_5 = 2; i_5 < 20; i_5 += 1) 
                {
                    arr_17 [i_1] [i_2] [i_2] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                    arr_18 [i_1] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1 + 1])) % (arr_3 [i_1 + 1] [i_5 + 2])));
                }
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1 - 2] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) arr_19 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_4])) : (var_1)));
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (-(arr_12 [i_1] [i_1] [i_2]))))));
                    var_25 = ((/* implicit */signed char) ((_Bool) ((long long int) arr_12 [i_1] [i_1] [i_6])));
                    var_26 -= ((/* implicit */signed char) ((unsigned short) arr_10 [i_1 - 2] [i_2] [i_4]));
                }
                arr_22 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */int) (~(var_11)));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1])) ? (arr_7 [i_1] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
            }
            for (int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
            {
                var_28 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_7])) ? (((/* implicit */int) arr_5 [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_23 [i_1] [i_2] [i_7] [i_7]))))));
                arr_26 [i_2] [i_7] = ((/* implicit */signed char) arr_24 [i_1 - 1] [i_2] [i_1 - 2]);
                arr_27 [i_7] [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_2]))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) arr_25 [i_2] [i_7]))))));
                arr_28 [i_7] [i_1 - 1] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_13 [i_1 + 1] [i_2] [i_1 + 1])) == (arr_7 [i_2] [i_7])));
            }
            for (int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    var_29 = ((/* implicit */int) arr_21 [i_1] [i_1] [i_2] [i_8] [i_9]);
                    arr_35 [i_1 - 2] [i_2] [i_8] [i_1 - 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((-17) > (16))))));
                }
                /* LoopSeq 4 */
                for (signed char i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                {
                    arr_39 [i_10] [i_2] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_29 [i_8] [i_10] [i_1] [i_10])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1 - 1])))))));
                    var_31 = ((/* implicit */_Bool) min((var_31), (((((var_4) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_2]))) : (var_1))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12))))))));
                    var_32 += ((/* implicit */unsigned char) ((signed char) arr_10 [i_1 - 2] [i_1 - 1] [i_1 - 1]));
                }
                for (signed char i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                {
                    var_33 += ((/* implicit */unsigned int) arr_15 [i_1 + 1] [i_1] [i_2] [i_2] [i_1] [i_11]);
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_37 [i_11]))));
                }
                for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) var_9))));
                    var_36 -= ((/* implicit */signed char) (-(arr_24 [i_12] [i_2] [i_1 + 1])));
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 3; i_13 < 21; i_13 += 4) /* same iter space */
                    {
                        var_37 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_13] [i_13 + 1] [i_1 + 1] [i_1] [i_1 - 1]))) > (var_11)));
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 1] [i_13 + 1])))))));
                        var_39 = (!(((/* implicit */_Bool) arr_19 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_12] [i_13 - 1])));
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_2] [i_13 - 1] [i_13 - 2] [i_8] [i_13 - 3])) << (((/* implicit */int) var_9))));
                    }
                    for (unsigned char i_14 = 3; i_14 < 21; i_14 += 4) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
                        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) var_10))));
                    }
                    var_43 -= ((/* implicit */_Bool) ((var_11) >> (((arr_7 [i_1 - 1] [i_1 + 1]) - (7637008769143904858ULL)))));
                }
                for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    arr_53 [i_15] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_49 [i_1 + 1] [i_2] [i_1 + 1] [i_15] [i_2])) * (((/* implicit */int) arr_49 [i_1 + 1] [i_2] [i_8] [i_1 - 2] [i_1 - 2]))));
                    arr_54 [i_1 + 1] [i_2] [i_2] [i_15] = ((/* implicit */long long int) ((arr_4 [i_15]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_15]))));
                }
            }
            arr_55 [i_1 + 1] [i_1 + 1] = ((((/* implicit */int) arr_32 [i_1 - 1])) == (((/* implicit */int) arr_32 [i_1 - 2])));
        }
        /* vectorizable */
        for (unsigned int i_16 = 0; i_16 < 22; i_16 += 2) 
        {
            arr_58 [i_1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_1 - 2] [i_16])) ? (((/* implicit */int) var_9)) : (((arr_13 [i_1] [i_16] [i_16]) / (arr_48 [i_16] [i_16] [i_16] [i_16] [i_16])))));
            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_52 [i_1] [i_16] [i_16] [i_1 - 1]))))) ? (((/* implicit */unsigned int) arr_13 [i_16] [i_1 - 1] [i_1 - 1])) : ((+(var_2)))));
            var_45 += ((/* implicit */unsigned int) var_6);
            arr_59 [i_1 - 2] [i_1 - 2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1073741822LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))) * (((/* implicit */int) var_9))));
        }
        var_46 = ((/* implicit */unsigned char) min((var_46), (arr_42 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])));
    }
    var_47 = ((/* implicit */unsigned int) max((var_6), (((((/* implicit */int) ((unsigned char) var_11))) > (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_9)))))))));
}
