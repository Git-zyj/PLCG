/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140566
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_14 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [3ULL])) && (((/* implicit */_Bool) arr_3 [i_0])))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 3) 
                        {
                            var_16 &= ((/* implicit */unsigned short) (~(min((min((8ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (min((var_1), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0] [i_0] [8ULL]))))))));
                            arr_14 [i_2] [i_0] [i_2] [i_2] [i_0] [i_0] [i_0] = (+(((((/* implicit */_Bool) min((arr_6 [i_3] [i_3] [i_3]), (arr_8 [i_0] [i_4] [i_2] [21ULL])))) ? (((arr_0 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))))) : (max((arr_5 [i_0]), (var_1))))));
                            var_17 = ((/* implicit */unsigned long long int) ((unsigned short) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0]))))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_12 [i_0] [i_0] [1ULL] [i_0] [i_4 - 1] [i_0]), (arr_12 [(unsigned short)13] [i_0] [(unsigned short)13] [20ULL] [(unsigned short)13] [i_4])))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551577ULL)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_1] [i_0] [7ULL] [i_5] = min((arr_2 [i_0]), (arr_9 [16ULL] [i_3] [i_2] [i_0]));
                            var_19 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_3] [i_3]);
                            var_20 = ((unsigned long long int) (~(((/* implicit */int) arr_13 [7ULL] [i_2] [i_2] [i_3] [i_0]))));
                            arr_18 [i_0] [(unsigned short)1] [(unsigned short)1] [i_0] [(unsigned short)23] = 18446744073709551607ULL;
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            var_21 = (+((~(arr_6 [i_0] [i_0] [i_0]))));
                            var_22 = min((((arr_6 [i_1] [i_2] [i_3]) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) | (arr_0 [i_2]))))), (((unsigned long long int) var_12)));
                            arr_21 [i_0] [(unsigned short)3] [(unsigned short)9] [i_0] [(unsigned short)9] [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_3 [i_2]))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 4) 
    {
        var_23 = min(((((~(var_0))) ^ (arr_0 [i_7 + 1]))), (arr_4 [i_7] [i_7] [i_7]));
        var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) ^ (max((arr_7 [i_7 - 2] [i_7 - 1]), (((/* implicit */unsigned long long int) arr_2 [i_7 + 1])))));
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            for (unsigned short i_9 = 1; i_9 < 6; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37149))) : (18446744073709551607ULL))))))), (min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) min(((unsigned short)65523), (arr_12 [i_7] [i_8] [i_7] [7ULL] [i_9 - 1] [i_10]))))))));
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                    }
                } 
            } 
        } 
        var_27 = max(((unsigned short)9049), ((unsigned short)0));
        var_28 = ((((((((/* implicit */_Bool) var_1)) ? (arr_26 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16))))) / (((unsigned long long int) arr_10 [i_7] [i_7 - 1] [i_7] [i_7 + 1] [i_7])))) ^ (((unsigned long long int) arr_11 [i_7])));
    }
    for (unsigned short i_11 = 1; i_11 < 16; i_11 += 3) 
    {
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533))))), (((/* implicit */unsigned long long int) arr_13 [i_11] [i_11 + 1] [(unsigned short)7] [i_11 - 1] [i_11]))))) ? (min((((((/* implicit */_Bool) 12495975714507859610ULL)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_11]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_11] [i_11] [i_11 - 1] [i_11])) << (((((/* implicit */int) arr_2 [i_11])) - (11456)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_11])))));
        arr_33 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)53548)) & (((/* implicit */int) (unsigned short)65524))));
        var_30 = ((/* implicit */unsigned short) min((((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56486)))))))), ((!(((/* implicit */_Bool) var_5))))));
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (!(((/* implicit */_Bool) 13211910352714575767ULL))))) | (((/* implicit */int) arr_2 [i_11])))), (min((((/* implicit */int) ((unsigned short) arr_30 [i_11]))), ((~(((/* implicit */int) var_6)))))))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
    {
        var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_12]))));
        arr_36 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_12] [i_12] [i_12] [i_12] [i_12]))) == (max((arr_20 [i_12]), (var_2)))));
    }
    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
    {
        arr_39 [i_13] = ((/* implicit */unsigned short) min((max((max((arr_38 [i_13]), (var_5))), (max((var_0), (((/* implicit */unsigned long long int) arr_3 [i_13])))))), (var_2)));
        var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_3)))))), (max((((/* implicit */unsigned long long int) (unsigned short)12009)), ((-(var_10)))))));
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (((+(var_0))) - (((unsigned long long int) arr_10 [i_13] [i_13] [i_13] [i_13] [(unsigned short)16])))))));
        var_35 -= ((/* implicit */unsigned short) var_9);
    }
    var_36 = ((/* implicit */unsigned short) min((min((max((var_9), (((/* implicit */unsigned long long int) var_13)))), (min((((/* implicit */unsigned long long int) var_6)), (var_7))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((2103830586995071625ULL), (var_11)))))))));
    var_37 &= ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 1) 
    {
        var_38 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_13)) ? (var_11) : (9007199254740991ULL))), ((+(var_11))))), (min((((/* implicit */unsigned long long int) arr_9 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14])), (max((arr_6 [i_14 + 1] [i_14] [i_14]), (((/* implicit */unsigned long long int) arr_12 [(unsigned short)10] [(unsigned short)4] [i_14 + 1] [i_14] [i_14] [i_14]))))))));
        var_39 = (+(var_5));
        var_40 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (var_2)))) ? (arr_41 [i_14 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (var_3)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((14046064456093723069ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_14] [(unsigned short)10] [i_14] [i_14] [(unsigned short)10] [(unsigned short)10])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(unsigned short)22] [i_14] [i_14] [i_14] [(unsigned short)18]))) : (((unsigned long long int) arr_20 [(unsigned short)8])))))));
    }
}
