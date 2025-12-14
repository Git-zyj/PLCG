/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180267
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((max((-2006939364988003415LL), (((/* implicit */long long int) arr_1 [i_2])))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) -2006939364988003415LL))))))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 3280704282899174472ULL)) ? (arr_0 [i_2]) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 2006939364988003414LL)) != (arr_2 [i_0])))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        arr_14 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) != (var_8))) ? (arr_0 [i_1]) : ((+(arr_0 [i_0])))));
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max(((((+(((/* implicit */int) (unsigned short)63)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 201646511701502609ULL))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((-2006939364988003416LL), (((/* implicit */long long int) arr_6 [i_0])))))))))))));
                            var_20 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) -2006939364988003415LL)) == (min((((/* implicit */unsigned long long int) var_6)), (arr_2 [i_0]))))) ? ((-(((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (17972399075065956643ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)8070)) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) var_5)))))))));
                            var_21 *= (((-(arr_7 [i_0] [i_0] [i_5] [i_0]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))));
                            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_5 [i_0])) != (((/* implicit */int) ((((/* implicit */unsigned long long int) -2006939364988003415LL)) < (17972399075065956643ULL)))))) ? (((-2006939364988003415LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57465))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((_Bool) 2006939364988003414LL))))))));
                        }
                        for (int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            arr_20 [i_2] [i_2] [i_0] [i_2] [i_2] &= ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) && (((/* implicit */_Bool) 242010762U)))))));
                            var_23 += ((/* implicit */unsigned short) 2006939364988003415LL);
                        }
                        for (int i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2726862921726581078LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((arr_21 [i_0] [i_0] [i_2] [i_0] [i_7] [i_0]), (arr_21 [i_0] [i_0] [i_0] [i_2] [i_4] [i_2])))) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_4] [i_7] [i_1])))))));
                            var_25 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)108)) >> (((((/* implicit */int) (unsigned short)8070)) - (8047)))))) == (max((arr_7 [i_7] [i_7] [i_1] [i_7]), (((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_1] [i_4] [i_1])))))) ? (max((arr_8 [i_1] [i_1] [i_1] [i_1]), (arr_8 [i_0] [i_0] [i_4] [i_7]))) : (((((/* implicit */_Bool) 2726862921726581078LL)) ? (((/* implicit */long long int) ((arr_7 [i_1] [i_2] [i_1] [i_7]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8071)))))) : (2006939364988003402LL)))));
                        }
                        var_26 &= ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)65532)))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -2006939364988003415LL))))))) ? (((((/* implicit */_Bool) max(((unsigned char)189), (arr_13 [i_2] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_8 [i_0] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_4])) / (((/* implicit */int) (unsigned short)53766))))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) > (arr_8 [i_0] [i_0] [i_2] [i_0]))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53766))) : (arr_8 [i_0] [i_1] [i_2] [i_4])))));
                    }
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((arr_8 [i_0] [i_1] [i_2] [i_8]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))))) < (((/* implicit */long long int) ((int) arr_5 [i_0])))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8] [i_8] [i_1] [i_8])) ? (((((/* implicit */_Bool) (unsigned short)17388)) ? (2006939364988003415LL) : (((/* implicit */long long int) arr_25 [i_8] [i_8] [i_8] [i_8])))) : (((((/* implicit */_Bool) (unsigned short)53787)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) : (2726862921726581078LL)))))) ? (17846091586301186250ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53779))) : (arr_22 [i_0] [i_1] [i_2] [i_8])))) && (((/* implicit */_Bool) (+(arr_25 [i_0] [i_0] [i_0] [i_0]))))))))));
                    }
                    arr_27 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) ((arr_2 [i_0]) == (((/* implicit */unsigned long long int) arr_19 [i_1] [i_1] [i_1] [i_1]))))), ((unsigned short)57464))))));
                    var_29 = (unsigned char)253;
                }
            } 
        } 
    } 
    var_30 |= ((/* implicit */_Bool) ((unsigned short) var_7));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_9 = 1; i_9 < 21; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            for (unsigned char i_11 = 4; i_11 < 20; i_11 += 4) 
            {
                {
                    arr_37 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */long long int) var_5)) : (2006939364988003416LL)))) && (((/* implicit */_Bool) ((signed char) 2006939364988003416LL)))));
                    var_31 = ((/* implicit */signed char) (unsigned short)57472);
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_11] [i_11] [i_11 + 3] [i_9 + 2])) <= (((/* implicit */int) arr_36 [i_9] [i_9] [i_11 + 1] [i_9 + 1])))))));
                }
            } 
        } 
        arr_38 [i_9] &= ((/* implicit */unsigned long long int) ((int) arr_35 [i_9] [i_9 + 2] [i_9] [i_9 + 3]));
        arr_39 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (arr_35 [i_9] [i_9] [i_9] [i_9]) : (arr_35 [i_9 + 1] [i_9] [i_9] [i_9 + 1])));
        arr_40 [i_9] = ((/* implicit */unsigned short) arr_29 [i_9 + 3]);
    }
    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        var_33 = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_29 [i_12]))))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_12] [i_12] [i_12]))) : (var_7))))))));
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_33 [i_12] [i_12] [i_12])), (((((/* implicit */int) (unsigned short)11769)) ^ (((/* implicit */int) (unsigned short)2016))))))) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_33 [i_12] [i_12] [i_12]), (arr_33 [i_12] [i_12] [i_12]))))))))));
    }
    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 4) 
    {
        arr_45 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_13]))))) & (((((/* implicit */_Bool) (unsigned short)4080)) ? (-2006939364988003416LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_13])))))));
        arr_46 [i_13] = ((/* implicit */_Bool) (unsigned short)57472);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
    {
        for (unsigned long long int i_15 = 3; i_15 < 18; i_15 += 1) 
        {
            {
                var_35 = ((/* implicit */unsigned short) (-(max((arr_34 [i_15] [i_15] [i_15 + 1] [i_15]), (((/* implicit */unsigned long long int) var_7))))));
                arr_51 [i_14] [i_14] = ((/* implicit */unsigned int) -7390193679833563316LL);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_36 = ((/* implicit */short) ((var_13) == (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        arr_54 [i_16] [i_16] = ((/* implicit */unsigned long long int) arr_25 [i_16] [i_16] [i_16] [i_16]);
    }
}
