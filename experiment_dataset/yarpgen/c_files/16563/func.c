/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16563
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [(signed char)5] [6] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) var_2))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0])), (var_8)))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (var_12))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), ((_Bool)0)))))))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (signed char)91)))))) ? (min((var_10), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) arr_1 [i_0]))))) > (18446744073709551615ULL)))))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (max((((((/* implicit */_Bool) arr_7 [6])) ? (var_10) : (8U))), (((/* implicit */unsigned int) var_0))))));
            var_15 = var_2;
        }
        var_16 = ((/* implicit */unsigned long long int) (unsigned short)7);
        var_17 = ((/* implicit */unsigned long long int) -1938468651);
    }
    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */int) var_11);
        var_19 = ((/* implicit */unsigned long long int) var_7);
        var_20 -= ((/* implicit */unsigned long long int) max(((~((~(((/* implicit */int) (unsigned short)65522)))))), (((((((/* implicit */int) arr_8 [i_3] [i_3])) + (2147483647))) << (((((/* implicit */int) var_11)) - (1)))))));
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) 2626118448U);
        arr_14 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((unsigned long long int) arr_11 [i_4])) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_10 [i_4] [i_4])))))))) == (((/* implicit */int) (unsigned short)65535))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 2) 
            {
                for (signed char i_7 = 3; i_7 < 16; i_7 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_25 [2U] [i_8] [i_6] [i_8] [i_8] = ((/* implicit */short) var_12);
                            var_22 *= ((((/* implicit */int) arr_20 [i_6 - 1] [i_5] [i_6 - 1] [10U] [i_8 - 1])) % ((+(((/* implicit */int) var_5)))));
                            arr_26 [(_Bool)1] [(_Bool)1] [i_8] [i_5] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_6 - 2]))));
                        }
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_29 [i_9] [i_4] [i_6] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (_Bool)1))))))) < (max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) min((var_6), (arr_27 [i_9] [(signed char)0] [(signed char)0] [(signed char)0] [(signed char)0]))))))));
                            arr_30 [i_4] [(signed char)0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_24 [i_6 - 1] [i_7 - 3] [i_9 - 1] [i_9] [3] [i_9 - 1])) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (arr_12 [i_4] [2LL])));
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) (unsigned short)16)) ? (var_8) : (((/* implicit */int) arr_33 [i_6])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))))))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13608368659004851759ULL)) ? (2147483647) : (((/* implicit */int) (_Bool)1))));
                            arr_34 [i_6] [i_6] [(unsigned short)16] [i_6] &= max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)102)) ^ (((/* implicit */int) var_0)))))))), (min((((((/* implicit */_Bool) -2147483623)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (558434474U))), (((/* implicit */unsigned int) min((arr_27 [i_10] [i_7] [(_Bool)1] [(_Bool)1] [(_Bool)1]), (var_1)))))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (var_7)));
                        }
                        arr_35 [i_7 - 3] [i_6] [i_5] [i_4] [i_4] [4U] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_5] [i_6] [i_7]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) + (var_10))))), (((/* implicit */unsigned int) (!(max((var_11), (var_11))))))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-((+(((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))))))))))));
                    }
                } 
            } 
        } 
        arr_36 [i_4] [i_4] = (~(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_12 [i_4] [i_4]), (arr_19 [i_4] [i_4] [i_4]))))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_42 [i_4] [i_11] [i_11] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (16886397588575182905ULL))))) < (10925749188977411297ULL)));
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        for (int i_14 = 2; i_14 < 13; i_14 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
                                var_28 = ((/* implicit */short) arr_8 [16] [i_14]);
                                arr_50 [i_11] [i_11] [i_12] [i_12] = ((/* implicit */unsigned int) 16886397588575182905ULL);
                                var_29 -= ((/* implicit */unsigned long long int) ((unsigned char) min((max((((/* implicit */unsigned long long int) var_0)), (9859141231522525262ULL))), (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_14] [i_12]))) : (1953172846U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) min((((/* implicit */int) var_5)), ((+(((/* implicit */int) var_1))))));
}
