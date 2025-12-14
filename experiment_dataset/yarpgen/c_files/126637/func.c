/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126637
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
    var_12 += var_0;
    var_13 = ((/* implicit */signed char) ((min(((~(-733405516513622543LL))), (((((/* implicit */_Bool) (signed char)2)) ? (733405516513622566LL) : (733405516513622566LL))))) != (((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), (var_1))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */int) min((arr_0 [i_0 - 3]), (arr_0 [i_0 - 1])))) < ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 2]))))));
                arr_5 [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0 - 2]))))) : ((((-(arr_1 [i_1]))) % (arr_2 [i_0 + 1] [i_0 - 2])))));
                var_14 = ((/* implicit */int) 3528141551U);
                arr_6 [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) arr_2 [i_0 - 2] [i_0 - 1])) : (2936896545630738916LL))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) * (min((((70368744177663LL) - (((/* implicit */long long int) arr_2 [i_1] [i_0])))), (((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [i_0]))))))));
                            arr_12 [i_0] [i_2] [(short)8] = ((/* implicit */unsigned int) (signed char)-2);
                            var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2551652558U)) ? (min((((/* implicit */long long int) arr_1 [i_1])), (min((((/* implicit */long long int) arr_10 [i_0 - 1] [i_0 - 1] [4U] [i_1])), (-5318058660622379713LL))))) : (((max((arr_7 [i_1] [i_1] [i_2] [i_3]), (((/* implicit */long long int) arr_0 [i_0])))) - (((/* implicit */long long int) arr_8 [i_0 + 1] [i_1] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [i_4 + 1] [8])) != (5088799196979770341ULL)))))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((14804107128281588232ULL), (((/* implicit */unsigned long long int) (signed char)15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))) : (((((/* implicit */_Bool) arr_14 [i_4])) ? (954392107U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((3188414396U), (((/* implicit */unsigned int) arr_15 [3U] [i_4])))))))) : (((/* implicit */int) (unsigned char)161))));
        arr_16 [i_4] = ((/* implicit */unsigned char) (-(((arr_13 [i_4 - 1] [i_4]) ^ (((/* implicit */int) arr_15 [i_4 - 1] [i_4]))))));
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    {
                        arr_25 [(_Bool)1] [(_Bool)1] [4U] [i_4] [i_7] [i_5] = ((/* implicit */signed char) arr_21 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4] [14LL]);
                        arr_26 [i_5] |= ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_19 [11U] [i_7] [i_6])), (min((((/* implicit */unsigned int) (signed char)-119)), (3188414396U))))), (((/* implicit */unsigned int) arr_14 [i_5]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) (+(((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_29 [(signed char)13]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        arr_41 [i_8] [i_8] [(_Bool)1] [i_9] [4U] [i_11] &= ((arr_29 [16U]) ? (((/* implicit */int) arr_27 [i_8])) : (-953035344));
                        var_20 = ((/* implicit */unsigned int) ((arr_35 [i_11] [i_11]) != (((/* implicit */long long int) (+(((/* implicit */int) (signed char)2)))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        var_21 = ((/* implicit */int) 733405516513622566LL);
                        var_22 = min((max((((/* implicit */long long int) arr_37 [(_Bool)1] [i_9] [(_Bool)1] [i_12] [i_9] [i_9])), (-6488418449731178007LL))), (((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30121))) : (arr_43 [(unsigned short)3] [i_8] [i_9] [i_10] [i_10] [i_12]))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)43)) & (((/* implicit */int) arr_34 [i_8] [i_9] [i_8] [i_12])))))))));
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */int) max((((((/* implicit */int) arr_42 [i_8] [i_8] [i_8] [i_8])) <= (((/* implicit */int) arr_42 [i_8] [i_8] [i_8] [i_8])))), (max((arr_29 [i_8]), (arr_29 [i_8])))));
    }
    for (short i_13 = 2; i_13 < 9; i_13 += 4) 
    {
        var_24 *= ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)2))) < (max((arr_7 [i_13] [(short)4] [i_13 + 1] [i_13]), (arr_35 [i_13] [i_13])))))), (((((/* implicit */_Bool) -2936896545630738896LL)) ? (((/* implicit */int) arr_14 [i_13])) : (((/* implicit */int) (unsigned short)38838))))));
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_16 = 2; i_16 < 8; i_16 += 3) 
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (+(max((arr_31 [i_13 - 2]), (((/* implicit */unsigned long long int) arr_2 [i_13 + 1] [i_16 - 2])))))))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) min((2047), (((/* implicit */int) arr_30 [i_13]))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_13] [i_14]))) + (arr_49 [2LL]))), (((/* implicit */unsigned int) ((arr_43 [i_13] [i_14] [i_14] [(short)4] [i_15] [i_16]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [10LL] [i_15] [i_14] [i_13])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((min((((/* implicit */short) arr_29 [i_15])), (arr_15 [i_14] [i_13]))), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-8759))) == (arr_22 [i_13] [i_14])))))))))))));
                        arr_55 [i_15] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_29 [i_13 - 2])))), (((/* implicit */int) arr_29 [i_13 + 1]))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) max((min((arr_15 [i_13] [i_15]), (arr_15 [i_13] [i_15]))), ((short)27658)));
                        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (arr_13 [i_15] [i_15]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
                    {
                        var_29 |= ((/* implicit */unsigned char) ((arr_57 [i_13] [i_14] [i_14] [i_15] [i_18]) ? (((/* implicit */unsigned long long int) ((arr_60 [(unsigned short)5]) ? (((/* implicit */int) (_Bool)1)) : (2047)))) : (arr_31 [i_13 - 1])));
                        var_30 &= (!(((/* implicit */_Bool) arr_42 [i_13 - 2] [i_13 + 1] [i_13 - 1] [i_13 - 1])));
                        var_31 = ((/* implicit */short) arr_54 [i_13] [i_13] [i_14] [(unsigned short)8] [i_14]);
                        var_32 = ((/* implicit */unsigned int) arr_19 [14U] [13U] [13U]);
                        var_33 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_13] [i_15]))) & (arr_32 [6] [i_14] [i_13 - 2]));
                    }
                    arr_62 [i_15] [i_14] [i_14] = -1;
                }
            } 
        } 
    }
    for (unsigned char i_19 = 2; i_19 < 19; i_19 += 4) 
    {
        arr_65 [i_19 + 3] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_64 [i_19 + 1])) ? (max((2903601594169410173LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_19 - 1]))))), (arr_63 [i_19])));
        arr_66 [i_19] [i_19] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)555)), (((((/* implicit */_Bool) arr_64 [i_19 + 2])) ? (arr_63 [i_19 + 1]) : (arr_63 [i_19 + 2])))));
    }
}
