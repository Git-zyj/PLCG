/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135824
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((signed char) (signed char)44));
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-27))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)28)) != (((/* implicit */int) (short)-1))))) : (((/* implicit */int) (signed char)-96))));
                    }
                } 
            } 
            var_20 = ((/* implicit */short) arr_4 [i_0] [i_0]);
            var_21 = ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)-7)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) : (((unsigned long long int) -7492433699807728289LL)));
        }
        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-7))))) ? (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) 14670009253794657119ULL)) && (((/* implicit */_Bool) (short)0)))))));
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)6981)) == (((/* implicit */int) (signed char)-29))));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) arr_14 [i_4] [i_0])))))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 1; i_7 < 24; i_7 += 3) 
                        {
                            var_24 += ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_4])) > (((/* implicit */int) var_17))))) > ((-(((/* implicit */int) (signed char)-99)))));
                            var_25 += ((/* implicit */unsigned char) var_13);
                            arr_23 [i_4] [i_5] [i_4] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) + (((/* implicit */int) (signed char)7))))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_12))));
                        }
                        for (long long int i_8 = 4; i_8 < 23; i_8 += 2) 
                        {
                            arr_27 [i_4] = ((unsigned long long int) (short)-12);
                            arr_28 [i_4] [i_4] [i_5] [i_8 - 2] [i_8] [i_0] = ((signed char) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            var_26 += ((/* implicit */unsigned char) ((((unsigned long long int) (signed char)-84)) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_4])) != (((/* implicit */int) arr_25 [i_9] [i_0] [i_5] [i_0] [i_0]))))))));
                            var_27 = ((/* implicit */long long int) arr_2 [i_4] [i_4] [i_6]);
                            arr_32 [i_9] [i_6] [i_4] [i_5 + 4] [i_4] [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0] [i_0]);
                            arr_33 [i_0] [i_0] [i_4] [i_5] [i_6] [i_4] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)28))) : (7774979612645167430LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6] [i_0])))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            var_28 = ((/* implicit */short) 9287956561501702113ULL);
                            arr_37 [i_4] [i_4] [i_4] [i_6] [i_10] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)28)) & (((/* implicit */int) (signed char)32)))) | (((((/* implicit */int) (short)-1)) | (((/* implicit */int) (short)-1))))));
                            var_29 += ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) (short)11)));
                        }
                        for (short i_11 = 3; i_11 < 22; i_11 += 3) 
                        {
                            var_30 += ((/* implicit */unsigned short) ((short) ((short) -8719959675684431099LL)));
                            arr_41 [i_0] [i_4] [i_5 + 3] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)20)) >= (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_6])))) ? (((((/* implicit */_Bool) 2458934781255874918ULL)) ? (((/* implicit */int) arr_0 [i_11])) : (((/* implicit */int) (signed char)28)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        }
                        for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
                            var_32 += ((/* implicit */unsigned char) ((short) (signed char)-20));
                        }
                    }
                } 
            } 
            arr_46 [i_0] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)126))));
            var_33 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (unsigned short)65535))) << (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)-20)))) - (16)))));
        }
        var_34 += ((/* implicit */unsigned short) (short)-1);
        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((unsigned long long int) (signed char)-32)))));
    }
    var_36 = ((/* implicit */unsigned char) min((min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-86)))), (((((/* implicit */_Bool) 5613418113350754059ULL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22))) : (4618091068660769689ULL)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) == (-299072567799713011LL)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)31)), (var_17)))))))));
}
