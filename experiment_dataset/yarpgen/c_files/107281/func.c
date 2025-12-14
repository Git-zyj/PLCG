/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107281
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 &= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                    var_17 = ((/* implicit */unsigned long long int) var_13);
                    arr_7 [i_0] [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? ((+(((/* implicit */int) arr_1 [i_1])))) : ((-((+(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        var_18 = min((((/* implicit */unsigned int) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_4 [9U] [9U] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (arr_2 [i_0] [i_0]))))))), (min((((/* implicit */unsigned int) (signed char)0)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (var_4))))));
        arr_8 [i_0] = ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) (~(-781503983))))));
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (781503983)))) : (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) arr_2 [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [7LL] [i_0]))))) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_4 [i_0] [(unsigned char)6] [i_0])))) : (((((/* implicit */int) var_0)) | (((/* implicit */int) var_12))))))) : (arr_0 [i_0] [i_0]));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (arr_10 [i_3])))) ? (max((arr_10 [i_3]), (arr_10 [i_3]))) : ((+(arr_10 [i_3]))))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */_Bool) ((unsigned short) -781503983))) ? (((/* implicit */int) max(((signed char)0), (var_2)))) : (((/* implicit */int) var_3)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_10 [i_4])) + (arr_0 [i_4] [i_4]))) + (arr_0 [i_4] [i_4])));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 &= ((/* implicit */unsigned short) ((_Bool) var_0));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_10 [i_5]) : (((/* implicit */int) arr_2 [i_4] [i_4]))))) * (((arr_9 [i_4] [i_5]) / (arr_9 [i_4] [(_Bool)1])))));
            var_24 -= ((/* implicit */unsigned int) arr_13 [i_4]);
            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) (signed char)-9)) : (-1911260271))))));
            var_26 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_4] [i_4] [i_4])))))));
        }
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 2; i_7 < 8; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 7; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7] [i_7] [i_7])))));
                            var_28 = 5436447976051995293ULL;
                            arr_27 [i_7] [i_9] [8] [2ULL] [i_6] [i_4] [i_7] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_7 + 2] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_3 [i_4] [i_4] [i_4])) : (((((/* implicit */_Bool) arr_20 [(unsigned char)9] [i_6] [i_7 - 1] [i_8])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)32256))))));
                        }
                    } 
                } 
                arr_28 [i_4] [i_6] = ((/* implicit */signed char) arr_17 [i_6] [i_6]);
            }
            /* LoopSeq 4 */
            for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                arr_32 [i_10] [i_10] [i_6] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_25 [i_4] [(signed char)3] [i_10] [i_6] [i_4])) << (((/* implicit */int) arr_25 [i_4] [7U] [i_4] [i_4] [7U])))) << (((((/* implicit */int) var_9)) + (59)))));
                var_29 &= ((/* implicit */_Bool) 1414729614U);
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_36 [i_4] [i_4] [i_11] [i_11] = ((/* implicit */short) 1176658193U);
                arr_37 [i_4] [i_4] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)11135))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */signed char) ((long long int) (_Bool)1));
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (-(((((/* implicit */int) var_11)) - (((/* implicit */int) arr_38 [i_12] [i_6] [i_4])))))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                arr_46 [i_13] [(signed char)9] = ((/* implicit */_Bool) ((((2880237682U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_4] [i_4] [i_4] [i_4])))));
                var_32 = ((/* implicit */unsigned short) (signed char)-59);
            }
        }
        var_33 = ((/* implicit */int) ((signed char) (signed char)15));
    }
    var_34 -= ((/* implicit */signed char) var_14);
    var_35 = ((/* implicit */unsigned int) (~(var_15)));
}
