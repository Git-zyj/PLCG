/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108302
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((arr_3 [i_1]), (((/* implicit */unsigned long long int) -2138658885)))), (((/* implicit */unsigned long long int) ((short) 720167153501969179ULL)))))) ? ((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18020530099758766170ULL))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_2])))) ? (((/* implicit */int) max(((signed char)80), ((signed char)80)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)102)), ((unsigned short)57594))))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        arr_10 [i_1] [i_2 - 2] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (-(10645469796167140780ULL)));
                        arr_11 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1] [i_1] [i_2 + 3] [i_3 - 2]))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)18985)) ? (((/* implicit */int) (unsigned short)57594)) : (((/* implicit */int) (unsigned short)57588)))))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_1]) : (arr_3 [i_1])));
                    }
                    for (unsigned int i_4 = 2; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)7958)), (((((/* implicit */_Bool) min((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), ((short)7967)))) ? (((/* implicit */int) ((signed char) (signed char)6))) : (arr_0 [i_0])))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            var_20 -= ((/* implicit */long long int) min(((+((+(((/* implicit */int) (signed char)-110)))))), (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [2ULL]))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_9 [i_1] [i_4 + 2] [i_1]))) ? (((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_4 + 2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [1LL] [i_2] [i_4 + 1] [i_5])) < (((/* implicit */int) (signed char)-110)))))) : (((unsigned long long int) 8796093022207ULL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2] [i_2] [i_4 - 2])) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (signed char)98)))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            var_22 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2])), ((unsigned short)7971)))) ? (max((max((15109830979812993334ULL), (33554431ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_8 [i_0] [i_1] [i_4] [i_4])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2 + 2] [i_0] [i_6])) ? (((/* implicit */int) (unsigned short)63926)) : (((2147483629) << (((268435456U) - (268435456U))))))))));
                            arr_21 [i_1] = ((/* implicit */unsigned char) 33554443ULL);
                            var_23 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((3403962179651448537LL), (((/* implicit */long long int) arr_17 [i_6] [i_4] [i_2] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_2] [i_1] [i_2] [(_Bool)1])), ((unsigned short)51677)))) : (((/* implicit */int) ((unsigned short) (unsigned short)33982))))))));
                            arr_22 [i_0] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_1] [(unsigned char)13] [i_4] [i_6])) != (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2 + 3] [i_4 - 2] [i_6 - 1])) ? (((/* implicit */int) (unsigned short)7958)) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_4 + 1] [i_0]))))));
                        }
                        for (signed char i_7 = 1; i_7 < 11; i_7 += 2) 
                        {
                            var_24 -= ((/* implicit */signed char) (+(min((((/* implicit */long long int) (+(1879199167)))), ((-(-3508920938401897602LL)))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_1] [i_7]))))) ? (min((13679099005419577362ULL), (((/* implicit */unsigned long long int) (unsigned short)7929)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-5283)), ((unsigned short)20346))))))))))));
                            arr_25 [i_1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (~(8796093022195ULL)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 2] [i_4 + 2])) ? (-5159530472428691198LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4)))));
                            arr_26 [i_1] [i_1] [(signed char)0] [i_4 + 1] = ((/* implicit */signed char) (~((((((~(((/* implicit */int) arr_14 [10] [i_1] [i_2] [i_4] [i_7])))) + (2147483647))) << ((((~(0ULL))) - (18446744073709551615ULL)))))));
                        }
                    }
                    arr_27 [i_1] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 4294967286U))))), ((+(((/* implicit */int) (short)-4348))))));
                }
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [7ULL])) ^ (((/* implicit */int) (unsigned short)48953))))), (max((1932667435U), (((/* implicit */unsigned int) (unsigned short)7927))))))), (9223372036854775807LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 2; i_10 < 13; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */short) (-(((((_Bool) arr_8 [(unsigned short)9] [i_1] [i_9] [i_10 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)57578), (((/* implicit */unsigned short) (signed char)-85)))))) : (max((-7402122092841468725LL), (((/* implicit */long long int) 4294967295U))))))));
                                var_28 |= ((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_10 + 1] [i_10] [i_10 - 2] [i_10]))))), (max((arr_5 [i_10 + 1] [i_10 + 1] [i_10 + 2] [i_10]), (arr_5 [i_10 - 2] [3LL] [i_10 + 2] [i_10])))));
                                var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-85)), ((unsigned short)7962)))) ? (4294967295U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)127))))))) < (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)27)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (short)32767)))))))));
                            }
                        } 
                    } 
                    arr_37 [i_0] [i_1] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_13 [i_8] [i_8] [i_1] [i_1] [i_0])))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0]))))), (0U))) : (((/* implicit */unsigned int) (+(arr_29 [(signed char)10] [i_1] [i_8]))))));
                }
                for (int i_11 = 4; i_11 < 11; i_11 += 1) 
                {
                    var_30 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    var_31 = ((/* implicit */int) arr_3 [11ULL]);
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25632)) ? (arr_15 [i_0] [(signed char)8] [i_1] [i_11 - 1] [i_11]) : (((int) 18446744073709551615ULL))))) ? (((unsigned long long int) min((((/* implicit */int) (signed char)-10)), (1961803825)))) : (((/* implicit */unsigned long long int) max((min((arr_8 [i_0] [i_0] [i_11] [i_11]), (((/* implicit */unsigned int) (short)-1805)))), (((unsigned int) (short)-1805)))))))));
                    /* LoopSeq 1 */
                    for (short i_12 = 2; i_12 < 14; i_12 += 1) 
                    {
                        arr_42 [i_1] [i_1] [i_11] [i_12] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned short) -1))), ((-((~(arr_38 [i_0] [i_1] [i_11 + 4] [i_12])))))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) (signed char)-100)))) ? (min((((/* implicit */int) (unsigned short)6144)), (((((/* implicit */_Bool) -3403962179651448535LL)) ? (((/* implicit */int) arr_41 [i_1] [i_12] [i_11 + 2] [i_12])) : (((/* implicit */int) arr_32 [i_11] [i_1] [i_12] [i_12] [i_12])))))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1]))))))));
                        arr_43 [i_0] [i_1] [i_11 - 3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (short)-1805))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) : (max((min((((/* implicit */long long int) (unsigned short)13093)), (-5267817029220876096LL))), (((/* implicit */long long int) (unsigned short)7947))))));
                    }
                }
                var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */short) arr_9 [(unsigned char)4] [i_0] [(unsigned char)4])), (arr_32 [i_0] [i_0] [i_1] [i_1] [i_1])))) ? (max((((/* implicit */long long int) arr_5 [i_1] [i_1] [i_0] [i_0])), (-3403962179651448541LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_0])))))));
                /* LoopNest 3 */
                for (long long int i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        for (signed char i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_1])))) ? (min((((((/* implicit */_Bool) 14052816260436309146ULL)) ? (((/* implicit */int) (unsigned short)57600)) : (((/* implicit */int) arr_2 [11] [i_1])))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)-15810)), ((unsigned short)7947)))))) : (((/* implicit */int) arr_39 [i_1] [(unsigned short)12] [i_14] [i_15]))));
                                var_36 ^= ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) arr_41 [i_13] [i_1] [i_14] [i_15])))));
                                var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) max((((((/* implicit */_Bool) -3403962179651448523LL)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_13] [i_14] [i_15])) : (((/* implicit */int) arr_19 [i_1] [i_15] [i_13] [i_14] [i_15])))), (((((/* implicit */_Bool) arr_19 [i_14] [i_1] [i_1] [i_1] [i_15])) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_15])) : (((/* implicit */int) (short)(-32767 - 1))))))))));
                            }
                        } 
                    } 
                } 
                var_38 = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3411193984804612782LL)) ? (-3403962179651448545LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-26975)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (3403962179651448523LL)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_16 = 2; i_16 < 22; i_16 += 1) 
    {
        for (unsigned int i_17 = 0; i_17 < 23; i_17 += 4) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 4) 
            {
                {
                    arr_59 [i_16] [i_16] = ((/* implicit */unsigned short) (-(max((25ULL), (arr_52 [i_16 + 1] [i_16 - 2])))));
                    var_39 += ((/* implicit */int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)96))))))) ? (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (short)1805)), (710529390U)))))) : (min((arr_56 [i_16 + 1] [i_17]), (((/* implicit */unsigned long long int) (unsigned short)736))))));
                    var_40 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_16] [i_17] [i_17])) ? (((/* implicit */int) arr_50 [i_16])) : (((/* implicit */int) (signed char)-64))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)1805)), (arr_53 [i_16] [i_18])))) : (min((arr_56 [17U] [i_16]), (((/* implicit */unsigned long long int) (unsigned short)7926)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_58 [i_16] [i_16 + 1] [i_17] [i_18])), (max(((unsigned short)40499), (((/* implicit */unsigned short) (short)25056)))))))));
                    var_41 = ((/* implicit */long long int) (signed char)11);
                }
            } 
        } 
    } 
}
