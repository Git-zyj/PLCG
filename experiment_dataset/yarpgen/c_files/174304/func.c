/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174304
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) min((min((max((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (arr_2 [(unsigned short)6]))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) var_1))))))), (((unsigned long long int) arr_2 [(unsigned short)5]))));
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_9)))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) ((signed char) arr_9 [i_0 - 1] [i_2]))) >= (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_0))))))))));
                        var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_3]))))) ? (var_10) : (((/* implicit */long long int) max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned short) var_12))))))));
                        var_22 = ((/* implicit */_Bool) var_13);
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_23 -= ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */long long int) (unsigned short)0)), (var_10))) : (((/* implicit */long long int) min((arr_13 [i_3] [i_3] [(unsigned short)2] [i_1] [10U] [i_3]), (3145503359U))))));
                            var_24 = ((/* implicit */signed char) var_1);
                        }
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_8)))))) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))) : (min((((/* implicit */int) ((signed char) arr_7 [i_0 + 1] [i_2] [i_2]))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_2]))))))));
                            arr_17 [9] [i_1] [(signed char)5] [i_2] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_18))));
                        }
                    }
                } 
            } 
            arr_18 [0U] [(signed char)6] [(unsigned short)0] = (~(((/* implicit */int) max((min((var_11), (((/* implicit */unsigned short) var_0)))), (arr_8 [10U])))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1]) < (arr_11 [i_0] [i_6] [(_Bool)1] [i_0 - 1]))))));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((long long int) var_4));
                        arr_29 [i_6] = ((unsigned long long int) arr_10 [i_6] [2ULL] [i_0 - 1] [i_8 + 2] [i_8 + 1]);
                    }
                } 
            } 
        }
        for (short i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_11 [i_0] [i_9] [i_0] [i_9])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((var_11), (((/* implicit */unsigned short) var_16)))))))));
            arr_32 [i_9] [i_9] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) var_0))))) - (max((var_8), (((/* implicit */unsigned long long int) (_Bool)1))))))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 1; i_10 < 11; i_10 += 3) 
            {
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    {
                        arr_37 [i_0] [i_9] [i_10] [i_11] [i_11] = ((/* implicit */unsigned short) (((_Bool)1) ? (786666293) : ((~(((/* implicit */int) var_0))))));
                        var_29 -= ((/* implicit */unsigned short) min((arr_13 [(short)8] [(short)8] [i_10] [i_11] [i_11] [(unsigned short)10]), (arr_11 [i_0] [10U] [i_10] [i_11])));
                        var_30 &= min((arr_35 [(short)2] [(signed char)6] [i_10] [i_10]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_11] [i_10] [8ULL] [(short)6]))))), ((+(arr_13 [i_9] [(unsigned short)2] [i_9] [i_9] [i_0 - 1] [(unsigned char)4])))))));
                    }
                } 
            } 
        }
        for (unsigned char i_12 = 1; i_12 < 11; i_12 += 4) 
        {
            var_31 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((((/* implicit */int) (unsigned short)20815)) | (((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_1 [i_12 - 1] [i_12 - 1]))))));
            arr_41 [i_12] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_8 [8])), (((((((/* implicit */int) var_17)) + (2147483647))) >> (((((/* implicit */int) ((unsigned short) 4181372201675943494ULL))) - (28219)))))));
            var_32 += ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0 - 1] [i_12 - 1])))))));
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_14))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_1)) : (var_13)))) ? (((/* implicit */unsigned long long int) var_4)) : (((unsigned long long int) var_15))))));
        }
    }
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 12961876643504597250ULL))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)51367)) <= (((/* implicit */int) (unsigned short)51367)))))))) & ((~((+(3204595287U)))))));
        arr_46 [i_13 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)0)))) % (((/* implicit */int) var_15))))) ? ((-(((/* implicit */int) (unsigned short)15973)))) : ((-(((/* implicit */int) var_12))))));
        /* LoopNest 2 */
        for (unsigned char i_14 = 4; i_14 < 23; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                {
                    var_35 = ((/* implicit */_Bool) min((max((((/* implicit */int) arr_50 [i_14])), (min((arr_45 [i_13 + 1]), (((/* implicit */int) (unsigned short)24992)))))), (((/* implicit */int) ((unsigned short) ((_Bool) var_11))))));
                    var_36 = ((/* implicit */_Bool) max(((~(((/* implicit */int) max((var_1), (((/* implicit */short) arr_42 [(unsigned short)19]))))))), (((/* implicit */int) var_1))));
                }
            } 
        } 
    }
    for (short i_16 = 2; i_16 < 13; i_16 += 2) 
    {
        var_37 = ((/* implicit */signed char) (~((~((~(((/* implicit */int) (_Bool)1))))))));
        var_38 = ((/* implicit */unsigned char) arr_47 [i_16]);
        arr_53 [i_16] [i_16] = ((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned short) min((var_8), (((/* implicit */unsigned long long int) var_16)))))), (1149463937U)));
    }
    var_39 = ((/* implicit */long long int) var_2);
    var_40 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255))))));
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 18; i_17 += 1) 
    {
        for (int i_18 = 0; i_18 < 18; i_18 += 1) 
        {
            for (int i_19 = 0; i_19 < 18; i_19 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
                    {
                        var_41 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
                        var_42 = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) <= (var_5)))))));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_50 [i_20])), (var_7)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)16230))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */int) arr_47 [i_20])), (arr_59 [i_17] [i_19] [i_20]))) : (min((1073741823), (((/* implicit */int) (unsigned char)18))))))) : (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_19]))) : (arr_49 [i_17] [i_19] [i_19] [i_20]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                        arr_62 [i_17] [(short)5] [i_19] = ((/* implicit */unsigned long long int) ((unsigned short) (+(arr_57 [i_17] [i_19]))));
                        var_44 = ((/* implicit */unsigned long long int) (+((~(3204595300U)))));
                    }
                    var_45 ^= ((/* implicit */unsigned int) ((unsigned short) (-(max((((/* implicit */int) var_11)), (var_13))))));
                }
            } 
        } 
    } 
}
