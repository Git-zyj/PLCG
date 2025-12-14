/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153387
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_6))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) max((255), (((/* implicit */int) arr_1 [4LL] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -1LL)))) || ((!(arr_0 [i_0])))));
    }
    for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        var_20 += (+(-1LL));
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 21LL))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned short)4] [i_1 + 2])))))));
        var_22 = ((/* implicit */_Bool) min((var_22), ((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1 + 4] [i_1 - 1])))))))));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [11] [i_2])) / ((-(((/* implicit */int) min((arr_1 [i_2] [(unsigned short)5]), (((/* implicit */signed char) arr_0 [i_2])))))))));
        var_24 *= ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_2] [i_2]))))), (((-47LL) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 22; i_4 += 4) 
            {
                {
                    var_25 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) max((min((4LL), (((/* implicit */long long int) (signed char)-75)))), (((/* implicit */long long int) arr_0 [i_4 - 1]))))) : (max((max((arr_2 [18LL] [9]), (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) (-(-22LL)))))));
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (~((~(arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1]))))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 17; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) (+(((22LL) * (((/* implicit */long long int) arr_21 [i_6 - 1] [i_6] [i_5]))))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) 0LL))));
                            var_29 ^= ((/* implicit */unsigned short) arr_1 [i_5] [i_5]);
                            var_30 = ((/* implicit */short) var_8);
                            arr_29 [6U] [13U] [i_7] [i_7] [i_7] [i_9] [i_9] = ((/* implicit */short) (unsigned short)0);
                            var_31 = ((/* implicit */unsigned short) var_7);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            var_32 &= ((/* implicit */short) 19LL);
                            arr_32 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [i_6 - 1]) / (arr_10 [i_6 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */unsigned long long int) arr_10 [i_6 - 2])) | (arr_2 [i_6 + 1] [18ULL])))));
                            var_33 = ((/* implicit */short) (-(max((min((-22LL), (-22LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [(unsigned short)7])))))))));
                        }
                        var_34 = ((/* implicit */unsigned int) arr_8 [i_5] [i_6]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 4; i_11 < 15; i_11 += 2) 
                        {
                            var_35 = arr_13 [i_5] [3U] [i_5];
                            var_36 = ((/* implicit */signed char) var_10);
                        }
                        for (unsigned long long int i_12 = 4; i_12 < 15; i_12 += 1) 
                        {
                            arr_38 [9U] [i_6] [i_6] [i_6] [11LL] &= ((/* implicit */_Bool) max((((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_16 [i_5])))) && (((/* implicit */_Bool) var_16))))), (var_7)));
                            arr_39 [(signed char)6] [i_6 + 2] [i_7] [13LL] [i_12] = ((/* implicit */_Bool) ((((arr_27 [i_5] [(unsigned char)12] [i_7]) & (arr_36 [i_6 - 2] [i_12 - 2] [i_7] [i_8] [i_7] [15LL] [i_12 - 3]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((arr_8 [i_5] [i_6 + 2]) - (2993729549186149212ULL))))))))))));
                            var_37 = ((/* implicit */int) arr_8 [i_5] [i_5]);
                            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (((~(((/* implicit */int) arr_22 [i_6 - 1])))) - ((-(((/* implicit */int) arr_22 [i_6 + 1])))))))));
                        }
                        arr_40 [i_5] [(unsigned char)9] [9] [i_5] [i_5] [i_5] = ((/* implicit */short) (+(((((/* implicit */int) var_16)) - (((/* implicit */int) arr_24 [i_6 + 1] [i_6 + 2] [i_6 + 2]))))));
                    }
                    arr_41 [i_6] [i_6] [i_6] [i_6 - 2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_37 [i_6 - 2] [i_6] [i_7] [i_6 - 2] [i_6 - 2] [i_7]) % (arr_37 [i_6 - 2] [(unsigned char)8] [(unsigned short)11] [i_6 - 2] [i_6] [(short)13])))), (min((arr_12 [(signed char)13] [i_6 + 1]), (arr_12 [1LL] [i_6 - 1])))));
                    var_39 = ((/* implicit */unsigned char) max((21LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 3932160ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_26 [i_6 - 2] [i_6] [i_6] [i_6 - 2] [i_6 + 1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            for (unsigned char i_14 = 1; i_14 < 18; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    {
                        var_40 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_7))))))), (max((arr_28 [i_15] [i_14 - 1] [i_5] [i_5] [(unsigned char)16] [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_46 [7ULL] [i_5] [i_5]))))));
                        var_41 = ((/* implicit */long long int) max((var_41), (((((/* implicit */_Bool) max((arr_36 [i_13] [(_Bool)0] [i_13] [i_14 - 1] [i_14] [(_Bool)0] [i_14 - 1]), (((/* implicit */unsigned long long int) arr_7 [i_14 + 1] [(short)10]))))) ? (max((arr_18 [i_5] [i_5] [14LL]), (((/* implicit */long long int) arr_16 [i_15])))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))))));
                        var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) arr_18 [(_Bool)1] [i_13] [i_13]))));
                    }
                } 
            } 
        } 
        var_43 ^= max((-44LL), (((/* implicit */long long int) var_15)));
        var_44 = ((/* implicit */unsigned long long int) max((var_44), (max((max((arr_2 [i_5] [(unsigned short)6]), (((/* implicit */unsigned long long int) arr_16 [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_5)) <= (arr_8 [i_5] [i_5]))))))));
    }
    for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_17 = 3; i_17 < 16; i_17 += 4) 
        {
            for (unsigned short i_18 = 0; i_18 < 17; i_18 += 4) 
            {
                {
                    var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) (-((~(16LL))))))));
                    var_46 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) 0U)) & (arr_28 [(unsigned char)2] [i_18] [1LL] [i_17] [i_17] [i_16] [6ULL]))), ((~(max((var_9), (((/* implicit */unsigned long long int) -1LL))))))));
                }
            } 
        } 
        var_47 += ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-117))));
    }
    var_48 = ((/* implicit */unsigned int) var_1);
}
