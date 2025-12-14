/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1336
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0 + 1] [i_0]) == (arr_0 [i_0 + 4] [i_0 - 2]))))) | (max(((~(arr_0 [i_0] [i_0]))), (((((/* implicit */_Bool) (unsigned short)15)) ? (var_6) : (((/* implicit */unsigned long long int) -8597860532515566397LL))))))));
        var_14 = ((/* implicit */signed char) min(((short)-10070), (((/* implicit */short) (unsigned char)30))));
        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */long long int) var_8)) : (arr_1 [i_0 + 1])))) * (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0 + 3] [i_0 - 2])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [6LL])) ? (((arr_1 [i_0 + 1]) >> (((((/* implicit */int) (unsigned char)126)) - (73))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [15U] [i_1]))) % (arr_1 [i_0])))));
            /* LoopSeq 2 */
            for (short i_2 = 3; i_2 < 21; i_2 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (unsigned char)20)) | (((/* implicit */int) (short)10059))))));
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 20; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((unsigned char) arr_9 [i_4] [i_0 + 2] [i_3 + 3]))));
                            var_19 += ((/* implicit */signed char) ((int) arr_1 [i_0 + 1]));
                            arr_10 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_1] [i_1]))) ^ (var_6)))) && (((/* implicit */_Bool) arr_0 [i_0 + 3] [i_2 - 3]))));
                            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_0])) ? (arr_3 [21] [i_0 - 1]) : (arr_3 [i_2 + 1] [i_3 - 2])));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-101))));
                /* LoopSeq 2 */
                for (signed char i_5 = 4; i_5 < 20; i_5 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) arr_4 [i_5] [i_2 - 3] [(signed char)19] [i_0]);
                    arr_13 [i_0] [i_1] [i_2 + 1] [(short)20] [15LL] = ((/* implicit */int) var_0);
                }
                for (signed char i_6 = 4; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    arr_17 [i_0 - 1] [i_1] [i_1] [(unsigned short)11] [i_6 - 2] = ((/* implicit */signed char) ((short) arr_11 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]));
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_1] [i_2] [i_6] [i_6] [i_6]) / (arr_3 [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2 + 1] [i_2]))) : (arr_8 [i_6] [i_6 - 4] [i_0] [i_6] [(unsigned short)8])));
                    var_24 *= ((/* implicit */unsigned short) ((((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2 - 3] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0)))));
                }
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (unsigned char i_8 = 2; i_8 < 22; i_8 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((_Bool) arr_1 [i_2 + 2]));
                            var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_2 [i_2 - 1] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                            arr_24 [i_1] [(short)20] [i_1] [i_1] = (~(((unsigned int) arr_21 [i_0] [i_1] [i_2] [i_1] [i_8] [i_1] [i_8])));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) != (arr_1 [(unsigned char)18]))) ? (((/* implicit */int) arr_9 [i_7] [i_7] [i_2 - 2])) : (((/* implicit */int) arr_9 [i_0] [i_8 - 1] [i_0])))))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 2])) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_2 - 1])) : (arr_4 [i_0 - 1] [i_1] [(unsigned short)21] [i_7]))))));
                        }
                    } 
                } 
            }
            for (short i_9 = 3; i_9 < 21; i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        {
                            var_29 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_18 [i_10] [i_0 + 2] [i_9 - 3])) : (((/* implicit */int) arr_18 [i_0] [i_0 + 2] [i_9 - 3])));
                            arr_31 [i_0] [i_0] [i_0] [0LL] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) -4666251348580447843LL)) ? (((/* implicit */int) (unsigned char)164)) : (524912224))));
                            var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 0LL))) ? (arr_14 [i_11] [i_11] [i_11] [i_9 + 1]) : (((/* implicit */long long int) ((arr_11 [i_11] [i_10] [i_0] [i_0] [i_1] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0]))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) ((unsigned int) arr_15 [i_0] [i_1]));
                var_32 = ((/* implicit */unsigned int) ((((unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1])) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_9 + 1])))));
                /* LoopSeq 2 */
                for (int i_12 = 1; i_12 < 21; i_12 += 3) /* same iter space */
                {
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((unsigned short) var_0)))));
                    var_34 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_12 - 1])) ? (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_1] [i_1]))) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_9 + 2] [22]))));
                }
                for (int i_13 = 1; i_13 < 21; i_13 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_1] [14U] [i_9] [i_9] [i_13 + 2] [i_13]))) : (arr_14 [i_0] [i_0] [i_0] [i_0 - 1]))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_1] [i_0 - 2]))))));
                    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((arr_4 [i_13 + 2] [i_13 - 1] [i_13 - 1] [i_13]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_1] [i_1] [i_1]))) : (arr_3 [i_0 + 1] [i_1])))))))));
                }
            }
        }
        arr_38 [i_0] = ((/* implicit */short) min((max((arr_20 [i_0] [i_0 + 1] [i_0 - 2] [i_0 + 1]), (arr_6 [i_0] [i_0 + 1] [i_0]))), (((unsigned char) arr_20 [i_0] [i_0 - 1] [(short)4] [i_0 + 4]))));
    }
    for (unsigned long long int i_14 = 1; i_14 < 13; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            for (unsigned int i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                {
                    arr_46 [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_14 + 2] [i_14 - 1] [i_14 + 3])) ? (((/* implicit */int) arr_18 [i_14] [i_14 - 1] [i_14 + 3])) : (((((/* implicit */int) arr_18 [i_14] [i_14 - 1] [i_14 + 3])) ^ (((/* implicit */int) arr_18 [i_14 + 3] [i_14 - 1] [i_14 + 3]))))));
                    arr_47 [i_15] [i_16] = ((/* implicit */int) min((((/* implicit */signed char) ((_Bool) (short)15811))), (min((arr_32 [i_15] [i_15] [i_15] [i_15]), (arr_32 [i_15] [i_15] [i_16] [i_16])))));
                }
            } 
        } 
        arr_48 [(signed char)9] = ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_11))))), (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_19 [i_14] [i_14] [i_14])))) * (((/* implicit */int) arr_45 [i_14 + 2] [i_14 - 1]))))));
    }
    var_37 += ((/* implicit */signed char) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_17 = 3; i_17 < 15; i_17 += 2) 
    {
        var_38 ^= ((min((((((/* implicit */_Bool) arr_30 [i_17])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [4])) || (((/* implicit */_Bool) (signed char)49))))))) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [22LL] [22LL] [i_17 + 1] [2]), (arr_7 [i_17 - 3] [i_17 - 3] [i_17 - 1] [i_17]))))));
        var_39 = ((/* implicit */_Bool) var_0);
        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) arr_19 [i_17] [i_17] [i_17 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15813))) : (17140157212042388204ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_18 [i_17] [i_17 - 2] [i_17 + 1])), (min((arr_21 [i_17] [16ULL] [i_17] [i_17] [i_17] [16ULL] [i_17]), (var_7))))))) : (((unsigned long long int) var_5)))))));
    }
    for (signed char i_18 = 0; i_18 < 14; i_18 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_19 = 1; i_19 < 11; i_19 += 4) 
        {
            for (long long int i_20 = 1; i_20 < 11; i_20 += 2) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 3) 
                {
                    {
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) var_8))));
                        var_42 = ((/* implicit */_Bool) var_2);
                        var_43 = ((/* implicit */short) min((min((((((/* implicit */long long int) arr_3 [i_19 + 1] [i_19 + 1])) / (arr_34 [(short)14]))), (((/* implicit */long long int) (~(arr_42 [i_18] [i_20 + 3])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (var_0)))) && (((/* implicit */_Bool) arr_12 [i_21] [(signed char)14] [i_19])))))));
                    }
                } 
            } 
        } 
        arr_63 [i_18] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_60 [i_18] [i_18] [i_18]))));
    }
}
