/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171474
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 + 1] [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)33))));
            var_13 = ((/* implicit */unsigned int) (signed char)-1);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) (short)-19499);
                        var_15 = ((/* implicit */short) arr_2 [i_0 + 3]);
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (short i_4 = 4; i_4 < 21; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                for (unsigned int i_6 = 1; i_6 < 23; i_6 += 1) 
                {
                    {
                        var_16 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_9 [i_0] [14U] [14U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32702))) : (15ULL)))))) ? (((((/* implicit */_Bool) arr_16 [i_0 + 3] [i_0])) ? (arr_16 [i_0 - 2] [0U]) : (arr_16 [i_0 + 2] [i_0 - 3]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-33))))));
                        var_17 = ((/* implicit */short) arr_10 [i_6 + 1] [i_4 + 1] [i_5] [i_0 - 3] [(signed char)21]);
                    }
                } 
            } 
        } 
        arr_21 [(short)18] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-19499))))) * ((-(arr_18 [i_0 + 1] [i_0 + 2] [(_Bool)1] [i_0 + 2] [i_0 + 1])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_7 = 3; i_7 < 20; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_8 = 3; i_8 < 21; i_8 += 2) /* same iter space */
            {
                arr_26 [i_0] [i_7] [i_8] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 856638839683988906ULL))))) - (((/* implicit */int) arr_9 [i_0 - 1] [i_8] [i_0]))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_0 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0 + 3] [i_7 + 4]))) : (((unsigned int) arr_12 [i_0] [i_7 - 3] [i_7 - 3]))));
                var_19 = ((/* implicit */signed char) (+(arr_14 [i_7 + 1] [i_7 + 2] [i_7 - 2])));
            }
            for (long long int i_9 = 3; i_9 < 21; i_9 += 2) /* same iter space */
            {
                arr_31 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(arr_18 [i_0 + 2] [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 2])));
                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_9 + 2] [i_7 + 4]))));
            }
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_18 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]) * (arr_18 [i_0] [i_7 - 2] [i_7] [i_7 - 2] [i_0 + 3])));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_7 + 1])) + (((/* implicit */int) arr_27 [i_7 + 2] [i_7] [i_0 - 2]))));
        }
        for (unsigned int i_10 = 3; i_10 < 20; i_10 += 2) /* same iter space */
        {
            arr_35 [(short)14] &= ((/* implicit */unsigned int) arr_17 [i_0] [i_10]);
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_13 [i_11] [i_0])))) ? (((/* implicit */int) arr_36 [i_0])) : ((+((+(((/* implicit */int) (unsigned short)0)))))))))));
                arr_38 [i_10] [i_11] [i_10 - 1] [i_10] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (((arr_30 [i_11] [i_10 + 1] [i_10] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_11] [i_10]))) : (arr_11 [i_0] [i_10] [i_11] [(_Bool)1]))) : ((~(arr_33 [i_0] [i_10] [i_11])))))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((~(arr_20 [i_0 + 1] [i_10])))))) && (((/* implicit */_Bool) (+(((arr_13 [i_0] [i_10]) * (arr_13 [i_0] [i_11]))))))));
                var_24 = ((/* implicit */long long int) arr_7 [i_0]);
                var_25 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 8422272657389483821LL)) ? (arr_16 [i_0 - 2] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0 + 3] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 3])))))));
            }
            for (signed char i_12 = 3; i_12 < 22; i_12 += 2) 
            {
                var_26 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65535))));
                var_27 = ((/* implicit */unsigned int) (signed char)109);
            }
            var_28 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_20 [i_0 + 1] [i_10 + 4]))))));
        }
    }
    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (short i_13 = 0; i_13 < 12; i_13 += 3) 
    {
        for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            {
                var_30 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)31)) % (((/* implicit */int) (!(((/* implicit */_Bool) (~(4294967295U)))))))));
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((((/* implicit */_Bool) (~((~(arr_14 [i_13] [i_14] [(short)0])))))) ? (((arr_28 [i_13]) << (((((/* implicit */int) arr_39 [i_13] [i_14] [i_14])) + (30992))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_14])) / (((/* implicit */int) arr_27 [i_13] [i_13] [i_14])))))))));
            }
        } 
    } 
}
