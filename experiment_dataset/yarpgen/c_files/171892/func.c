/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171892
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_16 |= ((/* implicit */short) (unsigned short)27008);
        var_17 = ((/* implicit */_Bool) ((arr_0 [i_0 - 1]) ^ (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((5436743935397011746ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))));
        var_19 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_1])))) + (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)8334)))))));
        var_20 -= ((/* implicit */long long int) arr_2 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) var_3);
        var_22 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) max((var_5), ((_Bool)1)))), ((~(arr_7 [i_2]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28912)) * (((/* implicit */int) var_15))))) ? (arr_3 [i_2 + 1]) : (((/* implicit */int) max((arr_6 [i_2]), (arr_6 [i_2]))))))) ? (((unsigned long long int) max((((/* implicit */unsigned char) arr_4 [i_2])), (var_4)))) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)0)))) / (((((/* implicit */int) var_1)) / (((/* implicit */int) var_1)))))))));
    }
    var_24 |= ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
    var_25 = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_0)))), (((((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_15))))) | ((~(((/* implicit */int) (unsigned char)106))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_9 [i_3])) ? (2652130859200335875ULL) : (((/* implicit */unsigned long long int) -1157625912)))))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    {
                        var_27 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (arr_11 [i_3] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [(short)2]))))) - (arr_16 [(short)6] [(short)6] [i_5] [i_5] [i_5])));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                        {
                            var_29 -= ((((/* implicit */_Bool) (~(arr_16 [i_4] [(unsigned short)0] [i_6] [i_6] [i_4])))) ? (((/* implicit */int) arr_12 [i_3])) : ((~(var_6))));
                            var_30 -= ((/* implicit */unsigned char) ((-1) - (((/* implicit */int) (!(var_9))))));
                            var_31 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_19 [i_3] [i_3])) ? (((/* implicit */int) var_14)) : (2147483647)))));
                        }
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
                        {
                            arr_22 [i_3] [i_3] [i_5] [i_3] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)192)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_19 [i_8] [i_4])) : (((/* implicit */int) ((signed char) var_4)))));
                            var_32 = ((/* implicit */unsigned char) arr_14 [i_3] [(unsigned short)14] [i_8]);
                            var_33 = ((/* implicit */signed char) arr_9 [5ULL]);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
    {
        arr_26 [11LL] = (unsigned char)191;
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65535), (arr_17 [i_9]))))) >= (max((arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), (arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))));
        arr_27 [(unsigned char)12] [(unsigned char)12] = (-(max((((var_9) ? (((/* implicit */int) arr_8 [i_9] [(unsigned short)5])) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */signed char) (((((-(arr_16 [i_10] [(unsigned char)8] [(signed char)19] [(signed char)8] [i_10]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_10]))))) ^ ((~(max((((/* implicit */unsigned long long int) arr_21 [i_10] [i_10] [i_10] [i_10] [18] [18] [i_10])), (arr_9 [(unsigned char)9])))))));
        var_36 = ((/* implicit */int) (-(min((max((var_10), (((/* implicit */long long int) -1617389023)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned char) (short)22956);
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            for (unsigned char i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                {
                    var_38 |= ((/* implicit */long long int) (((_Bool)1) || (arr_37 [(signed char)6] [(signed char)6])));
                    arr_39 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((arr_29 [i_12]), (arr_29 [i_11])))), (max((((((/* implicit */_Bool) (unsigned char)179)) ? (arr_38 [i_11] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)107))))), (((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */int) arr_10 [i_11] [i_12])))))))));
                }
            } 
        } 
    }
}
