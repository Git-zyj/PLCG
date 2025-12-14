/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158832
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [5LL] [i_2] [i_3] [i_2 + 1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) arr_3 [i_2] [i_1]))));
                                var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) arr_4 [i_0] [(unsigned short)0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_3]))))) : (min((-3421954069901991877LL), (((/* implicit */long long int) var_14))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (arr_4 [i_1] [i_4])))) : (((/* implicit */int) (short)21376))));
                                var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)-32760)), (((arr_3 [i_0] [i_1]) ? (6947164905159859416LL) : (-3421954069901991865LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_5])))))) ? (((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))) : ((+(-9223372036854775796LL))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65532)) % (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_5]))))) ? ((+(0LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_5]))))))))));
                                var_20 -= ((/* implicit */unsigned short) arr_1 [i_5]);
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -704601752939164458LL)) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] [i_2])) < (((/* implicit */int) arr_15 [i_1] [i_2] [i_6]))))) : ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (short)8141)) : (((/* implicit */int) ((_Bool) var_5))))))));
                                arr_18 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (short)32760))) && (((/* implicit */_Bool) arr_16 [i_0] [i_6 - 1] [i_2] [i_5] [i_6]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 2; i_9 < 17; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        for (short i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            {
                                var_22 |= ((/* implicit */short) max((((((/* implicit */_Bool) arr_33 [i_10] [i_10] [i_10] [i_7 - 1])) ? (((/* implicit */int) (short)-11739)) : (((/* implicit */int) ((_Bool) (unsigned short)58114))))), ((((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6947164905159859411LL))))) : (max((171698294), (((/* implicit */int) (unsigned short)23661))))))));
                                var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_27 [i_9 - 2] [i_8] [i_7 - 1] [i_10])))) ? (min((4294705152ULL), (((/* implicit */unsigned long long int) arr_27 [i_9 + 1] [i_8] [i_7 - 2] [(unsigned short)5])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_7 - 2] [i_9 - 2])) ? (-6947164905159859416LL) : (((/* implicit */long long int) var_9)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_23 [i_12] [15ULL]))));
                                var_25 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) max((-3421954069901991865LL), (((/* implicit */long long int) 699804752))))) ? (((/* implicit */int) (unsigned short)52748)) : (((((/* implicit */_Bool) -1382107493129510809LL)) ? (((/* implicit */int) (unsigned short)22959)) : (262143))))));
                                arr_41 [i_7] [i_8] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (short)-5871);
                                var_26 |= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12331))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_14 = 0; i_14 < 21; i_14 += 2) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) 
        {
            for (short i_16 = 0; i_16 < 21; i_16 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_17 = 4; i_17 < 20; i_17 += 2) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 3) 
                        {
                            {
                                var_27 |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_49 [i_17 - 2] [i_17 - 1] [i_17] [i_17]))));
                                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_14] [i_15] [i_14] [i_17] [i_18])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_50 [(_Bool)1] [i_15] [i_16] [i_16] [i_18])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 19; i_19 += 2) 
                    {
                        for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) arr_52 [i_19] [i_19]);
                                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 6947164905159859415LL)) + ((+(arr_55 [i_20] [i_19] [i_16] [i_15] [i_14])))))) ? (((((/* implicit */_Bool) max((var_13), (((/* implicit */short) arr_54 [i_19] [i_16] [i_15] [i_14]))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) arr_49 [i_19] [i_19] [i_19] [i_19])) ? (18446744069414846463ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))) : (11990385434705655374ULL))))));
                                var_31 = -1251087185;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 1) 
                    {
                        for (long long int i_22 = 0; i_22 < 21; i_22 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_61 [i_21] [i_22]))) ? (((/* implicit */unsigned long long int) (~(((arr_53 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) ^ (((/* implicit */int) (short)-1))))))) : (((((/* implicit */_Bool) max((arr_45 [i_14]), (((/* implicit */unsigned short) arr_59 [i_14] [i_15] [i_16] [i_21] [4ULL] [i_22]))))) ? (((unsigned long long int) 11990385434705655377ULL)) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)21370)), (1304065611018692657LL)))))))))));
                                var_33 -= ((/* implicit */unsigned long long int) arr_42 [i_14]);
                                var_34 *= ((/* implicit */unsigned short) ((short) (~(1382107493129510808LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
