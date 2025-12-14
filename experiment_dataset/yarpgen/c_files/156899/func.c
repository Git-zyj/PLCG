/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156899
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
    var_10 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (2218779725072469585LL))))))), (var_2)));
    var_11 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) min((min((5305252002047742246ULL), (((/* implicit */unsigned long long int) (short)-8262)))), (((7647969215850578003ULL) ^ (((/* implicit */unsigned long long int) 9223372036854775786LL))))));
                arr_6 [1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [19U] [i_1 + 4]))));
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) min((((/* implicit */long long int) arr_4 [i_0])), ((-(max((-6693978291299940101LL), (((/* implicit */long long int) 234881024U)))))))))));
                var_13 = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)161))) : (28639972U)))));
                var_14 = ((((/* implicit */_Bool) (~(((arr_4 [i_1 + 2]) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) -305516152))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((3157037665U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) != (arr_3 [i_1] [i_1 - 3] [i_1 - 2]))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)7198)) : ((-2147483647 - 1))))), (((((/* implicit */_Bool) (unsigned char)107)) ? (1155361111U) : (1784029399U))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) 2661595177696172993LL))));
        var_16 ^= ((/* implicit */int) var_3);
        var_17 = ((/* implicit */unsigned char) -1375534948);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [i_2])) / (((/* implicit */int) var_4))))) ? (((209200444) | (((/* implicit */int) arr_1 [i_2 + 3])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)0))))));
    }
    for (int i_3 = 2; i_3 < 22; i_3 += 1) 
    {
        var_19 = var_9;
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned short) ((long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_5)) : (9007199254739968LL))), (((/* implicit */long long int) (unsigned short)0)))));
        /* LoopNest 3 */
        for (signed char i_4 = 3; i_4 < 22; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (long long int i_6 = 4; i_6 < 22; i_6 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) arr_19 [(unsigned char)18]);
                        var_21 &= ((/* implicit */unsigned int) arr_21 [i_3] [i_4] [(unsigned short)3] [(unsigned short)1]);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
        {
            arr_28 [i_3 - 1] [i_7] [6U] = ((/* implicit */long long int) arr_12 [i_3 - 2]);
            arr_29 [i_7] [i_3] [i_3] = var_3;
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) 1335918438)) : (arr_17 [i_7] [i_7] [i_3 - 1])))) ? (arr_11 [i_3 - 1] [i_7]) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (arr_11 [i_7] [i_3 - 1])))));
            var_23 += ((/* implicit */unsigned char) min((arr_14 [i_3 - 2] [(unsigned char)18]), (((/* implicit */long long int) ((31ULL) == (((/* implicit */unsigned long long int) 7602639896442967156LL)))))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) 2147483647)) / (22ULL))))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                var_25 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (~(19U)))))) ? (((long long int) arr_27 [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2600)))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14134)) ? (2696789308U) : (var_1)))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (signed char)127)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [i_9])), (arr_33 [i_3] [i_8] [(_Bool)1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3]))) + (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-126)))))))) : (max((var_2), (((/* implicit */long long int) arr_2 [i_8] [i_3 + 1]))))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_10 = 2; i_10 < 21; i_10 += 4) 
            {
                arr_36 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(min((arr_17 [i_10] [i_8] [i_8]), (769955312U)))))), (min((arr_25 [0] [i_8]), (((/* implicit */unsigned long long int) arr_2 [i_3 - 2] [(_Bool)1]))))));
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24523)) ? (arr_16 [i_10] [i_8] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3])))))) ? ((+(124U))) : (var_7)))) ? (max((((/* implicit */long long int) arr_18 [i_3 - 1] [i_10 - 1] [(_Bool)1])), (var_2))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) 2892849974U)) ? (arr_16 [i_3] [i_8] [i_10]) : (((/* implicit */unsigned int) var_9)))) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_11 = 1; i_11 < 21; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) ((((((508907308U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))))) != (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned char)172))))))) : ((((~(394038252U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3 + 1] [i_11 - 1])))))));
                        var_29 = ((/* implicit */int) arr_37 [i_12] [i_8] [i_8] [i_3]);
                        arr_42 [i_3] [i_8] [16LL] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((var_8) << (((((arr_11 [i_11] [i_12]) + (1231224537))) - (3)))))) & (arr_25 [i_3 + 1] [i_11 + 1]))), (((/* implicit */unsigned long long int) (~(var_2))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
        {
            arr_45 [i_13] [18LL] [i_13] = ((/* implicit */long long int) var_5);
            var_30 = ((/* implicit */unsigned int) 1410157877);
            var_31 = ((/* implicit */signed char) arr_23 [i_3] [10LL] [10LL] [(unsigned short)0]);
        }
    }
    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 1) 
    {
        arr_48 [i_14] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (max((18U), (((/* implicit */unsigned int) arr_4 [i_14])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_14])) ? (((/* implicit */int) arr_7 [14U])) : (-1372489555))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (var_5)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((((/* implicit */unsigned int) 1553577359)) | (arr_3 [i_14] [i_14] [i_14]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_10 [(unsigned char)15])) || (((/* implicit */_Bool) 1342381469)))))))));
        var_32 = ((/* implicit */int) arr_14 [i_14] [i_14]);
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 18; i_15 += 4) 
    {
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((var_8) <= (((/* implicit */int) ((((/* implicit */_Bool) 1058977387)) || (((/* implicit */_Bool) 1457625258U))))))))));
        var_34 = arr_2 [i_15] [i_15];
        var_35 = ((((/* implicit */int) arr_40 [i_15] [i_15] [i_15] [i_15])) < (((/* implicit */int) arr_40 [i_15] [i_15] [i_15] [18])));
        var_36 = ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)8)));
    }
}
