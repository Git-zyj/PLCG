/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13337
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_19 = (!(((/* implicit */_Bool) (unsigned char)237)));
        var_20 = ((/* implicit */unsigned short) ((unsigned char) 4035356751U));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            arr_8 [8U] = ((max((((/* implicit */long long int) ((unsigned int) var_18))), (((long long int) var_1)))) * (((/* implicit */long long int) 186626651U)));
            var_21 &= ((/* implicit */_Bool) max((((/* implicit */int) var_4)), ((~(((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 1]))))));
            arr_9 [i_1] = ((/* implicit */unsigned short) ((((259610526U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) & (max((((/* implicit */unsigned int) arr_3 [i_2 + 1])), (1501558709U)))));
        }
        var_22 = ((/* implicit */unsigned int) (_Bool)1);
        arr_10 [i_1] [i_1] = ((/* implicit */short) var_13);
        arr_11 [i_1] [i_1] |= ((/* implicit */short) ((2793408585U) >> (((/* implicit */int) ((_Bool) min((1318942860), (((/* implicit */int) (short)20203))))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) 259610544U);
                        /* LoopSeq 2 */
                        for (long long int i_7 = 2; i_7 < 22; i_7 += 1) 
                        {
                            var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) < (arr_22 [i_3 + 1] [(unsigned short)22]));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((2793408587U) << (((/* implicit */int) (unsigned short)0)))))));
                        }
                        for (unsigned long long int i_8 = 4; i_8 < 19; i_8 += 1) 
                        {
                            var_26 &= ((/* implicit */unsigned short) (~(arr_14 [i_8 - 2])));
                            var_27 -= ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_24 [i_8] [i_6] [i_5] [i_4] [i_3])))))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), ((+(4035356730U)))));
                        }
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_14 [i_4])) & ((+(5539136620509248308ULL)))));
        }
        for (short i_9 = 1; i_9 < 22; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                arr_34 [(short)7] [i_9 - 1] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) ((-1318942861) & (((/* implicit */int) (short)17218)))));
                var_30 = ((/* implicit */short) ((unsigned long long int) var_4));
                var_31 *= ((/* implicit */short) ((unsigned int) ((_Bool) var_12)));
            }
            for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                arr_37 [i_3] [i_3] = ((/* implicit */unsigned long long int) 1056510901);
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1571902957U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (((var_6) * (1501558709U)))));
            }
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    {
                        arr_44 [i_3] [i_9] [(signed char)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (1498426847U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) < (15854354028325013962ULL))))) : (15854354028325013962ULL)));
                        arr_45 [i_3] [i_3] [i_3] [i_13] &= (~(0U));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3669335296U) * (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 + 1]))) : (259610545U)));
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
                        {
                            var_34 -= ((/* implicit */_Bool) (-((~(((/* implicit */int) (short)20207))))));
                            var_35 ^= ((/* implicit */short) ((((((/* implicit */_Bool) 157447604U)) ? (((/* implicit */int) (_Bool)1)) : (797189476))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (2069652615U))))));
                        }
                    }
                } 
            } 
            arr_48 [i_3] [i_3] [i_3] = (!(((/* implicit */_Bool) var_4)));
            var_36 = ((((/* implicit */_Bool) arr_29 [i_3 + 1] [i_9] [i_9 + 1])) ? (((/* implicit */unsigned long long int) (~(var_12)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) : (2592390045384537653ULL))));
            var_37 += ((/* implicit */short) arr_19 [(_Bool)0] [i_9 + 1] [i_3]);
        }
        for (unsigned long long int i_15 = 3; i_15 < 22; i_15 += 3) 
        {
            arr_53 [i_3] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [i_3 + 1])) : (((/* implicit */int) arr_1 [i_3 + 1]))));
            /* LoopSeq 3 */
            for (long long int i_16 = 0; i_16 < 23; i_16 += 4) 
            {
                var_38 *= ((/* implicit */signed char) ((unsigned long long int) ((long long int) arr_47 [i_15] [(short)7] [i_16] [i_3] [i_3] [i_3] [14ULL])));
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 23; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_15] [i_16] [i_17])) ? (var_2) : (arr_36 [i_3 + 1] [i_15 - 1] [i_16]))))));
                            var_40 = ((/* implicit */int) (+(var_13)));
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) ^ (((/* implicit */int) arr_18 [i_15 + 1] [i_3] [i_3 + 1]))));
                            arr_62 [i_3] [i_15] [i_16] [i_17] [i_18] = ((/* implicit */_Bool) 157447601U);
                        }
                    } 
                } 
                arr_63 [i_3] [i_3 + 1] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_18) / (((/* implicit */unsigned long long int) var_0))))) ? (((2225314687U) << (((var_13) - (10810552320277578228ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_3 + 1] [i_3 + 1] [i_15 - 3] [i_3 + 1])))));
                var_42 -= ((/* implicit */unsigned short) arr_28 [i_15] [i_15 - 1] [i_16] [i_15] [i_3 + 1]);
            }
            for (unsigned char i_19 = 3; i_19 < 22; i_19 += 1) 
            {
                var_43 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (var_18) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-20213)))))));
                arr_67 [i_3] [i_3 + 1] [(_Bool)1] [i_19] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (var_0) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1)))))));
                var_44 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [3ULL] [i_19]))) - (((unsigned int) 4137519666U))));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)29751)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))) : (arr_56 [1ULL] [7U] [i_15 + 1] [i_3 + 1]))))));
                var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_3 + 1] [i_15] [i_15] [i_15 - 2] [i_15 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_13)));
                arr_70 [13LL] [i_15] [18U] = ((/* implicit */short) (_Bool)1);
            }
        }
        var_47 = ((/* implicit */_Bool) var_5);
        arr_71 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-6837)) ? (arr_38 [i_3] [i_3 + 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)-6224)))));
    }
    var_48 &= ((/* implicit */signed char) (~(var_2)));
    var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) (((~(var_2))) != (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (var_18))))))))))));
}
