/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102710
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
    var_12 |= ((/* implicit */long long int) ((_Bool) var_2));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) ((unsigned long long int) ((var_5) / (min((-6012197705733127422LL), (((/* implicit */long long int) arr_0 [i_0])))))));
        arr_4 [i_0] = var_2;
        var_13 = ((/* implicit */unsigned int) ((((long long int) arr_0 [i_0 - 2])) * (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0 - 2])))))));
    }
    for (signed char i_1 = 2; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((((_Bool) (!(((/* implicit */_Bool) var_0))))) ? (((/* implicit */long long int) (-(var_11)))) : (((((/* implicit */_Bool) ((short) arr_0 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (max((6012197705733127416LL), (((/* implicit */long long int) arr_1 [i_1])))))));
        arr_9 [(unsigned short)7] [(unsigned short)7] = arr_1 [(_Bool)1];
        var_14 |= ((/* implicit */_Bool) (((!(arr_5 [10U] [i_1 - 2]))) ? (((((/* implicit */_Bool) (short)-32745)) ? (6012197705733127423LL) : (6012197705733127418LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 - 2])))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_7 [i_1 - 2])) <= (((/* implicit */int) arr_2 [i_1 - 1])))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (long long int i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned char)2), (arr_2 [i_2]))))))), (arr_7 [i_3])));
                            var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -1587432336092735688LL)) ? (arr_11 [(signed char)10] [(signed char)10] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_18 = ((/* implicit */long long int) (short)-13999);
                            var_19 -= ((/* implicit */unsigned long long int) (+(var_1)));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_6 = 1; i_6 < 20; i_6 += 2) 
            {
                for (unsigned int i_7 = 3; i_7 < 21; i_7 += 1) 
                {
                    {
                        arr_24 [i_1 - 1] [(signed char)0] [i_2] [i_2] &= ((/* implicit */_Bool) (+(((arr_13 [i_1 - 2] [i_6 + 3] [i_7] [i_6 + 3]) ^ (arr_19 [i_1 + 1] [i_6 + 3] [(short)18] [i_6] [i_6 + 1] [(unsigned char)0])))));
                        arr_25 [i_1 + 1] [i_6] [i_6] [i_6] [i_7] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_13 [i_7] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_6 + 3])) ? (4676852760280787489LL) : (-6012197705733127421LL)))) : ((+(308880924464889498ULL))))), (((/* implicit */unsigned long long int) arr_1 [i_1 + 1]))));
                        arr_26 [i_1] [i_2] [i_6] [i_7] [i_6] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned int) ((signed char) (~(arr_13 [i_6] [i_6] [i_6 + 3] [i_6]))))), (max((max((511U), (((/* implicit */unsigned int) arr_17 [i_1] [i_6] [i_6] [i_7 + 2])))), (((/* implicit */unsigned int) arr_20 [i_6] [i_6] [i_7]))))));
                        arr_27 [i_6] [i_2] [i_6] [(_Bool)1] = ((/* implicit */unsigned char) (!(((((308880924464889495ULL) ^ (((/* implicit */unsigned long long int) 4095U)))) == (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6] [(_Bool)1]))) - (arr_18 [i_1] [2] [i_6] [i_6] [i_7]))))))));
                    }
                } 
            } 
        }
    }
    for (signed char i_8 = 2; i_8 < 22; i_8 += 2) /* same iter space */
    {
        arr_32 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_8 - 1]))) ? ((~(((/* implicit */int) arr_10 [i_8 - 1])))) : (((((/* implicit */_Bool) arr_10 [i_8 - 1])) ? (((/* implicit */int) (short)14004)) : (((/* implicit */int) arr_10 [i_8 - 1]))))));
        arr_33 [i_8] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_29 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((4121456080164446624LL) != (((/* implicit */long long int) ((/* implicit */int) (short)13985))))))) : (max((arr_11 [i_8 - 2] [i_8] [i_8]), (((/* implicit */unsigned long long int) var_6)))))));
        var_20 = max(((~(-7872859211703253448LL))), (max(((+(var_6))), (((/* implicit */long long int) arr_31 [i_8 - 1])))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                {
                    arr_39 [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)32760)), (var_1)))), (11ULL))) != (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) 1623529299)) - (var_5)))))));
                    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)19696))));
                    arr_40 [i_8] [i_9] [i_8] [i_9] = ((/* implicit */signed char) max((((/* implicit */int) max(((unsigned short)19682), (((/* implicit */unsigned short) (short)-32755))))), (1623529287)));
                }
            } 
        } 
        arr_41 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_14 [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_8 - 2] [i_8]), (((((/* implicit */_Bool) -6012197705733127437LL)) ? (-6012197705733127436LL) : (((/* implicit */long long int) ((/* implicit */int) (short)511)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_8 + 1])) ? (max((((/* implicit */long long int) (short)-13969)), (var_6))) : (var_5)))) : (((((/* implicit */_Bool) (-(6012197705733127437LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_8] [i_8 + 1] [i_8] [i_8 - 1]))) : (arr_11 [i_8 - 1] [i_8 - 1] [i_8 - 2])))));
    }
}
