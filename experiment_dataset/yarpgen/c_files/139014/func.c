/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139014
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) (((-(var_11))) + (((arr_2 [i_0] [i_1 + 2]) - (((/* implicit */long long int) arr_0 [i_0] [i_1])))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_2 [i_1 + 1] [i_1 + 1]), (arr_2 [i_1 + 2] [i_1 - 2])))) ? ((-(((/* implicit */int) arr_8 [i_0] [i_1 - 1])))) : (((arr_8 [i_0] [i_1 + 1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_0] [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)51545)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_0] [i_2] [i_0])))), (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3] [i_4])) : (((/* implicit */int) (!(((arr_15 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))))))));
                                var_15 = ((/* implicit */long long int) min(((-(((arr_15 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (min((arr_4 [i_1 - 2] [i_1] [i_4 - 3]), (arr_4 [i_1 + 1] [i_1 + 1] [i_4 - 2])))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 2]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 2])))))));
                                var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)234))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 3; i_5 < 23; i_5 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) var_10);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 24; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_6 + 1] [i_0] = ((/* implicit */long long int) -1);
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_14 [i_0] [i_0] [i_5] [i_6] [i_7]);
                                var_18 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_25 [23] [i_1 + 1] [i_1] [i_1] [i_1])) | (((/* implicit */int) var_4)))));
                                arr_28 [i_0] [i_0] [i_1] [i_0] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) ((long long int) ((((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) (unsigned short)14533)) : (((/* implicit */int) var_7)))) - ((+(((/* implicit */int) (_Bool)0)))))));
                }
                for (unsigned char i_8 = 2; i_8 < 23; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) var_6);
                                arr_37 [i_0] [i_0] [i_1] [i_8] [i_8] [i_0] [i_10] = ((/* implicit */_Bool) ((long long int) -1));
                                var_21 = ((/* implicit */unsigned short) ((_Bool) arr_11 [i_0] [i_0] [i_8 + 1] [i_9] [i_10]));
                                arr_38 [i_0] [i_0] [i_8] [i_8] [i_9] [i_0] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_0] [i_1 - 1] [i_1 + 1])) * (((/* implicit */int) var_9))))) ? ((+(((/* implicit */int) arr_12 [15LL] [i_1 - 2] [i_0] [i_1 - 1] [i_1 + 1])))) : (((((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 1] [i_0] [i_1 + 2] [i_1 + 1])) * (((/* implicit */int) arr_12 [i_1] [i_1] [i_0] [i_1 - 2] [i_1 - 1]))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) var_4);
                    arr_39 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((min((8), (((/* implicit */int) arr_1 [i_0])))) <= (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 2]))))) - ((-(((/* implicit */int) ((arr_5 [i_0]) == (((/* implicit */unsigned long long int) arr_0 [i_0] [18ULL])))))))));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_11 = 1; i_11 < 17; i_11 += 1) 
    {
        arr_42 [i_11] = ((/* implicit */int) var_0);
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 17; i_12 += 3) 
        {
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    {
                        arr_51 [i_13] [i_13 + 1] [9ULL] = ((/* implicit */unsigned short) arr_3 [i_11] [i_13] [i_11 + 1]);
                        arr_52 [i_13] [i_13] = ((/* implicit */long long int) ((460883165568644430ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (-6828413712413657444LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_13]))))) : (((((/* implicit */_Bool) arr_3 [i_12] [i_13] [i_14])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11] [5LL] [i_12] [i_13] [i_14]))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_15 = 4; i_15 < 17; i_15 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) var_5);
                            var_24 = ((((_Bool) 2ULL)) ? (max((2147483647), (((/* implicit */int) (_Bool)1)))) : ((((-2147483647 - 1)) * (((/* implicit */int) arr_25 [i_11] [i_11] [i_11 + 1] [i_12 + 1] [i_15 - 4])))));
                            var_25 = ((/* implicit */unsigned int) arr_23 [i_11] [i_12] [i_11] [i_12]);
                            var_26 = ((/* implicit */_Bool) ((long long int) max((arr_24 [i_11 - 1] [i_11 - 1] [i_11 + 1] [24ULL] [i_11 + 1] [i_13]), (((/* implicit */long long int) arr_10 [i_12 - 1] [i_12 - 1] [i_13])))));
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_41 [i_11 + 1] [i_11 + 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))))))))));
        arr_56 [i_11 + 1] = 272367826067850495LL;
    }
    for (int i_16 = 0; i_16 < 11; i_16 += 1) 
    {
        var_28 = arr_35 [i_16] [i_16] [i_16];
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    arr_65 [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) min((arr_64 [i_16] [i_16] [i_17]), (((/* implicit */unsigned long long int) var_10)))))) ? (((/* implicit */unsigned int) ((arr_36 [i_16] [i_17] [i_18] [i_18] [i_18]) ? (((/* implicit */int) max(((signed char)43), (((/* implicit */signed char) arr_14 [i_16] [i_17] [i_17] [i_17] [i_17]))))) : (max((arr_23 [8LL] [i_17] [i_16] [i_16]), (arr_44 [i_16] [i_16])))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)53)) * (((/* implicit */int) (_Bool)1))))), (max((arr_22 [i_16] [i_17] [i_17] [i_17] [i_17] [(_Bool)1]), (((/* implicit */unsigned int) arr_32 [i_16] [i_16] [i_16] [i_17] [i_18]))))))));
                    var_29 = ((/* implicit */unsigned short) ((min((arr_22 [i_16] [i_17] [i_17] [i_17] [i_18] [i_17]), (((/* implicit */unsigned int) -1582858198)))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_8 [i_17] [i_17])))))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_16] [i_17] [i_16] [i_18] [i_18] [i_18])) & (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) : (arr_11 [i_16] [i_17] [i_16] [i_16] [i_16])))) ? (((int) min((arr_5 [i_17]), (((/* implicit */unsigned long long int) var_8))))) : (((/* implicit */int) ((_Bool) arr_43 [i_16] [13] [i_18])))));
                    var_31 = ((/* implicit */_Bool) (-(min((((/* implicit */int) var_8)), (((((/* implicit */int) arr_14 [i_16] [i_16] [i_17] [i_17] [i_18])) + (arr_44 [i_16] [i_17])))))));
                }
            } 
        } 
    }
    for (int i_19 = 1; i_19 < 19; i_19 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_20 = 2; i_20 < 19; i_20 += 1) 
        {
            for (long long int i_21 = 1; i_21 < 17; i_21 += 1) 
            {
                for (int i_22 = 2; i_22 < 19; i_22 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((arr_8 [i_19] [i_21 + 1]) ? (7810342849238437422ULL) : (((/* implicit */unsigned long long int) arr_72 [i_19] [i_20] [i_20])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_19] [i_20])) ^ (((/* implicit */int) (_Bool)1)))))))) && (arr_9 [i_19] [i_22] [i_22])));
                            var_33 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_29 [i_21 - 1] [i_22 + 1] [i_21] [i_20 - 1])) ? (((/* implicit */int) arr_29 [i_21 - 1] [i_22 + 1] [(unsigned short)24] [i_20 - 1])) : (((/* implicit */int) (signed char)119)))));
                        }
                        arr_78 [i_21] [i_21] [i_21] [i_22] [i_19] [i_19] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_76 [i_19])), ((unsigned short)14014)));
                    }
                } 
            } 
        } 
        arr_79 [i_19] = ((/* implicit */int) max((((unsigned long long int) arr_76 [i_19 - 1])), (((/* implicit */unsigned long long int) (unsigned short)53987))));
    }
    /* vectorizable */
    for (unsigned short i_24 = 0; i_24 < 10; i_24 += 3) 
    {
        arr_83 [i_24] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) ? ((~(arr_22 [i_24] [18LL] [i_24] [i_24] [i_24] [i_24]))) : (((/* implicit */unsigned int) (((_Bool)0) ? (arr_55 [(_Bool)1] [(_Bool)1] [i_24] [(_Bool)1] [(_Bool)1]) : (((/* implicit */int) (_Bool)0)))))));
    }
    var_35 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (var_2))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (~(var_2))))))));
    var_36 = ((/* implicit */unsigned short) var_4);
}
