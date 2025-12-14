/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107536
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
    var_13 = ((/* implicit */long long int) (unsigned char)245);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [11U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? ((+(3782821125833001088ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        arr_4 [21] = ((/* implicit */long long int) 1218214477U);
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_0 [i_0]))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((unsigned int) 3782821125833001088ULL)) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)6)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_8 [i_1] = ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (14663922947876550549ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)233))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 2) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3782821125833001088ULL))));
            var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : ((+(var_10)))))));
            arr_12 [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_2 - 3]))) / (var_6)));
        }
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            arr_16 [24U] = ((/* implicit */unsigned char) -8845890422845439589LL);
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) 3782821125833001088ULL))))))));
            arr_17 [i_3] [i_3] = ((/* implicit */unsigned int) ((signed char) (~(var_11))));
            var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-2655920330477070201LL)));
        }
        arr_18 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)41)) ? (arr_10 [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (-1098752952))))));
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) -3365425680337548226LL);
                        var_20 = ((/* implicit */signed char) var_12);
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_4] [i_5])) ? (((((/* implicit */_Bool) -261429437)) ? (max((((/* implicit */unsigned long long int) 697552347U)), (3782821125833001056ULL))) : (((/* implicit */unsigned long long int) ((long long int) arr_9 [(signed char)12] [i_5]))))) : (((/* implicit */unsigned long long int) max(((-(-3365425680337548226LL))), (var_0)))))))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_22 [6] [6])), (3076752821U))))))))));
            var_23 = (+(max((((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((((/* implicit */_Bool) (signed char)-108)) ? (14663922947876550525ULL) : (((/* implicit */unsigned long long int) var_1)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_4] [i_5])) == (((/* implicit */int) var_2))));
                /* LoopSeq 1 */
                for (signed char i_9 = 2; i_9 < 11; i_9 += 3) 
                {
                    arr_36 [i_5] [i_5] [i_8] [i_8] [i_9] = ((/* implicit */long long int) (-(3076752814U)));
                    arr_37 [10U] [i_5] [i_8] [i_9] |= ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) & (var_7)))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((_Bool) ((var_12) % (12416072575867541969ULL)))))));
                }
            }
        }
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (max((((/* implicit */unsigned long long int) min(((~(var_6))), (((/* implicit */unsigned int) ((signed char) 6030671497842009647ULL)))))), (((unsigned long long int) var_4))))));
        /* LoopSeq 1 */
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)17)) * (((/* implicit */int) (unsigned short)15))))) / (((-842340967435856337LL) | (-3365425680337548232LL))))), (((/* implicit */long long int) (+(arr_24 [10U] [i_10] [i_4]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
            {
                arr_44 [i_4] [i_10] [(unsigned char)7] [i_11] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)245)) != (((/* implicit */int) arr_22 [8U] [8U])))))));
                arr_45 [i_4] [i_10] [(unsigned short)5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_39 [i_11] [i_4] [i_4])))) != (((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_11])) ? (-6918024488742062938LL) : (var_7)))));
            }
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
            {
                var_28 = (!(((/* implicit */_Bool) var_11)));
                arr_48 [i_4] = ((/* implicit */int) max((((arr_40 [2U] [i_12 + 1] [i_12 + 1]) / (2844208442030546058LL))), (((/* implicit */long long int) ((arr_40 [i_12] [i_12] [i_12 + 1]) <= (-2655920330477070201LL))))));
                arr_49 [i_4] [i_10] [i_12 + 1] = min(((+(6918024488742062921LL))), (((3365425680337548226LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))))));
            }
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (unsigned char)62))))), ((-(((/* implicit */int) (unsigned char)176)))))))));
        }
        arr_50 [i_4] = ((/* implicit */unsigned short) (+((+((-(-3365425680337548237LL)))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -39002464)) + (4294967295U))))));
        arr_53 [i_13] = ((/* implicit */short) 0ULL);
        var_31 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_13] [i_13] [(unsigned char)13])) ? (((/* implicit */int) var_4)) : (var_10)));
        var_32 &= ((/* implicit */unsigned int) var_2);
        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(4294967285U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_13] [i_13] [i_13] [11ULL]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    }
    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (signed char)2)), (3782821125833001067ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8)))))))))))));
}
