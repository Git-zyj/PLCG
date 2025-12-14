/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142108
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = var_4;
        arr_4 [i_0] &= ((/* implicit */int) max((((arr_0 [i_0]) & (arr_2 [i_0] [i_0]))), (arr_2 [i_0] [(_Bool)1])));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 4; i_3 < 12; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55077)) ? (((/* implicit */int) arr_1 [i_3 - 1] [i_3])) : (((/* implicit */int) arr_1 [i_3 + 2] [i_3 + 2]))))), (min((((/* implicit */unsigned long long int) arr_1 [i_3 - 2] [i_3 - 2])), (var_7)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_4])) ? (((/* implicit */int) var_5)) : ((-(((((/* implicit */int) (short)32508)) >> (((((/* implicit */int) var_1)) - (14830)))))))));
                        var_17 = ((/* implicit */int) max((arr_0 [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) (short)32508)) : (arr_9 [i_1] [i_3 + 1] [i_1]))))));
                    }
                    arr_15 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((+(-499518850)))))) ? (((unsigned int) (!(((/* implicit */_Bool) (signed char)-96))))) : (max((((/* implicit */unsigned int) arr_13 [i_3 + 2] [i_3 - 1] [i_3 - 1])), ((-(887904746U)))))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)105)) & ((~(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)212)) ^ (((/* implicit */int) var_9))))) ? (arr_13 [i_2] [i_3 + 1] [i_3 - 2]) : (((/* implicit */int) max(((unsigned short)10458), (((/* implicit */unsigned short) (signed char)127))))))) : (((/* implicit */int) ((unsigned char) min((((/* implicit */int) (short)-32523)), (-150945512)))))));
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */unsigned char) min((min((arr_0 [i_1]), (arr_2 [i_1] [i_1]))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)141)) ? (945481585) : (-1897270622))), (((((/* implicit */_Bool) -1219784819)) ? (1219784840) : (arr_12 [i_1] [7]))))))));
        var_19 = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1]))))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_17 [i_5])) == (((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((int) (_Bool)1))))) ? (max((max((((/* implicit */unsigned long long int) arr_18 [i_5])), (arr_2 [i_5] [i_5]))), (((/* implicit */unsigned long long int) 8779366043548425595LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5] [i_5])))));
    }
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_14 [i_6] [4] [i_6] [i_6] [i_6] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)191))))) : (((/* implicit */int) (!((_Bool)1))))))) : (((((/* implicit */_Bool) -195784708)) ? (((unsigned long long int) arr_5 [i_6] [i_6])) : (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) (signed char)127)))))))));
        /* LoopSeq 2 */
        for (short i_7 = 2; i_7 < 8; i_7 += 4) 
        {
            var_23 = ((/* implicit */int) (unsigned short)55077);
            var_24 = ((/* implicit */unsigned short) min(((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) - (-8518316604016319205LL))))), (((long long int) max((((/* implicit */unsigned int) (unsigned short)33412)), (arr_11 [12] [i_7] [i_6]))))));
        }
        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 7; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        {
                            var_25 = (+(((unsigned long long int) var_14)));
                            var_26 = ((/* implicit */int) max((var_26), (max((min((((/* implicit */int) var_10)), (arr_28 [i_6] [i_6]))), (min((-1682355420), (499518837)))))));
                            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (unsigned char)140)), (var_7)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)2536)), (arr_10 [i_10]))))))) : (((/* implicit */int) var_10))));
                        }
                    } 
                } 
            } 
            arr_36 [i_6] [i_8] |= ((/* implicit */unsigned long long int) 736926692);
            arr_37 [i_6] [i_8] = ((/* implicit */unsigned int) arr_18 [i_8]);
            arr_38 [i_8] [(unsigned short)1] = ((/* implicit */int) arr_35 [i_6] [(_Bool)1] [i_8] [4LL] [i_8] [i_8]);
            var_28 ^= ((/* implicit */signed char) ((max((((/* implicit */unsigned int) 1871830353)), (2391579744U))) * (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_24 [i_6] [(unsigned short)0])))))))));
        }
    }
    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) (unsigned short)16948);
        var_30 *= ((/* implicit */_Bool) (signed char)8);
        arr_41 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_12])) ? (arr_25 [i_12]) : (arr_0 [i_12])))) ? (((/* implicit */unsigned long long int) ((((arr_27 [i_12]) >= (((/* implicit */unsigned int) 345752071)))) ? (((/* implicit */int) ((arr_39 [9LL]) == (((/* implicit */unsigned int) 1807454652))))) : (((((/* implicit */_Bool) arr_19 [i_12])) ? (((/* implicit */int) (unsigned short)20526)) : (((/* implicit */int) arr_17 [i_12]))))))) : (((arr_31 [i_12] [i_12] [i_12] [i_12] [i_12]) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (arr_27 [5ULL])))) : (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
        var_31 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned short) arr_31 [i_12] [i_12] [i_12] [0LL] [i_12])), (arr_1 [i_12] [i_12])))))));
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) max((var_12), (((/* implicit */short) ((((var_5) ? (var_7) : (((/* implicit */unsigned long long int) arr_10 [3ULL])))) == (((/* implicit */unsigned long long int) 4936800581272101551LL))))))))));
    }
    var_33 = ((/* implicit */unsigned int) ((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) max((min(((unsigned short)1828), (((/* implicit */unsigned short) var_12)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)205)))))))))));
}
