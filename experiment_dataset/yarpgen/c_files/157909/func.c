/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157909
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((max(((!(((/* implicit */_Bool) (signed char)57)))), ((!((_Bool)1))))) ? (((/* implicit */int) ((unsigned short) (~(arr_1 [i_0]))))) : (min(((~(((/* implicit */int) (signed char)-32)))), (((/* implicit */int) (unsigned short)33547))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 4])) ? (((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_1 - 1] [(short)13])), (((((/* implicit */_Bool) -7457775862677681195LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)30170))))))) : (-3318320609311734355LL)));
            arr_5 [i_1 - 2] [i_1] [i_1] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
            var_19 += ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_1] [i_0])) << (((13535481166913467063ULL) - (13535481166913467058ULL)))));
            var_20 = ((/* implicit */unsigned int) (signed char)24);
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_3] [i_2] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) min((2859191756U), (((/* implicit */unsigned int) (short)62))))) ? (((/* implicit */unsigned int) 1073741312)) : (arr_0 [i_2] [i_1]))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) (short)32749)) : (((/* implicit */int) (short)-14059)))))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22328)) ? (((/* implicit */int) arr_3 [i_1 - 4] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_1 - 4] [i_2 + 1] [i_2 - 1] [i_3]))))) ? ((((~(((/* implicit */int) arr_3 [i_0] [i_1] [(short)8])))) << (((((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2] [i_2])) ? (5951711075609174552LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))) - (5951711075609174531LL))))) : (((/* implicit */int) (unsigned short)12183))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
    {
        var_22 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_13 [i_4])) ? (var_16) : (3540383194U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
        var_23 = ((/* implicit */unsigned long long int) 4294967282U);
        var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_13 [i_4]))) ? ((-(((((/* implicit */_Bool) (unsigned short)10141)) ? (arr_13 [i_4]) : (((/* implicit */unsigned long long int) var_16)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33209)))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(572940262U))), (arr_14 [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((-(max((((/* implicit */unsigned int) -1472788733)), (var_16)))))));
        arr_15 [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (((arr_11 [i_4]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (4278190080U) : (((/* implicit */unsigned int) min((290129919), (((/* implicit */int) (unsigned char)137)))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (short)16240))))));
        var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((var_14) ^ (((/* implicit */long long int) arr_14 [i_5] [i_5]))))) : (var_7)));
        arr_20 [i_5] = ((/* implicit */short) arr_14 [i_5] [i_5]);
        var_28 = ((/* implicit */unsigned short) ((unsigned int) var_8));
        arr_21 [i_5] = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_5]))));
    }
    for (signed char i_6 = 3; i_6 < 17; i_6 += 1) 
    {
        arr_26 [14ULL] [(short)11] = ((/* implicit */long long int) max((((/* implicit */int) max((arr_23 [i_6 + 1] [i_6 - 3]), (((/* implicit */short) var_11))))), ((+(((/* implicit */int) (unsigned char)15))))));
        /* LoopSeq 2 */
        for (unsigned short i_7 = 3; i_7 < 17; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (signed char i_10 = 2; i_10 < 17; i_10 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_33 [i_10 - 1] [i_7 - 1] [i_6 + 1])) ? (133693440U) : (2380322165U))) | (((/* implicit */unsigned int) min((((/* implicit */int) arr_30 [i_8] [i_7])), (((((/* implicit */_Bool) arr_30 [i_6] [(unsigned short)3])) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) arr_28 [i_6 - 2]))))))))))));
                            var_30 = ((/* implicit */signed char) (((+(1040187392U))) <= (((arr_25 [i_8]) + (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (signed char)85))))) ? (((/* implicit */unsigned int) -1428768558)) : (16646144U))))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            arr_41 [i_6] [i_11] [i_11] = (((!(((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (-2147483647 - 1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2016))))) : (((((/* implicit */int) (short)32756)) - (((/* implicit */int) (signed char)-120)))));
            arr_42 [0U] [i_11] [i_11] = ((/* implicit */unsigned int) 4503599627370494LL);
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */int) arr_22 [i_6 - 2]))))) ? (((((/* implicit */_Bool) arr_22 [i_6 + 1])) ? (((/* implicit */int) arr_22 [i_6 - 1])) : (((/* implicit */int) arr_22 [i_6 - 3])))) : ((-(((/* implicit */int) arr_22 [i_11]))))));
        }
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_6 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) : (arr_25 [i_6 - 2])))), (min((arr_29 [i_6 - 1] [i_6 - 1]), (((/* implicit */unsigned long long int) var_0)))))))));
    }
    var_34 |= ((((/* implicit */_Bool) (-((+(var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((((((/* implicit */_Bool) var_15)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65185))))), (((/* implicit */unsigned int) var_6)))));
}
