/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167106
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (short)30335))))))), (((unsigned short) (-(((/* implicit */int) (signed char)-117))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
                    var_16 += ((/* implicit */unsigned char) (-((-(arr_5 [i_1] [i_1])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) min(((signed char)-11), (((/* implicit */signed char) arr_2 [i_3])))))) > (((/* implicit */int) (short)-2460))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 4; i_4 < 22; i_4 += 4) 
                        {
                            arr_15 [i_0] [(short)7] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */int) (~(min((((/* implicit */long long int) ((signed char) arr_12 [i_2] [i_1] [i_2] [i_3] [(short)4]))), (((long long int) var_12))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)16))))))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max(((~((-(83891755U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)0))))))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) ((signed char) arr_6 [i_0 - 1]));
                            var_21 &= ((/* implicit */unsigned long long int) ((short) (unsigned short)15674));
                        }
                        var_22 = ((/* implicit */unsigned char) ((int) (signed char)-117));
                    }
                    var_23 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_13 [i_0 + 2] [i_0 + 1] [i_0] [i_0] [i_0 - 1]), (arr_13 [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1]))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) (short)3);
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
            {
                {
                    var_25 = (!(((((/* implicit */int) arr_3 [i_7])) >= (((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)20072)))))));
                    var_26 = ((/* implicit */unsigned int) 784146849206048943ULL);
                }
            } 
        } 
        var_27 *= ((/* implicit */unsigned char) (-(max(((~(arr_21 [(short)14] [i_0 - 1] [(short)14]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [(unsigned short)11])), (arr_4 [i_0]))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_25 [i_8]))));
        var_29 *= ((/* implicit */unsigned int) (unsigned char)159);
        /* LoopSeq 2 */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
        {
            var_30 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) min((11447818389136062600ULL), (((/* implicit */unsigned long long int) arr_8 [1ULL] [i_9]))))))));
            arr_28 [i_8] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)19444)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_23 [i_9])) : (((/* implicit */int) arr_2 [i_8]))))) : (-6677909339102374679LL)));
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
        {
            arr_31 [i_8] [i_10] = ((((/* implicit */_Bool) ((unsigned int) arr_14 [i_8] [i_8] [i_8] [i_8] [i_10]))) ? (((((/* implicit */_Bool) arr_30 [i_10] [i_10] [(signed char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_8] [i_10]))) : (784146849206048920ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) (short)32749)) - (32730)))))));
            var_31 -= ((long long int) ((((/* implicit */_Bool) arr_3 [(_Bool)0])) ? (((/* implicit */int) arr_23 [i_10])) : (((/* implicit */int) arr_16 [i_8] [i_10] [i_8] [i_8] [i_8]))));
        }
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            var_32 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) (signed char)6)))))) ? (((((((/* implicit */_Bool) arr_32 [i_8] [i_11])) ? (11447818389136062587ULL) : (arr_5 [i_8] [i_11]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_8] [i_11]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned char) (unsigned char)95))))));
            var_33 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(max((((/* implicit */unsigned int) arr_10 [i_11] [14U] [i_11] [i_11] [i_11])), (arr_4 [i_8])))))), (-7323665579162692607LL)));
        }
        var_34 = ((/* implicit */unsigned long long int) min((((int) ((unsigned short) arr_30 [i_8] [(signed char)1] [(short)18]))), ((+(((((/* implicit */int) arr_2 [i_8])) & (((/* implicit */int) arr_10 [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
    }
    for (long long int i_12 = 2; i_12 < 17; i_12 += 4) 
    {
        var_35 = ((/* implicit */short) max((((((/* implicit */int) arr_18 [i_12] [i_12 + 1] [i_12])) > (((/* implicit */int) arr_18 [2ULL] [i_12 + 1] [i_12])))), ((!(((/* implicit */_Bool) (short)-4251))))));
        arr_38 [i_12 + 3] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_12])) ? ((-((+(arr_4 [i_12]))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (!(arr_2 [i_12])))), (((((/* implicit */_Bool) (short)32741)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))))));
        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_36 [17LL]))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((int) arr_18 [i_12] [(short)10] [i_12]))))) : (((/* implicit */int) (short)-19347)))))));
        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_22 [i_12] [i_12] [i_12])) ? (2147483647) : (((/* implicit */int) arr_17 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 + 1])))) ^ (max((((/* implicit */int) (signed char)-117)), (383661972)))))) ? (arr_21 [i_12] [i_12] [i_12]) : ((-(784146849206048939ULL)))));
    }
    var_38 = ((/* implicit */unsigned long long int) (short)-7468);
    /* LoopSeq 3 */
    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
    {
        arr_41 [i_13] &= 2147483647;
        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_13])) ? (((/* implicit */unsigned long long int) arr_40 [i_13] [6])) : (6998925684573489015ULL)))) ? ((+(11447818389136062593ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_13] [i_13])) ? (arr_40 [i_13] [i_13]) : (arr_40 [i_13] [i_13]))))));
    }
    /* vectorizable */
    for (unsigned char i_14 = 0; i_14 < 25; i_14 += 1) 
    {
        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((long long int) 11447818389136062600ULL)))));
        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_14] [i_14])) ? (((/* implicit */unsigned long long int) -1194870393)) : ((+(arr_45 [i_14])))));
        var_42 = ((/* implicit */unsigned char) ((arr_45 [i_14]) != (0ULL)));
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 11; i_15 += 4) 
    {
        var_43 = ((/* implicit */long long int) arr_48 [i_15]);
        var_44 = ((/* implicit */short) (+(((((/* implicit */_Bool) 17723238089038598194ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_15] [i_15]))) : (6998925684573489015ULL)))));
        var_45 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_36 [i_15])) ? (3976528993U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_8 [(unsigned char)4] [(unsigned char)4]))))));
    }
}
