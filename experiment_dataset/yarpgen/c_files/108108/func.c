/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108108
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
    var_11 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_7))))));
    var_12 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_7)))) % (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (unsigned short)25781)) : ((-(((/* implicit */int) ((unsigned short) (unsigned short)25786))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) ((18446744073709551612ULL) << (((((/* implicit */int) (signed char)-105)) + (120)))));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1 + 1])))))));
        }
        for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))) + (max((var_4), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_3 [(unsigned char)4])) + (((/* implicit */int) var_2)))))))));
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39766))))))))));
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)25758)))))));
        }
        for (signed char i_3 = 2; i_3 < 12; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                for (int i_5 = 1; i_5 < 11; i_5 += 3) 
                {
                    {
                        var_18 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5 + 1] [i_4 + 1] [i_3 + 1] [i_3 + 1] [i_3])) || (((/* implicit */_Bool) var_9))))) & (((/* implicit */int) arr_7 [i_0] [i_4] [i_0]))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_3)) + (((/* implicit */int) var_3)))), (((/* implicit */int) arr_3 [(unsigned char)2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) ((var_8) & (((/* implicit */int) var_0)))))))) : (((/* implicit */int) (short)19829))));
                        arr_16 [i_5] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-119)) && (((/* implicit */_Bool) (unsigned char)96))));
                        var_20 = ((/* implicit */unsigned long long int) arr_3 [6ULL]);
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_9 [i_0] [i_3])))) ? (((((/* implicit */_Bool) arr_5 [i_5])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_11 [(signed char)10])))) : ((+(((/* implicit */int) arr_13 [i_0] [i_0] [i_3 - 1] [i_4 + 4] [i_0])))))) : (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) (signed char)114)) : (((((/* implicit */int) (unsigned short)59784)) & (arr_15 [(unsigned short)12] [i_3] [i_3] [(unsigned short)12] [(unsigned char)1] [i_5 + 1]))))))))));
                    }
                } 
            } 
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) -1LL);
            var_22 = ((/* implicit */unsigned long long int) (signed char)101);
            arr_18 [i_3] = ((/* implicit */unsigned short) 0ULL);
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 12; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        var_23 &= ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)10]))) * (((arr_8 [i_3]) & (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)110)))) & (arr_15 [i_6] [i_6] [i_6] [i_6] [i_3 + 1] [i_0]))))));
                        var_24 *= ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned short) (unsigned char)253)), ((unsigned short)4))));
                    }
                } 
            } 
        }
        arr_25 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551609ULL)) || (((/* implicit */_Bool) (unsigned short)25768))));
        var_25 = min((((unsigned long long int) ((((/* implicit */unsigned long long int) arr_19 [(unsigned char)10] [i_0])) ^ (30ULL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)153))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 4) 
        {
            arr_28 [i_8] = ((/* implicit */int) max((arr_11 [i_0]), (min((arr_24 [i_8] [i_8 - 2]), (arr_24 [i_8] [i_8 - 1])))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned char)153)))), ((!(((/* implicit */_Bool) (-2147483647 - 1))))))))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 4; i_9 < 9; i_9 += 1) 
            {
                for (long long int i_10 = 2; i_10 < 11; i_10 += 3) 
                {
                    {
                        var_27 = ((/* implicit */long long int) ((unsigned long long int) ((((_Bool) arr_26 [i_0])) || (((/* implicit */_Bool) max((5ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))))));
                        var_28 = ((/* implicit */short) min((((((/* implicit */int) arr_13 [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1])) < (((/* implicit */int) arr_13 [i_10] [i_10] [i_10 + 1] [i_10 - 1] [i_10 + 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25758))) >= (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) 3365491307U)) : (18446744073709551611ULL)))))));
                        var_29 = ((/* implicit */int) (((~(864691128455135232ULL))) >> (((((((/* implicit */_Bool) arr_29 [i_0] [i_9 + 4] [i_0] [12U])) ? (((/* implicit */int) arr_29 [4U] [i_9 + 4] [i_9 + 3] [10])) : (((/* implicit */int) (unsigned short)39750)))) - (12936)))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) (short)-4166)) : (((/* implicit */int) (short)32767))));
                        arr_33 [11U] [i_8] [(unsigned char)0] [10ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_14 [i_0] [i_8 - 3] [i_8 - 1] [i_0] [i_9 + 2] [i_10]))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_11 = 3; i_11 < 11; i_11 += 3) /* same iter space */
        {
            arr_37 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-1)) ? (-9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1458546509U)) && (((/* implicit */_Bool) -390712269))))))));
            var_31 = ((/* implicit */unsigned short) ((var_8) / (((/* implicit */int) arr_24 [(unsigned short)8] [i_11 - 1]))));
        }
        for (unsigned short i_12 = 3; i_12 < 11; i_12 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_13 = 3; i_13 < 11; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                        var_33 = ((/* implicit */unsigned char) arr_40 [i_0] [i_0]);
                        arr_47 [i_12] [i_12 + 1] [i_12] [(signed char)3] [(unsigned short)9] [i_12] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(4294967295U)))))))));
                    }
                } 
            } 
            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_12] [i_12 + 1] [i_12 - 3]))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned short) arr_30 [i_12 - 3] [i_12 - 3])))));
            arr_48 [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (arr_39 [i_0] [i_12])));
        }
    }
    for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) 
    {
        var_35 += ((/* implicit */unsigned short) (-((-(var_6)))));
        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_15] [i_15]))) / (979506493U)))) ? ((~(((/* implicit */int) arr_50 [i_15] [i_15])))) : (((/* implicit */int) max((arr_50 [i_15] [i_15]), (arr_50 [i_15] [i_15])))))))));
        var_37 = ((/* implicit */unsigned short) min((var_37), (((unsigned short) (unsigned short)5766))));
        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & (((((/* implicit */_Bool) arr_49 [i_15])) ? (((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) arr_49 [0ULL])))) : (((/* implicit */int) max(((unsigned char)212), ((unsigned char)210))))))));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 17; i_16 += 3) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_39 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_58 [i_18] [i_16] [(unsigned char)12] [i_18] [(unsigned char)15])))) + (((/* implicit */int) min((arr_58 [i_15] [i_16] [i_15] [i_18] [i_15]), (arr_58 [i_15] [i_18] [i_17] [3LL] [i_17]))))));
                        var_40 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27))) < (((((/* implicit */_Bool) (short)1622)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65517))) : (18085162148087761708ULL)))))) % (((/* implicit */int) (unsigned short)65535))));
                        arr_61 [i_15] [i_18] [i_17] [i_18] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (((+(((/* implicit */int) arr_54 [i_18] [i_17] [i_16] [i_15])))) | (((/* implicit */int) arr_49 [13]))))), (1763356471U)));
                    }
                } 
            } 
        } 
    }
    var_41 = ((/* implicit */unsigned short) var_10);
}
