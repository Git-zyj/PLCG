/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188301
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) arr_1 [11LL]);
        arr_4 [2U] = ((/* implicit */short) (!(((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531))) : (697725158061388683LL))) << (((((/* implicit */int) (unsigned short)1428)) - (1407))))))));
        var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(min((((/* implicit */int) var_10)), (var_9)))))), (max((((/* implicit */unsigned long long int) max((arr_1 [(unsigned short)4]), (((/* implicit */int) var_3))))), ((-(arr_3 [i_0] [i_0])))))));
    }
    for (unsigned int i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
        {
            for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
            {
                {
                    arr_12 [i_1 + 1] = ((/* implicit */unsigned char) max((arr_11 [i_1] [i_2 - 1] [i_2 - 1]), (max(((+(697725158061388698LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))))));
                    arr_13 [i_1 - 1] [(_Bool)1] [i_1 - 1] = arr_6 [i_3];
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_1 + 2])))));
                }
            } 
        } 
        arr_14 [i_1] &= ((/* implicit */signed char) ((arr_9 [(unsigned char)12]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_5 [i_1 + 3])) ? (((/* implicit */unsigned long long int) arr_6 [i_1 + 3])) : (max((arr_8 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_10))))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned int) arr_19 [i_5] [i_5] [i_5] [i_5]);
                        /* LoopSeq 3 */
                        for (long long int i_7 = 3; i_7 < 22; i_7 += 3) 
                        {
                            arr_26 [(signed char)1] [i_4] [i_5] [(unsigned short)3] [i_7] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                            var_16 -= ((/* implicit */unsigned short) arr_5 [i_4]);
                        }
                        for (int i_8 = 2; i_8 < 22; i_8 += 2) 
                        {
                            arr_29 [(_Bool)1] [i_5] [(signed char)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)1428), (((/* implicit */unsigned short) arr_17 [i_8 + 1] [i_8 - 2]))))) || ((!(((/* implicit */_Bool) var_4))))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_28 [i_1] [i_8 + 1] [i_6] [i_1 - 1] [4LL] [16ULL] [16ULL])))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_18 = (-(((/* implicit */int) arr_22 [i_6] [i_6] [(unsigned char)14] [i_6])));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245))))))))));
                            var_20 = ((/* implicit */unsigned char) arr_21 [i_1] [i_1] [i_6] [i_9]);
                            arr_32 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_28 [i_1 - 3] [i_1 + 1] [i_1 - 2] [12U] [i_1] [i_1 + 1] [i_1 + 2]);
                            arr_33 [i_1] [i_4] [i_5] [i_6] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_6] [i_1 - 1] [17LL] [i_1 + 1] [i_1 + 1] [i_1 + 3])) ? (((/* implicit */int) arr_9 [i_1 - 3])) : (var_9)));
                        }
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_4)))))))), (arr_11 [(signed char)14] [i_4] [i_4]))))));
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_11 [i_1] [i_1 - 2] [i_1 + 1]), (((/* implicit */long long int) var_0)))))));
                    }
                    var_23 -= ((/* implicit */short) arr_15 [i_5]);
                    arr_34 [18LL] [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) var_5)), ((-(((/* implicit */int) arr_23 [(signed char)12] [(signed char)12] [(signed char)2] [i_1 - 3]))))));
                }
            } 
        } 
        var_24 -= ((/* implicit */unsigned int) max((max((arr_16 [i_1 + 2] [i_1 + 4]), (arr_11 [(signed char)3] [i_1 + 1] [i_1]))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                for (signed char i_12 = 2; i_12 < 23; i_12 += 2) 
                {
                    {
                        arr_42 [i_1] [i_1] [i_1] [i_10] [i_11] [i_12] = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_1 + 2])) : (((/* implicit */int) arr_9 [i_1 + 4]))))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_4))));
                        var_26 = ((/* implicit */unsigned char) max((max((arr_38 [i_1 + 3] [i_12 + 1] [i_1 + 3] [i_1 + 3]), (arr_38 [i_1 - 3] [i_12 - 2] [i_12] [i_12]))), (arr_38 [i_1] [i_10] [i_11] [(short)15])));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
    {
        arr_46 [i_13] [i_13] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_44 [i_13]))))), (((((/* implicit */_Bool) arr_18 [i_13] [i_13] [i_13] [i_13])) ? (arr_44 [i_13]) : (arr_44 [i_13]))));
        arr_47 [i_13] [i_13] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_17 [i_13] [i_13]), (arr_17 [i_13] [i_13])))), (max((max((arr_19 [i_13] [(unsigned char)4] [i_13] [i_13]), (((/* implicit */unsigned long long int) arr_23 [i_13] [i_13] [i_13] [2ULL])))), (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
        arr_48 [i_13] [i_13] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_37 [i_13] [i_13] [i_13])), (var_4)));
        var_27 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (((unsigned int) var_5)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
    {
        arr_52 [i_14] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) arr_35 [i_14] [i_14]))));
        arr_53 [i_14] [i_14] = ((/* implicit */unsigned long long int) var_9);
        /* LoopNest 3 */
        for (short i_15 = 3; i_15 < 17; i_15 += 3) 
        {
            for (int i_16 = 0; i_16 < 19; i_16 += 1) 
            {
                for (unsigned short i_17 = 2; i_17 < 18; i_17 += 3) 
                {
                    {
                        arr_62 [i_17] [i_14] [i_16] [i_14] [i_14] = ((/* implicit */int) arr_38 [i_14] [i_15 - 1] [i_16] [5LL]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_18 = 1; i_18 < 16; i_18 += 3) 
                        {
                            arr_66 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_3))))));
                            arr_67 [i_14] [i_14] = ((/* implicit */unsigned char) ((short) arr_37 [i_15 + 1] [i_17 - 1] [i_17 - 1]));
                            var_28 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_19 = 0; i_19 < 19; i_19 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned int) (+((+(max((((/* implicit */int) var_6)), (var_9)))))));
                            arr_70 [i_14] [i_15] [i_15] [i_14] [i_15] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (max((((/* implicit */unsigned long long int) arr_30 [i_15])), (var_2))) : (var_2)))));
                        }
                        arr_71 [14LL] [14LL] [6LL] [2U] [(unsigned short)10] |= ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) arr_23 [(unsigned short)14] [i_15] [i_16] [i_15 - 2])), (arr_37 [i_17 - 2] [i_15 - 1] [i_16])))), (max((var_9), (((/* implicit */int) arr_23 [(unsigned char)14] [(short)20] [i_16] [i_15 - 2]))))));
                    }
                } 
            } 
        } 
        var_30 |= ((/* implicit */unsigned long long int) arr_17 [13U] [i_14]);
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) max((((/* implicit */unsigned int) (-(max((var_9), (((/* implicit */int) var_7))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) arr_28 [i_14] [i_14] [i_14] [i_14] [(unsigned short)1] [i_14] [i_14]))))), (var_0))))))));
    }
    for (unsigned short i_20 = 0; i_20 < 19; i_20 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_21 = 0; i_21 < 19; i_21 += 2) 
        {
            for (short i_22 = 1; i_22 < 17; i_22 += 2) 
            {
                {
                    var_32 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((var_0), (arr_78 [i_22 + 1] [i_21] [i_20] [5])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * ((+(9705855188696951431ULL)))))));
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) var_10))));
                }
            } 
        } 
        var_34 = min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [2LL] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))) : (var_0))), (((/* implicit */unsigned int) var_3)));
        arr_80 [i_20] [i_20] = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1))))));
        arr_81 [i_20] = ((/* implicit */short) ((int) max((((/* implicit */long long int) var_9)), (arr_54 [i_20]))));
    }
    var_35 = ((/* implicit */_Bool) max(((+(((/* implicit */int) var_7)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) >= (((((/* implicit */_Bool) var_4)) ? (var_9) : (var_9))))))));
}
