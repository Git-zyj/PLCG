/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151072
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
    var_15 *= ((/* implicit */unsigned char) min((var_1), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) var_8))))) ? (min((arr_0 [i_1]), (((/* implicit */long long int) (signed char)-114)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (short)-19991))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */signed char) 1116865919349075225LL);
                    var_18 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)-102)), (((unsigned short) arr_5 [(unsigned char)10] [(unsigned char)10]))));
                    arr_8 [i_1] [i_1] [(signed char)8] [i_2] = ((/* implicit */short) ((unsigned int) ((int) ((((/* implicit */_Bool) (signed char)-105)) ? (4401165020534389008ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */int) (+(arr_5 [i_0] [i_1])));
                        arr_14 [i_1] [(signed char)4] = (+(((/* implicit */int) var_11)));
                    }
                    for (signed char i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) (short)-20005);
                        arr_18 [i_4] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_10 [i_2] [i_0] [i_2] [i_1] [i_0] [i_0]);
                    }
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_20 -= ((/* implicit */short) (((~(7217137401847164032LL))) != (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (unsigned short)33926))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_0] [i_2 + 1] [i_0] [i_6] [i_1] [i_6] [i_2 - 2])) / (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_6] [i_0] [i_1] [i_2 + 1]))));
                            var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -9223372036854775803LL))));
                            var_23 = ((/* implicit */long long int) ((signed char) ((unsigned short) (_Bool)1)));
                        }
                        var_24 = ((signed char) (+(var_6)));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_29 [i_1] [i_1] [i_2] [i_0] = min((((unsigned long long int) min((arr_28 [i_0] [i_2 + 1] [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)-14))))), (((/* implicit */unsigned long long int) (signed char)118)));
                        var_25 = ((/* implicit */unsigned int) (-(min((arr_22 [i_2 + 1] [i_7 - 1] [i_7] [7] [i_7 - 1]), ((~(((/* implicit */int) (short)19982))))))));
                    }
                    var_26 = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)40250)), ((+(var_1))))));
                }
                for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 1) /* same iter space */
                {
                    arr_33 [i_1] = ((/* implicit */unsigned int) ((signed char) (+((-(15920530412982764675ULL))))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_36 [i_1] [i_8] = ((/* implicit */signed char) ((_Bool) ((signed char) (unsigned short)65527)));
                        var_27 = max((5577151882981405809ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (unsigned short)25273)) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            arr_39 [(signed char)7] [i_8] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_0] [i_9] [i_8] [i_9])) ? (((/* implicit */int) max(((short)1792), (((/* implicit */short) arr_34 [i_0] [i_0] [i_0] [(unsigned char)7]))))) : ((+(((/* implicit */int) arr_34 [i_0] [i_1] [i_8 + 2] [i_1]))))));
                            arr_40 [i_1] [i_1] [i_8 - 2] [i_9] [10LL] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((/* implicit */int) ((unsigned char) arr_10 [i_8 - 2] [i_8] [i_8] [i_8] [i_8] [i_8 + 2])))));
                            arr_41 [3ULL] [i_1] [(unsigned short)4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)111), (arr_16 [i_0] [i_0] [i_0] [i_0]))))) > (-9223372036854775783LL))))));
                            arr_42 [i_1] [i_1] [i_1] [i_9] [i_10] = 1159255110;
                            arr_43 [i_10] [i_1] [i_0] [i_9] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) / ((+(72055395014672384ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            var_28 = ((/* implicit */short) (signed char)123);
                            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) arr_32 [i_0] [i_0] [i_0] [(signed char)0])))))));
                            var_30 = min((1275274651), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25295))))));
                            arr_47 [i_1] [i_1] [i_8] [i_9] [i_11] = ((/* implicit */short) ((((/* implicit */int) var_0)) != ((~(((/* implicit */int) arr_46 [i_0] [i_1] [i_8]))))));
                        }
                    }
                    arr_48 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((arr_27 [i_1]), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) min((arr_2 [i_0] [i_1]), (((/* implicit */short) arr_15 [i_1] [i_1]))))) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    arr_51 [i_1] = ((/* implicit */unsigned long long int) var_11);
                    var_31 = ((/* implicit */unsigned short) ((((int) ((((/* implicit */_Bool) (signed char)-30)) && (((/* implicit */_Bool) 61470961))))) + ((+(((((/* implicit */int) var_0)) / (((/* implicit */int) (signed char)121))))))));
                    var_32 = ((/* implicit */int) var_0);
                    var_33 = ((/* implicit */short) arr_45 [(signed char)10] [i_0] [i_1] [(signed char)10] [i_1] [i_12]);
                }
                var_34 = arr_28 [i_1] [i_1] [i_0] [i_0];
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned char) var_12);
}
