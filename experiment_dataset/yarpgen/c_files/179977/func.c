/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179977
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
    var_16 += max((5970184513536717004ULL), (1152921504606846975ULL));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        arr_10 [i_0] = min((((/* implicit */unsigned long long int) 126573620U)), (((unsigned long long int) (-(4168393675U)))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((((((var_14) & (((/* implicit */unsigned long long int) 1048576U)))) << (((min((arr_7 [i_0] [i_0] [i_0] [i_3]), (((/* implicit */unsigned long long int) 4293918720U)))) - (4293918715ULL))))) >> (((min((18446744073709551615ULL), (17947568725160325868ULL))) - (17947568725160325815ULL))));
                        var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [16ULL] [16ULL] [i_2])) / (((/* implicit */int) arr_3 [(unsigned char)22]))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_18 = ((unsigned short) 4168393676U);
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [i_1 + 1] [i_1 + 3] [i_1 - 1] [i_1] [i_1] [i_1]), (arr_9 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 3] [i_1])))) ? (((((/* implicit */int) (unsigned char)159)) / (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [(signed char)6] [i_1 - 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 1] [i_1])) > (((/* implicit */int) arr_9 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1])))))));
                        }
                        arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 499175348549225761ULL))))), ((unsigned short)65535)));
                        var_20 = ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))) : (14794810233066181364ULL));
                        var_21 = (-(21339282967967616ULL));
                    }
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_2])) ? (((((/* implicit */_Bool) var_1)) ? (arr_7 [i_0] [i_0] [i_1] [i_2]) : (8904222936566028584ULL))) : (min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_1 + 3] [i_1 - 1] [i_1 + 3])))))) ? (((unsigned long long int) ((unsigned long long int) arr_5 [(signed char)23] [(signed char)23] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 14539331711455133821ULL))) ? (((/* implicit */int) ((signed char) (signed char)87))) : (((/* implicit */int) (unsigned short)0)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) < (4293918720U))))) : (min((4168393676U), (((/* implicit */unsigned int) (signed char)-74)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_5))))));
        var_24 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((arr_13 [i_0] [i_0]) >> (((arr_13 [i_0] [i_0]) - (17687376383993688876ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((arr_13 [i_0] [i_0]) >> (((((arr_13 [i_0] [i_0]) - (17687376383993688876ULL))) - (3384107302751577229ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
    }
    for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_25 ^= ((/* implicit */unsigned char) var_13);
        arr_21 [2U] [i_6] = ((/* implicit */unsigned char) var_1);
        var_26 = ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_1)), (var_10)))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_6] [i_6])))));
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            var_27 = ((/* implicit */unsigned char) max((arr_6 [i_6] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) ((signed char) arr_6 [i_6] [i_7] [i_7] [i_7])))));
            arr_24 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 7ULL))))), ((~(((/* implicit */int) var_0)))))), (((/* implicit */int) arr_9 [i_6] [i_7] [i_6] [i_7] [i_7] [i_6]))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                for (unsigned char i_9 = 1; i_9 < 17; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            arr_32 [i_6] = ((/* implicit */unsigned short) ((8554514352171193839ULL) < (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_0)))))))));
                            var_28 = ((unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6] [i_6] [i_8]))) < (var_3)))), (((4293918719U) << (((((/* implicit */int) (signed char)125)) - (125)))))));
                            arr_33 [i_6] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (+(((((unsigned int) (signed char)-87)) >> (((17592186044412ULL) - (17592186044406ULL)))))));
                            arr_34 [i_6] [i_7] [i_8] [i_10] [i_10] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (arr_28 [i_10] [2ULL] [i_8] [2ULL] [i_6])))) ? (((/* implicit */unsigned long long int) ((unsigned int) 1958014666318550589ULL))) : (((unsigned long long int) (signed char)(-127 - 1)))))) ? (((unsigned int) (signed char)125)) : (4197142066U)));
                            var_29 = ((signed char) (+(((/* implicit */int) arr_14 [i_10] [i_9 + 1] [i_8] [i_7]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            var_30 = arr_19 [i_6] [i_7];
                            var_31 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_7] [i_7] [i_11])) - ((+(((/* implicit */int) arr_27 [i_8] [i_11]))))));
                            var_32 += (~(9554529376043217534ULL));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            arr_40 [i_6] [i_6] [i_8] [i_9 + 2] [i_6] = ((((/* implicit */unsigned long long int) arr_2 [i_6])) & (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)86))) % (126573619U)))));
                            var_33 = ((/* implicit */unsigned int) (unsigned short)3577);
                        }
                        var_34 = ((/* implicit */unsigned int) var_6);
                        var_35 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned short) ((signed char) 3576193846U)))), (4710509322696386288ULL)));
                        var_36 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_7] [i_7] [i_7]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_13 = 4; i_13 < 17; i_13 += 1) 
        {
            arr_44 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_0);
            arr_45 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 126573620U)) ? (((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)87)), (126573619U)))) : (((unsigned long long int) (signed char)-109)))) : ((+(var_3)))));
        }
        var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (unsigned char)92)))));
    }
}
