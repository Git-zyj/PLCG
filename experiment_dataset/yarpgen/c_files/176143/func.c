/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176143
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (short)32767))))) % (((int) (unsigned short)38926))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((unsigned char) var_7))) - (arr_1 [i_0 - 1] [i_0 - 1]))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10062858095148507305ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2859507941U)))) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [6LL])))))))));
        var_13 = min((((unsigned long long int) (+(var_2)))), (min((max((10062858095148507305ULL), (((/* implicit */unsigned long long int) var_9)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17068201530187560422ULL))))));
        var_14 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 196620447U)) ? (8383885978561044311ULL) : (((/* implicit */unsigned long long int) 2147483647))))))) ? ((~(arr_2 [i_0 - 1]))) : ((+(((4699876976372334353ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 2] [3U])) : (((/* implicit */int) arr_0 [6ULL])))))))), (((((/* implicit */_Bool) arr_4 [i_1 - 4] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_0 - 1])) : (max((arr_2 [i_0]), (arr_2 [i_0])))))));
            var_16 = ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (short)-7276)) ? (((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_1])) : (((/* implicit */int) (_Bool)0))))))) ? ((((!(((/* implicit */_Bool) arr_6 [i_0 - 1])))) ? (((/* implicit */int) ((1202376759) < (((/* implicit */int) var_9))))) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_4)))));
        }
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
            {
                var_17 = var_4;
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))));
            }
            for (long long int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 3; i_5 < 8; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_19 = (!(((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_6)))))));
                            var_20 = ((/* implicit */unsigned short) ((((((arr_15 [7] [i_2] [i_4] [i_5]) ^ (((/* implicit */unsigned int) var_2)))) >= (((/* implicit */unsigned int) (+((-2147483647 - 1))))))) && (((/* implicit */_Bool) ((arr_17 [(signed char)10] [i_0 - 1] [i_4] [i_5 + 1]) | (2052416448))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_20 [i_0 - 1] [i_5 - 2]) << (((arr_7 [i_0 - 1]) - (3806179378U)))))) ? (((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (((/* implicit */unsigned int) arr_20 [i_0 - 1] [i_5 - 2])) : (arr_7 [i_0 - 1]))) : (((/* implicit */unsigned int) (~(arr_20 [i_0 - 1] [i_5 + 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_7 = 1; i_7 < 10; i_7 += 2) 
                {
                    var_22 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)85)), (((unsigned int) arr_22 [i_0 - 1] [i_4] [i_0 - 1] [i_0 - 1] [i_4] [i_0 - 1] [i_7 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), ((unsigned char)255)))))) ? (((/* implicit */int) (unsigned short)38926)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [10] [i_2] [i_4] [10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_4] [i_7] [i_8]))))))))));
                        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((3068354421781848742ULL) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))))) == (max((((int) var_8)), (((((/* implicit */_Bool) arr_28 [4LL] [i_2] [i_2] [i_2] [i_8] [i_7] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                    var_25 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)32767)) & (-1))) << ((((~(((((/* implicit */int) var_4)) ^ (arr_17 [i_7 + 1] [i_2] [i_4] [i_0]))))) - (1546725296)))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_9 = 4; i_9 < 10; i_9 += 2) 
                {
                    var_26 += ((/* implicit */signed char) (unsigned short)17043);
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), ((+(((/* implicit */int) var_10))))))) ? (((unsigned long long int) ((unsigned short) 17136367998598187644ULL))) : (arr_6 [i_9 + 1])));
                    var_28 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)15))));
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) arr_20 [i_0 - 1] [i_9 - 3])), (((((/* implicit */_Bool) 8383885978561044310ULL)) ? (((/* implicit */unsigned long long int) arr_28 [i_9] [i_2] [i_2] [i_9] [9U] [5] [i_4])) : (arr_12 [i_2])))))))));
                    var_30 ^= ((((arr_7 [i_0 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) << (((((10062858095148507305ULL) + (arr_29 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_9 + 1]))) - (515463011359865166ULL))));
                }
                var_31 = (unsigned short)35719;
            }
            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0 - 1] [i_0] [i_2])) : (arr_23 [i_0]))))));
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 10; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    {
                        var_33 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_5 [i_0 - 1] [i_2] [i_10])))))))) ^ (min((-533181920), (((/* implicit */int) var_8))))));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) arr_10 [i_0] [i_0]))));
                    }
                } 
            } 
            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) 110243904))))))))));
            var_36 = ((/* implicit */long long int) var_1);
        }
        /* vectorizable */
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            /* LoopNest 3 */
            for (short i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                for (long long int i_14 = 4; i_14 < 8; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) 2147483647))));
                            var_38 = ((/* implicit */unsigned int) (+(var_2)));
                            var_39 = ((/* implicit */long long int) 1787616615);
                            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (arr_37 [i_0 - 1] [i_14 + 3]) : (((/* implicit */int) arr_39 [10] [i_0] [i_0 - 1] [i_0 - 1]))));
                        }
                    } 
                } 
            } 
            var_41 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_12])) : (((/* implicit */int) arr_40 [i_12] [i_12] [i_12] [i_12]))))) + (0U)));
        }
        for (unsigned int i_16 = 1; i_16 < 9; i_16 += 4) 
        {
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (short)-20838)) - (((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((signed char) (unsigned short)50359))) : (((/* implicit */int) (unsigned short)35719))));
            var_43 ^= ((/* implicit */_Bool) (unsigned short)35719);
        }
    }
    for (signed char i_17 = 0; i_17 < 18; i_17 += 2) 
    {
        var_44 = ((/* implicit */int) (-(3507765105U)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_18 = 4; i_18 < 17; i_18 += 4) 
        {
            var_45 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
            var_46 = ((/* implicit */unsigned char) var_2);
            var_47 = ((/* implicit */unsigned long long int) ((int) var_8));
        }
        var_48 = ((/* implicit */long long int) (((+(((/* implicit */int) var_6)))) / (((((/* implicit */_Bool) 4699876976372334351ULL)) ? ((+(((/* implicit */int) arr_51 [i_17] [i_17])))) : ((+(((/* implicit */int) var_3))))))));
    }
}
