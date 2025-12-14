/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131445
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */long long int) (+(((/* implicit */int) (short)27097))));
                        arr_11 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21071))))) : ((+(((/* implicit */int) var_8))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))));
                        var_13 = ((/* implicit */unsigned char) ((((_Bool) (unsigned short)19879)) ? (((var_5) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44464))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4])))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 3; i_6 < 9; i_6 += 2) 
                        {
                            var_14 = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned char)203))))));
                            var_15 = ((/* implicit */unsigned char) ((_Bool) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) (short)-27082))))));
                        }
                        for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_21 [i_0] [i_1] [i_5] [(unsigned char)7]))));
                            var_17 = ((/* implicit */_Bool) ((short) (unsigned short)23012));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)21071)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_16 [i_7] [3LL] [i_2] [i_1] [i_0]))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19892)) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61)))))) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) var_8))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 7; i_8 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)44465)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)179)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)22)) > (-26))))));
                            var_21 = ((/* implicit */short) ((_Bool) (+(3659474922U))));
                        }
                        arr_25 [i_0] [(unsigned short)10] [i_2] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_5])) ? (0ULL) : (var_7)));
                        arr_26 [i_0] [i_1] [i_1] [i_5] [(unsigned char)9] = ((/* implicit */unsigned long long int) (unsigned char)216);
                    }
                    var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 144115188075855808LL)) ? (-6942339566409724459LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48)))))));
                }
            } 
        } 
        arr_27 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0]))));
    }
    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) ((int) ((unsigned char) max((var_7), (((/* implicit */unsigned long long int) -746489893))))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_38 [i_9] [i_10] [i_11] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1702562642)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (13126846340535027415ULL)))) ? (((/* implicit */int) ((_Bool) arr_14 [3]))) : (((/* implicit */int) (unsigned short)32768)))) << (((((/* implicit */int) arr_16 [i_11] [i_10] [i_11] [i_9] [i_10])) - (71))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) min(((short)0), (((/* implicit */short) var_10))))) | (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (arr_17 [i_11] [i_10] [i_9])))))))));
                    var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-18063)) : (((/* implicit */int) (_Bool)1))))), (3011882267U)));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) ((signed char) max((32505856), (((/* implicit */int) arr_37 [0] [10U] [i_9])))));
    }
    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
    {
        arr_42 [i_12] = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((3011882248U), (((/* implicit */unsigned int) (unsigned short)33672))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_17 [i_12] [i_12] [i_12])))), (((((/* implicit */int) (signed char)-89)) | (arr_29 [i_12])))));
        /* LoopNest 2 */
        for (unsigned short i_13 = 2; i_13 < 10; i_13 += 2) 
        {
            for (int i_14 = 3; i_14 < 8; i_14 += 3) 
            {
                {
                    var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_13 [i_12] [i_13 - 2] [9ULL])), ((unsigned char)31)))) && (((9995786591971164550ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((32505868) >= (((/* implicit */int) (short)-14750))))))))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 11; i_16 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) ((524287LL) > (((/* implicit */long long int) -1011674759))));
                                var_29 -= ((/* implicit */unsigned short) max(((~(((((/* implicit */int) var_0)) % (((/* implicit */int) arr_17 [(signed char)6] [i_13 - 1] [(signed char)6])))))), ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_51 [i_12] [i_12] [i_12] [1LL] [i_12] [(unsigned char)3] [i_12]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        for (long long int i_18 = 0; i_18 < 11; i_18 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) ((_Bool) ((arr_53 [i_13 - 2] [10ULL] [(_Bool)1] [i_14 - 2] [i_14]) ? ((-(0))) : (((/* implicit */int) var_9)))));
                                arr_60 [i_12] [i_17] [i_18] [i_13] [i_12] = ((/* implicit */short) ((unsigned char) max((arr_2 [i_14 - 2] [i_14 - 1]), (((/* implicit */signed char) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) arr_5 [(unsigned short)7] [i_12]);
        var_32 = ((/* implicit */int) (((+(((/* implicit */int) var_1)))) >= ((~(((/* implicit */int) ((1283085058U) != (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    }
    var_33 = (-(((((/* implicit */int) var_4)) / (((/* implicit */int) var_1)))));
}
