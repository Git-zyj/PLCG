/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123282
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
    var_17 ^= ((/* implicit */signed char) var_7);
    var_18 &= ((/* implicit */unsigned short) var_6);
    var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((((/* implicit */int) var_4)), (var_9)))))) : (var_12)));
    var_20 ^= ((/* implicit */_Bool) (signed char)-1);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [(unsigned char)12] = ((/* implicit */unsigned int) var_15);
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_13))));
        var_22 = ((/* implicit */unsigned short) ((unsigned int) var_15));
        arr_3 [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((int) ((unsigned int) var_12)))), (arr_0 [i_0]));
        var_23 = ((/* implicit */unsigned int) min(((+(min((((/* implicit */unsigned long long int) var_12)), (arr_0 [i_0]))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15)))), (((/* implicit */int) ((short) arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_24 = ((/* implicit */_Bool) max((var_24), ((_Bool)1)));
        arr_6 [i_1] [i_1] = ((/* implicit */int) var_5);
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_1] [i_2])))));
                var_26 = ((/* implicit */signed char) ((7U) < (((/* implicit */unsigned int) arr_1 [i_1] [i_1]))));
                /* LoopSeq 3 */
                for (unsigned short i_4 = 2; i_4 < 12; i_4 += 4) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_4 - 1] [i_1] [i_1] [i_4 + 2])) & (((/* implicit */int) arr_13 [i_1] [i_1]))));
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((unsigned int) arr_0 [i_4 + 1]))));
                    var_29 = ((/* implicit */unsigned short) ((((long long int) arr_5 [1U])) << (((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned int) var_3)) : (var_5))) - (1761184181U)))));
                }
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [5LL])) - (((/* implicit */int) (short)-32762))))) ? (var_2) : (((/* implicit */int) ((signed char) var_1)))));
                    var_31 ^= var_14;
                    var_32 ^= ((/* implicit */_Bool) var_10);
                    arr_17 [i_5] [0U] [i_1] [i_1] &= ((short) arr_4 [i_2]);
                }
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 1; i_7 < 12; i_7 += 1) 
                    {
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) var_10))));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((unsigned short) ((var_10) * (15236163107819488639ULL)))))));
                        var_35 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (short)-24176)))) >> (((/* implicit */int) arr_16 [i_2] [i_3]))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        var_36 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) <= (((var_8) ? (((/* implicit */unsigned long long int) var_14)) : (var_7)))));
                        var_37 ^= ((/* implicit */unsigned char) ((unsigned long long int) arr_13 [2U] [6]));
                        var_38 = ((/* implicit */unsigned int) (~(var_7)));
                        arr_27 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) arr_25 [i_2] [i_3] [i_6] [i_8]));
                    }
                    var_39 ^= ((/* implicit */int) (-(4294967295U)));
                }
            }
            var_40 ^= ((/* implicit */short) ((33554431ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10393)))));
            arr_28 [i_1] = ((/* implicit */unsigned int) var_4);
        }
        for (unsigned short i_9 = 2; i_9 < 12; i_9 += 1) 
        {
            var_41 = ((/* implicit */unsigned short) ((long long int) ((_Bool) (!(((/* implicit */_Bool) 19U))))));
            var_42 ^= ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [10U]))) ^ (((unsigned long long int) (unsigned char)253)))));
            arr_33 [i_1] [(_Bool)1] [8U] = ((/* implicit */int) (_Bool)1);
        }
        for (long long int i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
        {
            arr_37 [i_1] [i_1] [i_10] = ((/* implicit */unsigned short) (~(var_2)));
            var_43 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (min((arr_20 [i_10] [i_10] [i_10] [13LL]), (((/* implicit */unsigned long long int) var_0)))))))) < (((max((var_12), (((/* implicit */unsigned int) (unsigned short)50956)))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) var_5))));
        }
        for (long long int i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
        {
            arr_41 [i_1] = ((/* implicit */short) arr_40 [i_1] [i_1]);
            var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10392)) ? (((/* implicit */int) arr_16 [i_1] [i_11])) : (((/* implicit */int) var_13))))) ? (var_7) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_31 [i_1])), (3U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [i_11])) > (arr_31 [i_1]))))) : (min((((/* implicit */unsigned int) arr_13 [i_11] [i_1])), (min((var_5), (((/* implicit */unsigned int) (unsigned short)15940))))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_12 = 3; i_12 < 18; i_12 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_13 = 1; i_13 < 20; i_13 += 2) 
        {
            arr_48 [i_12] = ((/* implicit */unsigned char) arr_44 [i_13]);
            /* LoopNest 3 */
            for (short i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                for (short i_15 = 3; i_15 < 19; i_15 += 1) 
                {
                    for (unsigned int i_16 = 4; i_16 < 20; i_16 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */short) ((unsigned char) arr_51 [i_15 - 1] [i_15] [i_15 + 2] [14U]));
                            var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_16])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10)))))))));
                            arr_56 [i_14] [i_12] = ((/* implicit */short) arr_50 [i_16] [(unsigned char)0] [(signed char)0]);
                            arr_57 [i_12] = ((/* implicit */int) ((unsigned int) (short)-32762));
                        }
                    } 
                } 
            } 
            var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) 2616039119U))));
        }
        var_49 ^= ((/* implicit */unsigned int) (!(arr_50 [i_12 - 2] [i_12 - 3] [i_12 - 1])));
        arr_58 [i_12] = ((/* implicit */unsigned long long int) ((int) ((unsigned char) arr_52 [i_12 - 1] [i_12])));
        var_50 ^= ((/* implicit */unsigned char) (~(var_12)));
    }
}
