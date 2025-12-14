/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12749
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 4; i_1 < 15; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                var_20 = ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_0 + 2])) ? (((/* implicit */unsigned long long int) var_13)) : (4ULL)))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */int) arr_4 [i_1 - 4])) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (short)255)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    var_22 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (short)0))))));
                    arr_9 [(signed char)14] [i_1] [i_2] [i_3] [i_3] [(signed char)6] = ((/* implicit */unsigned char) 18446744073709551611ULL);
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) 13ULL))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(short)4])) ? (((arr_13 [i_2]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)49)))) : (((/* implicit */int) (short)8469)))))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (+(1597640403))))));
                    }
                }
                for (signed char i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_2])) + (((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) arr_3 [i_5] [i_0 - 2] [i_5])) : (((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_2]))))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) > (18446744073709551592ULL)));
                }
                for (signed char i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                {
                    arr_19 [(_Bool)1] = ((/* implicit */unsigned int) (unsigned char)152);
                    var_28 = (!(((/* implicit */_Bool) 7476608201586786274LL)));
                }
            }
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9733)) ? (((/* implicit */unsigned long long int) 18U)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-14023))))) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))))))))));
            var_30 = (-((~(arr_0 [i_0 - 3]))));
            arr_20 [i_0 + 2] [(unsigned short)14] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) max(((~(((/* implicit */int) (short)22292)))), (((/* implicit */int) (!(((/* implicit */_Bool) 1511703970064307946LL)))))))) + ((-(-1119580200050369420LL)))));
        }
        /* vectorizable */
        for (signed char i_7 = 4; i_7 < 15; i_7 += 4) /* same iter space */
        {
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (18446744073709551593ULL) : (18446744073709551611ULL)));
            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551611ULL)))))));
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            arr_26 [(short)3] [i_0] [i_0] = arr_22 [i_0 - 1] [i_8 + 1];
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0 - 1] [i_9 + 1]))));
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) var_11))));
                        }
                    } 
                } 
            } 
            var_35 ^= ((/* implicit */unsigned int) (-((~(arr_27 [i_0] [i_8])))));
        }
        arr_35 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4ULL)));
        var_36 = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned char)214))))) - (((long long int) var_1)))), (((/* implicit */long long int) arr_34 [12ULL] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) min((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_19))))), (max((var_8), (((/* implicit */short) (signed char)110))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-116))))) ? (((/* implicit */int) (signed char)-50)) : (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])) ? (33488896) : (((/* implicit */int) var_11)))))))))));
    }
    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
    {
        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)9526)))))));
        arr_38 [i_12] [i_12] = ((/* implicit */short) var_19);
        var_39 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_12])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 1422405700U)))))))));
        arr_39 [15ULL] [i_12] = ((/* implicit */unsigned short) ((long long int) var_8));
        var_40 = ((/* implicit */_Bool) min((((arr_11 [4LL] [i_12] [i_12] [i_12] [i_12]) ? (arr_33 [i_12] [i_12] [i_12] [i_12] [i_12]) : (arr_33 [i_12] [i_12] [i_12] [i_12] [i_12]))), (((/* implicit */unsigned int) arr_11 [2] [i_12] [i_12] [i_12] [(short)4]))));
    }
    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 2) 
    {
        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) min((var_9), (arr_34 [i_13] [(_Bool)1] [i_13] [i_13] [10U] [4U] [i_13])))), ((unsigned short)9529)))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))), (18446744073709551596ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_13]))))))));
        var_42 = ((/* implicit */unsigned int) var_14);
    }
    var_43 = ((/* implicit */signed char) var_13);
}
