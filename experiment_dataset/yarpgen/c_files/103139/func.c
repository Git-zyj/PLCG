/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103139
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
    var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-25191)) : ((-(((/* implicit */int) var_17)))))), (((/* implicit */int) (short)18154))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) (+(((arr_2 [i_0 - 1]) / (arr_2 [i_0 - 1])))));
        arr_3 [(signed char)4] [i_0] = ((/* implicit */long long int) ((signed char) 68719476735LL));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((((((/* implicit */int) (signed char)-47)) + (2147483647))) << (((274877906942LL) - (274877906942LL)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (signed char)-118);
                                arr_17 [i_4] [i_1] [i_2] [i_3] |= ((/* implicit */short) 9810207932283862023ULL);
                                arr_18 [i_0] [i_0 - 1] [i_2] [i_0] [i_0] [18ULL] [i_0] = (short)-18154;
                            }
                        } 
                    } 
                    arr_19 [i_2] = ((/* implicit */signed char) (short)12513);
                    var_21 = ((/* implicit */short) ((signed char) (~(((((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_2] [i_2])) << (((8981390504985109356ULL) - (8981390504985109336ULL))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_5 = 2; i_5 < 20; i_5 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (unsigned short)12518)) : (((/* implicit */int) (signed char)-116))))) ? (4305694010335814104ULL) : (((((/* implicit */_Bool) (unsigned short)19920)) ? (arr_7 [i_5 + 1] [i_5 + 1] [i_5]) : (3476008725655278700ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) arr_8 [i_0] [i_5])) : (((/* implicit */int) (short)-28374))))) ? ((-(14607631535243050295ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_5])))))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                for (short i_7 = 2; i_7 < 20; i_7 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (signed char)85))))))));
                        var_24 = ((/* implicit */long long int) (-(arr_25 [i_5] [i_5 - 2] [i_5])));
                    }
                } 
            } 
        }
        for (short i_8 = 2; i_8 < 20; i_8 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) arr_26 [i_8] [(signed char)13] [i_8 - 1]);
            /* LoopSeq 3 */
            for (unsigned short i_9 = 1; i_9 < 20; i_9 += 2) 
            {
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_7 [i_0] [i_8] [i_9]))));
                var_27 = ((/* implicit */long long int) ((9465353568724442238ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((-2734845876499508778LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50363))))))))));
            }
            for (signed char i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                var_28 = ((/* implicit */long long int) arr_1 [i_0]);
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    arr_41 [i_0] [i_0] [(signed char)9] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_0] [i_0])) || (((/* implicit */_Bool) 8981390504985109339ULL))));
                    var_29 = ((/* implicit */unsigned long long int) ((short) 7252989964022127455LL));
                }
            }
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    for (signed char i_14 = 2; i_14 < 20; i_14 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)94))) >= (((arr_16 [(unsigned short)2] [i_8] [i_12] [i_14] [i_14] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_0] [i_0 + 1] [i_0])))))))))))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_24 [i_0 + 1] [(short)1] [(short)1] [i_14 - 1]))) ? (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_8]))) == (9223372036854775807LL)))) - ((-(((/* implicit */int) arr_12 [i_8])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_14 + 1] [i_12])) || (((/* implicit */_Bool) arr_8 [i_14 + 1] [i_12])))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1123130092U)) ? (arr_4 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))))))))));
            }
            var_33 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) arr_26 [i_0 + 2] [i_0 + 2] [2LL])));
            var_34 = ((/* implicit */unsigned long long int) arr_33 [i_0] [i_8] [i_8]);
            var_35 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) 9223372036854775807LL))) >= ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_0] [i_0] [(short)6])))))))));
        }
    }
    for (signed char i_15 = 0; i_15 < 16; i_15 += 2) 
    {
        var_36 = ((/* implicit */signed char) ((((/* implicit */int) (short)32742)) == (((/* implicit */int) arr_32 [(signed char)16] [i_15] [i_15] [i_15]))));
        arr_51 [i_15] = ((/* implicit */signed char) arr_26 [i_15] [i_15] [i_15]);
        var_37 = ((/* implicit */unsigned int) 6935536393369973864ULL);
    }
    var_38 = (signed char)-74;
    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)9845)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32760))) : (14206051772723663585ULL))) - (((/* implicit */unsigned long long int) 2734845876499508780LL))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))));
}
