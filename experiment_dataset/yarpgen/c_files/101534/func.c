/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101534
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
    var_16 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((arr_0 [i_0]) % (arr_0 [i_0]))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) != ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_19 = var_9;
    }
    for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (var_13)))) - (((/* implicit */int) var_8))))));
        var_20 = ((/* implicit */unsigned char) var_5);
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_7 [(unsigned short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2])) & (((/* implicit */int) arr_2 [i_2] [i_2]))))) || (((/* implicit */_Bool) var_9))));
        arr_8 [i_2] = var_7;
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_2]);
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
    {
        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(((arr_15 [i_3]) | (arr_11 [i_3]))))))));
                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11816))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        arr_19 [i_5 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 1; i_7 < 23; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)8] [4ULL]))))))) & ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_5] [(unsigned char)14] [i_7] [i_7])))))))));
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_20 [(unsigned char)10] [i_6]) >> ((((-(((/* implicit */int) var_0)))) + (228))))))));
                        var_25 = ((/* implicit */unsigned long long int) arr_25 [i_5 + 1] [i_5 + 1] [i_7] [i_5] [i_7]);
                        var_26 = ((/* implicit */unsigned char) (+((+((+(((/* implicit */int) var_4))))))));
                        var_27 = (+(arr_20 [i_6 - 1] [i_7 - 1]));
                    }
                } 
            } 
            arr_29 [i_6] [i_6 - 1] [i_6] = ((/* implicit */unsigned long long int) arr_28 [18ULL]);
        }
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            arr_32 [i_5 - 2] [i_9] [(unsigned char)22] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_3 [i_5 + 2])))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_5 + 1])) && (((/* implicit */_Bool) var_8)))))));
            var_28 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)2949))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 4) 
            {
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    {
                        var_29 *= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_21 [i_11 + 1] [i_11]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            arr_41 [i_12] [(unsigned short)13] [i_12] [i_12] [i_12] [(unsigned char)23] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)54453))));
                            arr_42 [i_13] [i_10] [i_12] [i_12] [i_11] [i_10] [i_5] = ((/* implicit */unsigned long long int) arr_2 [16ULL] [i_10]);
                            arr_43 [i_5] [i_5] [i_12] [i_10] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_13))))));
                            var_30 = var_11;
                        }
                        for (unsigned short i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned short) var_8);
                            var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_10] [i_10] [i_12] [i_12])))))));
                            var_33 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_25 [i_11 + 1] [i_11] [i_12] [i_11 - 1] [i_11 - 1])))) > (((/* implicit */int) arr_28 [i_12]))));
                        }
                        arr_46 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_12])) ^ (((/* implicit */int) var_5)))))))) & (((/* implicit */int) var_9))));
                        arr_47 [i_12] [i_10] [i_11] = ((/* implicit */unsigned char) var_9);
                        var_34 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) << ((((+(((/* implicit */int) var_0)))) - (165))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 1) 
    {
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(unsigned short)10] [(unsigned short)10] [i_15] [i_15] [10ULL]))))))) ^ ((-(arr_20 [i_15] [i_15])))));
        arr_50 [i_15] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_45 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))));
        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_37 [i_15] [i_15])))))));
    }
    var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
}
