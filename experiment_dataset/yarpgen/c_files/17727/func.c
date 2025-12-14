/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17727
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
    var_17 = ((/* implicit */long long int) 17989320318352508631ULL);
    var_18 = var_0;
    var_19 = ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_1 [i_0 - 1]))));
        var_21 = ((/* implicit */short) (_Bool)0);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_5 [i_0 - 2] = ((/* implicit */signed char) arr_2 [i_1] [i_0 - 1]);
            var_22 = ((/* implicit */short) ((3301868341990222056LL) << (((/* implicit */int) (_Bool)1))));
            arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)23721)) && (((/* implicit */_Bool) -2147483636))));
        }
    }
    for (signed char i_2 = 2; i_2 < 14; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
            {
                {
                    var_23 *= ((/* implicit */signed char) arr_8 [i_2 - 2]);
                    arr_18 [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) arr_17 [i_2 - 2] [i_4] [i_4 - 1]);
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) 18014396361998336LL);
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 14; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    {
                        var_25 = ((/* implicit */int) (short)25573);
                        arr_26 [(unsigned char)10] [(unsigned char)13] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_7] [i_6])) * (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) != (((/* implicit */int) arr_21 [i_5] [i_5 + 1])))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_8 = 2; i_8 < 14; i_8 += 4) /* same iter space */
    {
        arr_29 [i_8] = ((/* implicit */short) ((((457423755357042991ULL) << (((/* implicit */int) (_Bool)1)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8 + 1])))));
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            for (signed char i_10 = 3; i_10 < 14; i_10 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 2) 
                        {
                            arr_38 [i_8] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_39 [i_12] [(_Bool)1] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_8 - 2] [i_9] [i_8 - 2])) & (var_11)));
                            arr_40 [12LL] [(unsigned char)11] [i_11] [(short)3] [i_12] [(unsigned char)11] [3LL] = ((/* implicit */short) ((((/* implicit */int) var_3)) == (((/* implicit */int) (_Bool)1))));
                        }
                        var_26 = ((/* implicit */_Bool) var_11);
                        var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-68)) & (((/* implicit */int) (unsigned char)9))))) && (((/* implicit */_Bool) ((arr_30 [i_8 - 2] [i_11]) % (arr_30 [i_10 - 1] [i_11]))))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_8] [i_9])) || (((((/* implicit */_Bool) arr_2 [i_8 - 2] [i_8 - 1])) && (((/* implicit */_Bool) arr_2 [i_10] [i_8 - 1]))))));
                        var_29 = ((/* implicit */signed char) (_Bool)1);
                    }
                    for (signed char i_13 = 1; i_13 < 14; i_13 += 2) 
                    {
                        arr_44 [i_8] [i_8 + 1] [i_9] [i_10] [i_13] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) == (((/* implicit */int) (signed char)110))));
                        var_30 += ((/* implicit */signed char) (_Bool)1);
                    }
                    for (long long int i_14 = 1; i_14 < 15; i_14 += 3) 
                    {
                        var_31 = ((/* implicit */signed char) (short)(-32767 - 1));
                        /* LoopSeq 2 */
                        for (short i_15 = 0; i_15 < 16; i_15 += 1) 
                        {
                            arr_51 [i_10] [i_14] [i_10] [i_14] [i_8] = ((/* implicit */short) arr_16 [(short)11] [i_15] [i_15]);
                            arr_52 [(unsigned short)6] [i_9] [(unsigned short)6] [i_10 + 2] [i_14] [i_15] [(unsigned short)6] = var_13;
                        }
                        for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned int) arr_41 [i_8]);
                            var_33 += ((/* implicit */unsigned char) arr_46 [i_8] [i_9] [i_10] [i_14 + 1] [i_16]);
                        }
                    }
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        arr_59 [i_8] [(short)12] [i_10 - 1] [i_17] = ((/* implicit */unsigned long long int) (_Bool)1);
                        /* LoopSeq 1 */
                        for (short i_18 = 2; i_18 < 15; i_18 += 3) 
                        {
                            arr_63 [i_17] [i_10 + 2] [i_10 + 1] [i_17] [i_17] = ((/* implicit */unsigned char) arr_31 [i_8] [i_10] [(short)2]);
                            var_34 = ((/* implicit */short) var_8);
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) var_7))));
                        }
                    }
                    arr_64 [i_9] = ((/* implicit */signed char) var_10);
                    var_36 = ((/* implicit */signed char) arr_25 [i_8] [i_8 + 2] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_10 - 2]);
                    var_37 *= ((/* implicit */signed char) var_3);
                    arr_65 [i_8] [(short)12] [i_10] = var_6;
                }
            } 
        } 
        var_38 *= ((/* implicit */short) arr_9 [i_8]);
    }
}
