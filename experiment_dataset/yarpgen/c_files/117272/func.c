/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117272
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
    var_20 = (+((-2147483647 - 1)));
    var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)57))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-1343))))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)255)))) ? ((~(((/* implicit */int) (short)32767)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)255)))))));
                        arr_11 [i_0] [i_1] [i_2 + 3] [(unsigned char)14] = ((/* implicit */long long int) (unsigned char)255);
                        var_22 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29922)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (_Bool)1))))) % (((unsigned int) (signed char)55))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 3; i_5 < 14; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (451888950U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15)))));
                            arr_16 [i_0] [i_0] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) 432642100020783258ULL);
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */signed char) ((var_0) % (((/* implicit */int) (signed char)3))));
                            arr_18 [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-15))));
                        }
                        var_24 = ((/* implicit */unsigned long long int) (short)9996);
                    }
                    arr_19 [i_0] [i_1] [i_0] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_4)) | (3U)));
                    var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (long long int i_7 = 3; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_26 [i_1] [i_6] [i_2 - 1] [i_1] [i_0 + 3] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))) : ((-(var_18))));
                                var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (signed char)-15)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                {
                    arr_29 [i_1] = ((/* implicit */int) ((unsigned long long int) (unsigned char)0));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 2; i_10 < 14; i_10 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)23621)))))));
                                arr_35 [i_0] [i_1] [i_1] [i_1] [i_10 - 1] [i_10] = ((/* implicit */_Bool) (signed char)15);
                                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((short) (unsigned char)255)))));
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)31744))) | (10243508284599745293ULL)));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                {
                    arr_38 [(short)10] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (var_18) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)85)))))));
                    arr_39 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (-((~(((/* implicit */int) (signed char)15))))));
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_0] [i_1] [i_1] [(signed char)10] = ((/* implicit */_Bool) var_15);
                        var_30 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_5)) : (0ULL)))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_31 &= ((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)15))))));
                        arr_46 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (signed char)(-127 - 1)));
                        var_32 = ((/* implicit */int) (signed char)0);
                        var_33 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-15))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */long long int) 0)) < (9223372036854775807LL))))));
                        arr_50 [i_0] [(signed char)7] [i_1] [i_14] [i_14] = ((/* implicit */short) 3897252870555659107ULL);
                        var_35 = ((/* implicit */unsigned long long int) -150547508);
                    }
                    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9996)) ? (986168740) : (((/* implicit */int) (short)0))))) ? (3843078345U) : (((((/* implicit */_Bool) 8203235789109806322ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168)))))));
                }
                arr_51 [i_1] [i_0 - 1] = ((/* implicit */short) 451888950U);
                arr_52 [0] [i_1] &= ((((unsigned long long int) var_13)) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)15))))))));
            }
        } 
    } 
}
