/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157024
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_10);
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((max((arr_0 [i_0 - 3]), (arr_0 [i_0 + 3]))), (max((arr_0 [i_0 + 3]), (arr_0 [i_0 + 3]))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_1])))) : (max((((/* implicit */unsigned long long int) arr_7 [i_1])), (arr_6 [i_0] [i_0]))))) != (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_7 [i_1])))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_11)))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_14 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(unsigned short)5] [(unsigned short)5] [i_1] [(unsigned short)5])) + (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [9ULL]))))) ? (((/* implicit */int) max((arr_3 [i_0] [i_0]), ((_Bool)1)))) : (((/* implicit */int) var_9))))));
                        arr_15 [i_3] [i_2] [i_3] = ((/* implicit */_Bool) var_7);
                    }
                    for (short i_4 = 2; i_4 < 19; i_4 += 3) 
                    {
                        arr_18 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_2);
                        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                        var_16 = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))) : (8273050137973664771ULL))))));
                        arr_19 [i_4] [i_4] [i_4] [(unsigned char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) max((var_4), (((/* implicit */unsigned char) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)116)))), ((-(((/* implicit */int) var_3))))))) : (arr_12 [i_0 + 2] [i_0 + 2] [i_1] [i_4] [i_1] [i_2])));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        arr_23 [i_5] [6LL] = ((/* implicit */unsigned char) arr_7 [i_1]);
                        arr_24 [i_5] [i_1] [i_2] [i_0 - 3] [i_2] = var_12;
                        arr_25 [i_0] [i_1] [i_1] [(signed char)14] [i_1] &= (_Bool)1;
                        arr_26 [i_0 + 1] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */_Bool) var_7);
                        arr_27 [i_0] [i_0] [i_0] [i_5] [i_2] [i_1] &= arr_6 [i_2] [i_1];
                    }
                    var_17 |= ((/* implicit */unsigned int) (((!(var_12))) ? (max((arr_22 [i_0] [i_1] [(unsigned char)8] [i_2]), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_0])))))))));
                }
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        arr_31 [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_7 = 4; i_7 < 23; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                arr_37 [i_8] [i_8] [i_8] [i_6] = ((/* implicit */unsigned char) ((arr_29 [i_8]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) arr_28 [i_8])) >= (((/* implicit */int) var_3)))))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_7] [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_35 [i_6] [i_7 - 2] [i_7 - 2])));
                var_19 = ((/* implicit */unsigned long long int) ((signed char) ((arr_29 [i_8]) ? (arr_30 [(_Bool)1]) : (((/* implicit */long long int) arr_34 [i_7] [i_8])))));
                arr_38 [i_6] [i_8] [i_6] = ((/* implicit */int) var_5);
            }
            var_20 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) var_1)))));
            arr_39 [i_6] [i_6] [20U] = ((/* implicit */unsigned short) var_0);
        }
        arr_40 [i_6] = ((/* implicit */unsigned char) (!(var_12)));
    }
    for (short i_9 = 3; i_9 < 17; i_9 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_10 = 3; i_10 < 18; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                for (unsigned int i_12 = 4; i_12 < 17; i_12 += 3) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_10 - 2] [i_12 + 2] [i_12 + 2] [i_12]))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_29 [i_9])), (var_5)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)77)))) : (((/* implicit */int) min((((/* implicit */short) arr_0 [i_11])), ((short)4064)))))) : ((-(((/* implicit */int) arr_44 [(_Bool)1]))))));
                        arr_53 [i_9] [i_10] [i_9 + 3] [i_10 + 1] = ((/* implicit */unsigned int) (((_Bool)1) ? (-5411953658652652917LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_54 [i_9] [i_9] = ((max(((!(((/* implicit */_Bool) (unsigned short)53427)))), (var_11))) && ((!(((/* implicit */_Bool) arr_51 [i_12] [i_9] [4ULL] [i_9] [i_9])))));
                        var_22 -= ((/* implicit */long long int) arr_50 [7U] [7U] [i_9 - 3] [i_9 - 3]);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) var_6)))))));
        /* LoopNest 3 */
        for (unsigned int i_13 = 4; i_13 < 18; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 3; i_14 < 18; i_14 += 2) 
            {
                for (int i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    {
                        arr_63 [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9] [i_15] = ((/* implicit */unsigned short) ((unsigned int) max((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)35418)) && (((/* implicit */_Bool) var_7))))))));
                        arr_64 [i_9] [i_13] = ((/* implicit */_Bool) 259154961468643578ULL);
                        var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_9 - 3])))) * (min((((/* implicit */unsigned int) arr_29 [i_13 - 1])), (max((var_10), (((/* implicit */unsigned int) var_9))))))));
                        arr_65 [i_9] [i_9] [i_14] [i_9] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_13 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_15]))) : (var_7))));
                    }
                } 
            } 
        } 
        arr_66 [i_9] [i_9] = ((/* implicit */long long int) ((var_11) ? (arr_20 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36223)))));
    }
    for (signed char i_16 = 0; i_16 < 16; i_16 += 3) 
    {
        arr_69 [i_16] = ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) 0U)));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) arr_49 [i_16] [i_16] [12] [12]))))) ? (min((1893374671U), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_35 [i_16] [i_16] [(unsigned char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_16] [i_16] [i_16])))))) || (((/* implicit */_Bool) arr_60 [4ULL] [i_16])))))));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((_Bool) ((min((var_5), (((/* implicit */unsigned int) (_Bool)1)))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))))))));
    }
    var_27 += ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))) - ((-(16079732051744040584ULL))))));
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)163)), (776629078U)))), ((+(((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
    var_29 = ((/* implicit */signed char) (~(min((var_10), (((/* implicit */unsigned int) max((var_9), (((/* implicit */unsigned char) var_11)))))))));
    var_30 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) (+(var_5))))))), (max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (var_0)))))));
}
