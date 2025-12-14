/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120762
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((_Bool) var_18)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (((-(18446744073709551615ULL))) * (((unsigned long long int) var_4)))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) % (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))), (min((((/* implicit */unsigned long long int) arr_6 [i_0])), (1ULL)))))) ? (((/* implicit */int) ((_Bool) ((-81582720) / (-1995848641))))) : (((((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) arr_0 [i_1])) : (81582704))) << (((((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (var_11))) + (1236816416482455254LL)))))));
            var_21 -= (_Bool)1;
        }
        for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) min((((((/* implicit */int) var_10)) >= (-20))), (arr_0 [i_0]))))));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48526))))) >> ((((+(((/* implicit */int) (signed char)-84)))) + (102))))) - ((~(((/* implicit */int) min((var_6), (((/* implicit */short) (_Bool)0))))))))))));
            arr_12 [i_2] [i_2] [i_2] = ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_10 [i_0] [i_2])), ((unsigned short)48526)))) || (((/* implicit */_Bool) var_16))))) == (((/* implicit */int) ((((var_1) << (((/* implicit */int) var_12)))) >= (((/* implicit */unsigned long long int) ((int) (unsigned char)63)))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 4 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_7))));
                var_24 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_4]))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)5090)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))))));
                var_26 -= ((/* implicit */long long int) 2147483647);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) arr_17 [i_0 - 2])) : (18446744073709551615ULL)));
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) 1ULL))));
                var_29 = ((/* implicit */unsigned int) ((((arr_9 [i_0] [i_0 - 3] [i_6]) + (9223372036854775807LL))) << (((((arr_9 [(_Bool)1] [i_0 - 3] [i_0 - 3]) + (895791233649336453LL))) - (17LL)))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_27 [1LL] [i_7] [i_7] [i_0] = ((((/* implicit */_Bool) arr_26 [i_0] [i_0 - 2] [i_0 - 1])) || (((/* implicit */_Bool) var_7)));
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (_Bool)1))));
                arr_28 [i_7] [i_3] [i_7] [i_0] = ((/* implicit */long long int) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(unsigned char)10] [i_0 + 3] [i_0 + 3])))));
            }
            var_31 -= ((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))));
        }
        for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 3) 
        {
            arr_31 [i_0] [i_8] = ((/* implicit */short) ((-1342309379556264707LL) + (((/* implicit */long long int) ((/* implicit */int) var_4)))));
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_15 [i_0 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((unsigned long long int) var_5))))) : (((arr_24 [4LL] [4LL]) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        }
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_32 [i_0] = ((/* implicit */_Bool) var_18);
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_34 = ((/* implicit */int) max((var_34), ((+(((/* implicit */int) arr_33 [i_9]))))));
        var_35 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_2)) >> (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 3; i_11 < 22; i_11 += 2) 
            {
                for (int i_12 = 3; i_12 < 22; i_12 += 3) 
                {
                    {
                        arr_43 [(short)20] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) ((arr_39 [i_11 - 2] [i_11 - 2] [i_10] [(_Bool)1] [i_10] [i_10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109)))));
                        var_36 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_39 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    }
    var_38 = ((/* implicit */unsigned long long int) 529437674604689107LL);
}
