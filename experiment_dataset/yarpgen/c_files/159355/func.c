/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159355
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0] [(signed char)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) arr_6 [2LL] [i_2] [i_1 + 1] [2LL]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) arr_4 [i_1 + 1] [i_1 + 1]));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_13 [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((unsigned short) (short)32756)))));
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) 6355862056698159060ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6355862056698159053ULL)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) (short)0)) ? (arr_1 [(unsigned short)12] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    }
    var_13 |= ((/* implicit */short) ((unsigned long long int) min((min(((unsigned short)38525), (((/* implicit */unsigned short) (unsigned char)5)))), (((/* implicit */unsigned short) ((short) (short)32767))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_8 = 2; i_8 < 24; i_8 += 1) 
                        {
                            arr_32 [i_4] [i_5] [i_5] [i_7] [i_8 - 2] [i_8] = ((/* implicit */short) (+(((/* implicit */int) arr_25 [i_6] [i_7] [i_4 + 3] [i_7] [i_8 - 2] [i_4 + 3]))));
                            arr_33 [i_4] [i_4] [i_4] [i_4] [i_7] [i_8 - 1] [(unsigned short)23] = ((/* implicit */long long int) (unsigned short)2235);
                            var_14 = ((/* implicit */unsigned short) arr_23 [i_8] [i_6] [i_5] [i_4 + 3]);
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned int) var_2);
                            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_4 + 3] [i_4] [i_4 + 3] [i_4 + 3])) && (((/* implicit */_Bool) (unsigned short)2235)))))));
                        }
                        var_17 = ((/* implicit */_Bool) ((short) ((unsigned long long int) ((((/* implicit */_Bool) 3866743039U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (3439506119U)))));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (short)-31976))));
                        arr_36 [i_4] [i_4] [i_6] [i_7] [i_4] [i_4] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_6] [i_4 + 2]))))) ? (((/* implicit */int) max((arr_14 [i_6] [i_4 + 3]), (arr_14 [i_7] [i_4 + 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)10)) && (((/* implicit */_Bool) 3866743028U))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_0)))))))) && (((/* implicit */_Bool) ((unsigned short) (((_Bool)1) ? (arr_16 [i_4] [i_4]) : (((/* implicit */int) arr_21 [(short)5])))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 1; i_10 < 23; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 1; i_11 < 24; i_11 += 4) 
            {
                for (short i_12 = 4; i_12 < 24; i_12 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            arr_48 [i_11] [i_10] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_49 [i_4] [i_11] [i_4] = max((((unsigned long long int) -1355433262490332286LL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((5085787719242179914LL) & (((/* implicit */long long int) ((/* implicit */int) arr_34 [(unsigned char)21] [i_13] [i_13] [i_13] [i_13])))))) && (((((/* implicit */_Bool) arr_15 [i_12] [i_13])) && (((/* implicit */_Bool) var_6))))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            arr_52 [i_4] [0ULL] [i_11] [i_11] [i_14] [0ULL] = ((/* implicit */short) max(((!(((/* implicit */_Bool) min((var_8), (arr_39 [i_4] [i_11 + 1] [i_4] [i_14])))))), (((((/* implicit */_Bool) min((6355862056698159037ULL), (((/* implicit */unsigned long long int) var_7))))) && (((/* implicit */_Bool) var_7))))));
                            var_20 = ((/* implicit */unsigned int) ((unsigned long long int) (short)-5014));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) (+(0LL)));
                            arr_55 [i_11] [i_11] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_15 [i_4] [(unsigned short)21]))))), (((((/* implicit */_Bool) arr_14 [i_4 - 2] [i_10 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4 - 1] [i_10 + 1]))) : (327542994U))));
                            arr_56 [i_4] [i_4] [i_4] [i_4 + 1] [2ULL] [i_11] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_41 [i_4 + 2] [i_4 + 2] [i_11 - 1] [i_11 - 1])))))))));
                            arr_57 [i_12] [i_12] [i_11] [i_12] [i_11] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 2588170396651367143ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_4] [i_4] [i_11]))) : (arr_29 [i_12 - 3])))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_16 = 1; i_16 < 21; i_16 += 1) /* same iter space */
                        {
                            var_22 &= ((/* implicit */unsigned char) 2972685947057359789LL);
                            var_23 ^= ((/* implicit */short) (((_Bool)0) ? (3136029501U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6945)))));
                        }
                        for (unsigned char i_17 = 1; i_17 < 21; i_17 += 1) /* same iter space */
                        {
                            var_24 = (!(((/* implicit */_Bool) 279719847U)));
                            arr_62 [i_10] [(short)12] [i_10] [i_10] [i_11] = ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */long long int) arr_35 [i_10] [i_10 + 1] [i_10 + 2] [(unsigned short)11] [i_10 - 1])), (var_7))));
                            arr_63 [i_4] [i_10 + 2] [i_11] [i_11] [i_17 - 1] = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)46092)))) ? (((/* implicit */int) ((short) (+(((/* implicit */int) var_6)))))) : ((+(((((/* implicit */_Bool) arr_34 [i_4] [i_10] [i_10] [i_12] [i_17 + 4])) ? (((/* implicit */int) arr_35 [i_4] [i_4] [i_11] [i_12] [i_17])) : (((/* implicit */int) var_6))))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 216621055)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 3136029501U)) : (var_7)))))) ? (max((((/* implicit */int) arr_35 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 + 2])), (min((-10), (((/* implicit */int) arr_31 [i_4] [i_4] [i_4] [(_Bool)1] [i_4] [(unsigned char)11] [i_4])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_10] [i_11 + 1])) && ((!(((/* implicit */_Bool) arr_40 [i_4] [i_11] [i_11] [19U])))))))));
                        }
                        arr_64 [i_11] [i_11] = ((/* implicit */unsigned char) ((_Bool) var_2));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 4) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((unsigned long long int) var_0)) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_4 + 2])))))) ? ((~(((((/* implicit */_Bool) (short)11658)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17572))))))) : (((((/* implicit */_Bool) arr_23 [i_4] [i_4 - 1] [i_4 - 1] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_19] [i_4 - 1] [i_18] [i_19] [(short)11] [i_20] [i_20]))) : (7940058091202010799ULL))))))));
                            var_27 -= ((/* implicit */unsigned long long int) (unsigned short)30772);
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_2))));
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_19 [i_10 - 1] [i_20] [i_10 - 1]))));
                            var_30 = ((/* implicit */_Bool) arr_31 [i_4] [i_10 - 1] [i_10] [(unsigned short)8] [i_18] [i_10] [i_20]);
                        }
                    } 
                } 
            } 
        }
        arr_72 [i_4] [i_4 + 3] |= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_43 [i_4] [14ULL] [i_4 + 2] [14ULL])) && (((/* implicit */_Bool) arr_43 [i_4] [16ULL] [i_4 - 1] [i_4])))));
        /* LoopNest 3 */
        for (unsigned short i_21 = 0; i_21 < 25; i_21 += 2) 
        {
            for (signed char i_22 = 0; i_22 < 25; i_22 += 4) 
            {
                for (unsigned char i_23 = 0; i_23 < 25; i_23 += 1) 
                {
                    {
                        arr_79 [2LL] [i_23] [(_Bool)1] [i_21] [i_21] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (_Bool)1)) / (arr_66 [i_4] [i_21] [i_22] [i_23]))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_0)))))))) ? (17633412389267310301ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_4 + 2] [i_4]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_27 [i_21] [i_22]))))))))));
                        arr_80 [i_4] [i_21] [i_21] [i_22] [i_23] = ((/* implicit */short) arr_43 [i_22] [i_21] [i_22] [20ULL]);
                        var_31 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_18 [i_23])), (((unsigned int) ((((/* implicit */int) arr_38 [i_4 - 1])) ^ (((/* implicit */int) var_2)))))));
                        var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned int) var_0)), (arr_17 [(signed char)5])))))) && (((((/* implicit */_Bool) arr_50 [i_4 - 1] [i_4 - 1] [i_4 - 1] [14ULL] [i_4])) && (((/* implicit */_Bool) arr_50 [i_4 - 1] [i_4 + 3] [i_4] [i_4] [i_4]))))));
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) arr_67 [i_22] [i_21] [i_21]))));
                    }
                } 
            } 
        } 
    }
}
