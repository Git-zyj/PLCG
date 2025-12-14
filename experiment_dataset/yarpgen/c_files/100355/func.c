/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100355
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
    var_16 &= min((((((/* implicit */_Bool) ((long long int) var_0))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (var_15))))))), (((/* implicit */long long int) var_12)));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_3))));
    var_18 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (33546240)))) || (((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 181718096581875483LL))))));
        var_20 -= ((/* implicit */long long int) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        {
                            arr_16 [i_1] [i_2] [i_3] [i_1] [(short)5] = ((/* implicit */long long int) var_5);
                            arr_17 [i_1] [(unsigned short)10] [i_4] [1LL] = ((/* implicit */short) var_13);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 966522414)) ? (((/* implicit */int) (short)-256)) : (var_8)))) % (((((/* implicit */_Bool) -1520303597)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_2)))));
                            arr_18 [(unsigned short)7] [5] [(unsigned short)7] [10] [2LL] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1])) ? (arr_15 [i_1] [i_1] [i_3] [10LL] [6]) : (((/* implicit */long long int) var_5)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_3] [i_1] [(short)5] [i_5])) ? (arr_12 [i_1] [i_1] [8] [7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1] [1LL] [i_1] [i_1] [i_1] [i_1]))))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_1))));
        }
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            var_23 += ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [(short)0] [i_6] [(unsigned short)9] [i_6] [i_6])) || (((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1]))));
            var_24 = ((/* implicit */int) ((arr_15 [i_1] [i_1] [i_6] [i_1] [i_6]) & (arr_15 [7] [i_6] [i_1] [i_6] [i_6])));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 8; i_7 += 2) 
            {
                for (unsigned int i_8 = 3; i_8 < 8; i_8 += 3) 
                {
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19866)) ? (var_7) : (var_7)))) ? (arr_11 [i_1] [i_6] [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7 + 1])))));
                        var_26 &= ((/* implicit */short) ((((var_9) + (((/* implicit */long long int) -1956141096)))) != (arr_11 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5])));
                        arr_26 [i_8] [i_6] [i_7] [i_8 + 3] = ((/* implicit */short) ((int) arr_20 [i_8]));
                        var_27 = ((/* implicit */int) var_10);
                    }
                } 
            } 
            var_28 = 1956141095;
        }
        for (long long int i_9 = 2; i_9 < 10; i_9 += 4) 
        {
            arr_29 [(_Bool)1] [i_1] [(_Bool)1] |= ((/* implicit */int) ((((/* implicit */long long int) -1175576797)) < (arr_4 [i_9 - 1] [i_9 + 1])));
            arr_30 [i_1] [i_9] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)34239)) + (((/* implicit */int) (short)19))));
            var_29 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9 + 1] [6U] [i_1])) << (((((/* implicit */int) arr_14 [i_9 - 1] [i_9] [(short)2] [9LL] [(unsigned short)0] [(unsigned short)0] [i_9])) - (20243)))));
            arr_31 [i_1] [i_1] = ((/* implicit */unsigned short) ((130048) + (((/* implicit */int) (unsigned short)508))));
            arr_32 [i_1] = ((/* implicit */unsigned short) (~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-1836311660433559157LL)))));
        }
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [18])) ? (((/* implicit */int) arr_13 [i_1] [i_1])) : (((/* implicit */int) arr_24 [(_Bool)1] [(_Bool)1] [(_Bool)1] [0]))))) || (((/* implicit */_Bool) arr_23 [i_1] [i_1])))))));
        var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_1] [i_1])) || (((/* implicit */_Bool) arr_19 [i_1] [i_1]))));
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 997555119))))) : (((/* implicit */int) (unsigned short)23498)))))));
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    var_33 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) -5549545089628901233LL))))));
                    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((arr_27 [i_1] [i_1] [(unsigned short)2]) & (arr_27 [i_12] [i_11] [i_10]))))));
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)9] [i_1])))))) != (((((/* implicit */_Bool) var_2)) ? (342974695396662487LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    arr_40 [i_12] [i_11] [i_1] [i_11] [i_1] = ((/* implicit */long long int) ((342974695396662481LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_36 = ((/* implicit */long long int) ((((((/* implicit */long long int) var_6)) >= (4848922570455164245LL))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)39677)))) : (((/* implicit */int) arr_28 [i_1]))));
                }
                for (long long int i_13 = 1; i_13 < 8; i_13 += 4) 
                {
                    var_37 |= ((/* implicit */unsigned short) 33546240);
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_13 + 1] [i_11] [i_13] [(_Bool)1])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52124))) ^ (5916086031835780930LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [(_Bool)0] [i_10] [(_Bool)0] [i_13 + 3] [3U] [(_Bool)0] [i_13])))));
                    arr_43 [i_11] [i_13] [i_11] [i_10] [i_11] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_1] [i_1]))) >= (((((/* implicit */_Bool) -371398388342772395LL)) ? (-342974695396662482LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6508)))))));
                    arr_44 [i_1] [6LL] [6LL] [i_11] = arr_12 [i_1] [i_1] [i_1] [(unsigned short)8];
                    arr_45 [i_1] [i_10] [i_11] [i_10] [i_10] [i_10] &= ((/* implicit */unsigned short) ((long long int) var_13));
                }
                var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (arr_22 [(_Bool)1] [i_10] [i_11])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (arr_34 [(unsigned short)6] [i_10] [i_1])));
            }
            arr_46 [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_1] [(_Bool)1] [i_10]))));
            arr_47 [i_1] |= var_2;
            arr_48 [i_10] |= ((/* implicit */unsigned short) 141767398);
        }
        for (long long int i_14 = 4; i_14 < 10; i_14 += 2) 
        {
            var_40 = ((/* implicit */unsigned short) ((int) var_9));
            arr_51 [i_14] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_14] [i_1] [i_14 - 1] [i_1])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_14 [i_1] [(unsigned short)2] [(short)6] [i_1] [(_Bool)1] [i_1] [i_1])) : (((/* implicit */int) arr_28 [i_1])))) : (var_3)));
        }
    }
}
