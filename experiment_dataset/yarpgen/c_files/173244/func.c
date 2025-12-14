/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173244
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) 9910443629729854661ULL)))));
        var_16 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (arr_2 [i_0] [i_0])))) << (((((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_0])))) - (71)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (_Bool)1))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)97)) ? (arr_6 [i_1]) : (((/* implicit */int) (short)-1))))))) ? ((~(((((/* implicit */_Bool) -2147483630)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [(unsigned char)3] [i_3])) : (((/* implicit */int) arr_2 [i_2] [i_2])))))) : ((~(((/* implicit */int) arr_7 [i_1]))))));
                        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_3]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)27314)) : (((/* implicit */int) arr_8 [i_2])))))))), ((-(((/* implicit */int) arr_4 [i_0]))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned short) -1LL))), ((~(9910443629729854650ULL))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_0] [i_4])))));
                            arr_14 [i_2] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1424193137) : (((/* implicit */int) arr_9 [13LL] [3] [i_1] [i_3]))));
                            var_22 = ((/* implicit */int) arr_7 [i_1]);
                            var_23 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) 1180490807U)) ? (((/* implicit */int) (unsigned short)12971)) : (((/* implicit */int) (unsigned short)15))))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (-((-(2693257990541720583ULL)))));
                        }
                        for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 11LL))))))))));
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)54242))));
                            arr_18 [i_0] [i_1] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (9910443629729854661ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0] [i_1])), ((unsigned short)56256))))));
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)161))));
            var_27 = ((/* implicit */short) arr_8 [i_0]);
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            var_28 = ((/* implicit */unsigned short) ((arr_13 [i_0] [i_6]) ? (((/* implicit */int) arr_13 [i_0] [i_6])) : (((/* implicit */int) arr_13 [i_6] [i_0]))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 1; i_8 < 24; i_8 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_26 [i_8 + 1]))));
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) -6773863573556284473LL)) ? ((+(((/* implicit */int) (signed char)46)))) : ((+(((/* implicit */int) arr_2 [i_7] [i_0])))))))));
                        /* LoopSeq 3 */
                        for (int i_9 = 3; i_9 < 24; i_9 += 1) 
                        {
                            arr_29 [i_0] [i_9] [8U] [i_8] [i_8 + 1] [i_9] = ((/* implicit */unsigned char) (+(arr_27 [i_9] [(unsigned short)7] [i_9] [i_9] [i_9 - 2] [i_9] [i_9 - 1])));
                            var_31 = ((/* implicit */signed char) (~((-(-441224052636961838LL)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) arr_27 [i_10] [i_10] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_7] [i_7]);
                            var_33 = ((/* implicit */unsigned long long int) arr_9 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]);
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) arr_6 [i_6]))));
                        }
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_8 + 1])) ? (-295690113) : (((/* implicit */int) arr_26 [i_8 - 1]))));
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_7]))));
                            var_36 = ((/* implicit */long long int) (((+(((/* implicit */int) (signed char)(-127 - 1))))) / (arr_35 [i_6] [i_8 + 1] [0] [i_11] [(unsigned short)14])));
                            var_37 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 285818827)) && (((/* implicit */_Bool) 8536300443979696953ULL))));
                        }
                    }
                } 
            } 
            arr_38 [i_6] [i_6] = ((/* implicit */_Bool) (signed char)-1);
        }
    }
    var_38 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_10)) != ((((_Bool)1) ? (var_8) : (((/* implicit */int) var_12))))))), (var_5)));
    var_39 = ((/* implicit */unsigned char) var_4);
}
