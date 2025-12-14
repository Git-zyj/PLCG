/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149821
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [(unsigned short)8] [i_0])) ? (((/* implicit */int) (short)-3271)) : (var_3))) + ((~(((/* implicit */int) arr_0 [i_0]))))));
        var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-1914827755) : (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1874675309)) ? (((((/* implicit */_Bool) 1097120336)) ? (((/* implicit */int) (short)-25245)) : (-1097120336))) : ((~(var_2)))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    arr_13 [i_3] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                    var_15 |= ((/* implicit */unsigned char) arr_11 [(short)17] [4U] [4U] [i_4]);
                    arr_14 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) -1097120332)) ? (6599965087689258087ULL) : (11846778986020293529ULL)));
                    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-9762))));
                }
                /* LoopSeq 3 */
                for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 11846778986020293522ULL)) ? (var_0) : (arr_22 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [(unsigned char)12] [i_3] [i_5] [i_5] [i_6])))));
                        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)9778)) ? (((/* implicit */long long int) arr_6 [i_1])) : (-4446284350912634972LL)));
                    }
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        var_19 -= ((/* implicit */short) (-(((/* implicit */int) var_9))));
                        var_20 = ((/* implicit */unsigned short) (-(3799735475U)));
                        arr_25 [i_7] [i_3] [i_3] = ((/* implicit */long long int) (short)-9755);
                    }
                    var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27533)) ? ((~(arr_20 [i_1] [i_1] [i_3] [i_3] [i_5]))) : (((/* implicit */int) var_8))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_19 [i_5] [i_5] [i_1] [i_2] [i_1] [6ULL]))));
                    var_23 = ((/* implicit */unsigned long long int) (!(((_Bool) var_0))));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 3; i_8 < 20; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) 941447578);
                        var_25 = ((/* implicit */unsigned long long int) (~(-7058731614291451712LL)));
                        var_26 += ((/* implicit */unsigned short) (_Bool)0);
                    }
                    for (unsigned short i_9 = 1; i_9 < 19; i_9 += 3) 
                    {
                        arr_31 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_3])) ? (arr_9 [i_3] [i_3] [i_5]) : (arr_9 [i_3] [i_2] [i_5])));
                        arr_32 [i_3] [(short)13] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)20148))))) ? (((/* implicit */unsigned int) arr_28 [i_3])) : (arr_22 [i_9 + 3])));
                    }
                }
                for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((_Bool) (~(var_11))));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6599965087689258077ULL)) ? (((/* implicit */int) arr_12 [i_3] [i_3] [i_2] [i_3])) : (((/* implicit */int) (signed char)50))));
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (~(arr_6 [i_1]))))));
                    arr_36 [i_1] [i_3] [i_3] [i_10] = ((/* implicit */long long int) (-(arr_6 [i_1])));
                    var_30 = (i_3 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_2])) ? (((var_4) >> (((arr_28 [i_3]) - (1898464756))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_3] [i_3] [(signed char)0] [(_Bool)1])))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_2])) ? (((var_4) >> (((((arr_28 [i_3]) - (1898464756))) - (144071042))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_3] [i_3] [(signed char)0] [(_Bool)1]))))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_31 = ((((/* implicit */_Bool) (short)-9757)) ? (6599965087689258077ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_41 [i_3] [i_12])) : ((-(((/* implicit */int) arr_17 [i_1] [i_3] [(unsigned short)17] [i_1] [i_11] [i_12]))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_11)))) ? (((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-3849)))) : ((+(((/* implicit */int) (_Bool)1))))));
                        arr_45 [i_3] [i_2] [i_3] [i_3] [i_13] [i_3] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_11] [i_13])) ? (((/* implicit */unsigned long long int) var_7)) : (140187732541440ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_13] [i_11] [i_3] [i_2]))) : ((((_Bool)1) ? (7058731614291451712LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                    }
                    var_34 = ((/* implicit */unsigned short) var_10);
                    var_35 = ((/* implicit */long long int) (_Bool)1);
                }
                var_36 = ((/* implicit */long long int) (~(((/* implicit */int) arr_43 [i_1] [i_2] [i_3] [i_3] [i_1]))));
                var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (-(var_1))))));
            }
            for (int i_14 = 0; i_14 < 22; i_14 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_15 = 1; i_15 < 20; i_15 += 3) 
                {
                    arr_51 [i_1] [i_15] [i_15] [i_15] [i_15] = (~((+(arr_29 [8LL] [i_15] [i_14] [i_15] [i_1]))));
                    arr_52 [i_15] [7ULL] [1U] [i_15 + 2] [i_15] = ((/* implicit */long long int) (+(arr_34 [i_14] [i_15 + 2] [i_15 - 1])));
                }
                var_38 = ((/* implicit */int) ((long long int) (~(var_7))));
                var_39 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_37 [i_2] [i_1] [i_2])) * (17704541252384193617ULL)));
            }
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                var_40 = ((/* implicit */unsigned int) (_Bool)0);
                var_41 = ((/* implicit */short) (-((~(6606582472782100081ULL)))));
                var_42 = ((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_2] [i_16]);
            }
            var_43 = ((/* implicit */long long int) (short)(-32767 - 1));
            var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))));
            arr_57 [i_1] [6LL] [6LL] = ((/* implicit */short) arr_9 [2] [i_2] [i_1]);
        }
        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_20 [0] [i_1] [(_Bool)1] [i_1] [i_1])))) ? (((/* implicit */int) arr_49 [i_1] [4] [i_1] [i_1])) : (((int) var_7))));
    }
    var_46 = ((/* implicit */int) (-(9180501734175335127ULL)));
    var_47 |= ((/* implicit */long long int) var_0);
}
