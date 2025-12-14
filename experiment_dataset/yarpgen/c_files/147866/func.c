/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147866
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) ((unsigned char) 65535LL))) : (((/* implicit */int) ((unsigned char) -4260401168789920786LL))))) : (((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((((/* implicit */_Bool) var_4)) ? (-8322847702078498516LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_0))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) var_7))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_4)) && (arr_5 [i_2] [i_2] [i_2]))));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    arr_11 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((65535LL) * (((/* implicit */long long int) ((/* implicit */int) var_8)))))) && (((/* implicit */_Bool) ((var_14) << (((/* implicit */int) arr_3 [i_3])))))));
                    var_21 = ((/* implicit */_Bool) var_6);
                }
            }
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                arr_16 [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) ((arr_14 [i_0] [i_0] [i_0] [i_4]) == (arr_14 [i_0] [i_0] [i_0] [i_0])));
                arr_17 [i_4] [i_1] [i_1] [i_0] = ((65539LL) >> (((/* implicit */int) (_Bool)1)));
            }
            var_22 = ((long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (788540532334077070LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            arr_18 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_12))))) : (((long long int) arr_7 [i_1]))));
        }
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_23 [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]));
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        arr_31 [i_6] = ((/* implicit */long long int) var_12);
                        arr_32 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0])))))));
                        arr_33 [i_0] [i_5] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8856)) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (65535LL) : (var_9))) : (((long long int) 65535LL))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 2; i_9 < 15; i_9 += 4) 
                    {
                        arr_38 [i_9 - 2] [i_7] [i_6] [i_5] [i_6] [i_0] [i_0] = ((/* implicit */long long int) ((((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                        arr_39 [i_6] [i_7] [i_6] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (unsigned short)26631)) >> (((((/* implicit */int) arr_4 [i_6] [i_5] [i_0])) - (23110))))));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    var_23 = (-(arr_42 [i_0] [i_5] [i_6] [i_10]));
                    arr_43 [i_10] [i_6] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || ((!(((/* implicit */_Bool) var_8))))));
                }
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) ((arr_21 [i_0] [i_11]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                    arr_48 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned short) ((unsigned int) (-(var_9))));
                    arr_49 [i_0] [i_5] [i_6] [i_11] = ((/* implicit */unsigned long long int) (~((~(arr_26 [i_0] [i_5])))));
                }
            }
            for (long long int i_12 = 2; i_12 < 14; i_12 += 2) 
            {
                arr_52 [i_0] [i_0] = ((/* implicit */unsigned int) arr_47 [i_12 + 2] [i_12 - 2] [i_12 - 2] [i_12 + 2]);
                arr_53 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2070494838U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) : (((((/* implicit */_Bool) 2070494826U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109))) : (2224472436U)))));
            }
            for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    for (unsigned char i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((((((/* implicit */_Bool) arr_7 [i_0])) || (((/* implicit */_Bool) var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) != (-65535LL))))) : (arr_56 [i_0] [i_0] [i_0])))));
                            arr_63 [i_13] [i_5] [i_13] [i_14] [i_15] = ((/* implicit */unsigned char) ((arr_59 [i_13] [i_13]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (0LL)));
                        }
                    } 
                } 
                arr_64 [i_0] = ((/* implicit */unsigned char) ((unsigned int) 2809673055463231303ULL));
                arr_65 [i_0] [i_5] [i_13] = ((/* implicit */signed char) ((unsigned char) ((unsigned char) arr_56 [i_0] [i_5] [i_13])));
            }
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_68 [i_16] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)234)) << (((65566LL) - (65561LL)))))) ? (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_16] [i_0]) : (((((/* implicit */_Bool) -9199404329135042020LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2070494848U)))));
            arr_69 [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))));
        }
    }
    for (unsigned char i_17 = 2; i_17 < 20; i_17 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_18 = 0; i_18 < 21; i_18 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) (!(((_Bool) var_14))));
            arr_76 [i_17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_17] [i_18])) ? (arr_71 [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? ((+(((/* implicit */int) arr_72 [i_17] [i_18])))) : ((~(((/* implicit */int) arr_73 [i_17] [i_18])))))))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)181))) / (var_9))))) ? (((long long int) (unsigned char)34)) : (((/* implicit */long long int) (-(((/* implicit */int) max((arr_73 [i_17 - 1] [i_18]), (arr_70 [i_18] [i_17])))))))));
            /* LoopSeq 1 */
            for (long long int i_19 = 3; i_19 < 19; i_19 += 4) 
            {
                var_28 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_73 [i_17 + 1] [i_17])), (arr_74 [i_19] [i_18] [i_17])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_14)))) : ((-(9199404329135042020LL)))))));
                arr_79 [i_17] [i_19] [i_19] = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned short)65535)), (max((-1LL), (((/* implicit */long long int) (unsigned char)151))))))));
            }
            arr_80 [i_18] [i_17 + 1] [i_17 + 1] = ((/* implicit */unsigned long long int) var_3);
        }
        /* LoopNest 3 */
        for (unsigned int i_20 = 0; i_20 < 21; i_20 += 4) 
        {
            for (unsigned int i_21 = 0; i_21 < 21; i_21 += 3) 
            {
                for (unsigned int i_22 = 0; i_22 < 21; i_22 += 1) 
                {
                    {
                        arr_89 [i_21] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) 4294967295U)) + (4463254856338430225LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_75 [i_17])))))));
                        arr_90 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */long long int) ((unsigned short) ((((long long int) var_1)) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_88 [i_20] [i_20] [i_20] [i_20])) || (((/* implicit */_Bool) var_9)))))))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (496U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_10)), (var_13))) != (((/* implicit */unsigned long long int) var_14)))))));
}
