/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101962
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_10 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            var_11 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) ^ ((+(arr_4 [(_Bool)1] [i_1 - 1]))));
            arr_6 [i_1] [i_0] [i_0] |= ((/* implicit */long long int) ((unsigned long long int) (-(arr_4 [(_Bool)1] [(signed char)16]))));
            arr_7 [i_1] [i_0] &= 2006188852043385748LL;
        }
        arr_8 [7ULL] [7ULL] |= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_3 [i_0]))))));
        arr_9 [2] = ((/* implicit */_Bool) (+(((unsigned long long int) 268433408))));
        arr_10 [i_0] [i_0] = ((/* implicit */signed char) var_6);
    }
    /* LoopSeq 4 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) arr_12 [(signed char)19] [(unsigned short)14]);
        arr_13 [i_2] = (((+(((/* implicit */int) arr_2 [i_2])))) / (((/* implicit */int) arr_2 [i_2])));
        arr_14 [(signed char)17] [i_2] &= arr_0 [i_2] [i_2];
        var_13 = ((((/* implicit */_Bool) -977054593181704644LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-25))) : (-4522945818769241003LL));
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_21 [i_4] = ((/* implicit */short) ((((/* implicit */int) max((arr_2 [i_4 - 1]), (((/* implicit */unsigned short) var_7))))) % (((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (_Bool)1))))));
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (-(((/* implicit */int) (short)3587)))))));
        }
        arr_22 [i_3] |= ((/* implicit */signed char) (-(4522945818769241022LL)));
        arr_23 [i_3] = ((/* implicit */_Bool) arr_18 [i_3]);
        var_15 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_17 [i_3])) || (((/* implicit */_Bool) arr_17 [i_3])))) ? (((var_6) << (((((/* implicit */int) arr_15 [i_3])) - (4822))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3])))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (((/* implicit */int) arr_3 [i_5])) : (((var_3) - (arr_12 [i_5] [i_5])))))));
        arr_26 [(_Bool)1] = ((/* implicit */unsigned short) ((int) ((unsigned char) arr_25 [i_5] [i_5])));
        /* LoopSeq 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_30 [i_5] [i_6] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_2 [i_6 - 1]))))));
            arr_31 [(_Bool)1] [i_6] &= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)61))));
        }
        for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 2) 
        {
            arr_34 [(_Bool)1] [i_7] [i_7] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_28 [(_Bool)1] [(_Bool)1]), (((/* implicit */short) var_7)))))) / (arr_25 [i_7 - 1] [i_7])))));
            var_17 = ((/* implicit */unsigned char) max((((long long int) ((((/* implicit */_Bool) -7349810204406805889LL)) ? (((/* implicit */int) (short)384)) : (((/* implicit */int) (unsigned char)56))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-86)) ? (524287U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2031))))))));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((long long int) ((unsigned int) arr_25 [i_5] [i_5]))))));
            /* LoopSeq 1 */
            for (long long int i_8 = 1; i_8 < 20; i_8 += 4) 
            {
                var_19 = ((/* implicit */signed char) (-((~((+(var_6)))))));
                var_20 *= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) arr_32 [i_5] [i_5] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                /* LoopSeq 1 */
                for (int i_9 = 1; i_9 < 20; i_9 += 1) 
                {
                    arr_39 [i_9] [i_9] [i_8] [i_7] [i_5] = ((/* implicit */unsigned long long int) var_2);
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((17504706944403575703ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30976)))))) ? ((~(((/* implicit */int) (short)384)))) : (((/* implicit */int) (signed char)-115))))) ? ((~(((/* implicit */int) ((arr_12 [i_8] [1]) <= (((/* implicit */int) arr_36 [i_5] [i_8] [i_7] [i_7]))))))) : (((/* implicit */int) ((short) (~(3165888668510147241LL)))))));
                }
            }
        }
        arr_40 [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(signed char)12])) % (((/* implicit */int) arr_24 [i_5] [14LL])))))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [(unsigned char)20] [(_Bool)1] [i_5] [i_5])) | (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_36 [(_Bool)1] [0U] [16ULL] [i_5])), (arr_0 [(_Bool)1] [i_5]))))) : ((-(arr_4 [i_5] [13LL])))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                for (long long int i_13 = 4; i_13 < 20; i_13 += 4) 
                {
                    {
                        var_22 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)(-32767 - 1)))));
                        var_23 -= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((unsigned int) (short)-385))) | ((+(arr_45 [i_11] [i_11]))))) > (((/* implicit */unsigned long long int) max((-920756632), (((((/* implicit */_Bool) 953286325)) ? (((/* implicit */int) (short)-30981)) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_50 [i_10] [i_10] [i_12] [i_10] [i_10] = ((/* implicit */short) (-(((((/* implicit */int) arr_24 [(unsigned short)6] [i_13 - 2])) / (((/* implicit */int) var_1))))));
                    }
                } 
            } 
            arr_51 [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) -8309082882404763873LL))));
            var_24 |= max((((/* implicit */int) max((((unsigned char) (unsigned char)0)), (((/* implicit */unsigned char) (signed char)32))))), ((-(((/* implicit */int) (short)23143)))));
            var_25 -= ((/* implicit */int) ((((((/* implicit */_Bool) max((arr_11 [i_10] [i_11]), (((/* implicit */unsigned short) arr_36 [4] [i_11] [i_10] [i_10]))))) ? (var_5) : (((/* implicit */unsigned long long int) 8337223555399580474LL)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_11] [i_10])) ? (arr_1 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))))) <= (((/* implicit */long long int) var_3))))))));
            arr_52 [i_10] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_1 [i_10]) | (arr_1 [i_10]))))));
        }
        for (unsigned short i_14 = 2; i_14 < 21; i_14 += 4) 
        {
            var_26 = arr_12 [i_10] [12ULL];
            /* LoopSeq 2 */
            for (int i_15 = 1; i_15 < 21; i_15 += 1) 
            {
                arr_58 [i_10] [i_10] = ((/* implicit */_Bool) (-(max((arr_38 [i_10] [i_10] [i_15 - 1] [i_10]), (arr_38 [i_10] [i_14] [i_15 - 1] [(signed char)20])))));
                arr_59 [i_14] [i_14 - 2] [i_15] |= ((/* implicit */signed char) arr_49 [i_10] [i_14 + 1] [i_10] [i_10]);
            }
            for (long long int i_16 = 2; i_16 < 18; i_16 += 4) 
            {
                var_27 = (!((!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)7))))))));
                var_28 += ((/* implicit */unsigned char) max(((unsigned short)6218), (((/* implicit */unsigned short) (signed char)-117))));
                var_29 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_32 [i_14] [i_14 - 2] [i_14 - 1])) ? (arr_43 [i_16 - 1]) : (arr_43 [i_16 + 3]))) == (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
            }
            arr_62 [i_10] [i_14] [i_10] |= ((/* implicit */short) (+(8014834723352783671LL)));
        }
        for (long long int i_17 = 1; i_17 < 20; i_17 += 4) 
        {
            arr_65 [i_10] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_60 [i_10]), (arr_60 [i_10]))))));
            var_30 += ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_55 [i_17 + 2] [i_17 - 1] [i_17 + 2]))))));
        }
        for (signed char i_18 = 0; i_18 < 22; i_18 += 3) 
        {
            var_31 -= ((/* implicit */unsigned short) ((_Bool) (unsigned short)64603));
            var_32 *= ((/* implicit */unsigned short) (((+(((/* implicit */int) ((((/* implicit */int) arr_48 [(_Bool)1] [i_10] [(_Bool)1])) > (((/* implicit */int) arr_3 [21]))))))) - ((~(((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned short)0))))))));
        }
        arr_69 [i_10] [i_10] = ((/* implicit */_Bool) (~(var_6)));
    }
    var_33 = ((/* implicit */unsigned long long int) max(((+(580304794))), (((/* implicit */int) var_1))));
}
