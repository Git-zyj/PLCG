/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10961
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
    var_14 = ((/* implicit */_Bool) ((unsigned long long int) (+((+(((/* implicit */int) var_9)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) 10610262975673805069ULL)))));
        var_16 = ((/* implicit */unsigned short) arr_1 [5U]);
        var_17 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_1] [i_1]))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_5 [i_1] [i_2]))))));
                        var_20 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_11 [i_1] [i_2] [i_2] [i_3])) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1] [i_3] [i_4])) * (((/* implicit */int) arr_5 [i_1] [i_1])))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [(unsigned char)10] [i_2] [(unsigned char)10]))) * (arr_10 [i_1] [i_1])))));
            var_22 = ((/* implicit */unsigned short) arr_3 [i_2]);
            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_4 [i_1] [i_1])))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned short)49378))))) != ((-(arr_14 [(unsigned char)0] [i_5] [i_1] [i_1])))));
            var_25 = arr_18 [i_5] [i_1] [i_1];
            var_26 = ((/* implicit */int) max((var_26), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (signed char i_7 = 3; i_7 < 11; i_7 += 2) 
                {
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5] [5LL] [i_5] [(_Bool)1]))))) >= (((/* implicit */int) ((_Bool) (unsigned short)49378)))));
                        var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_7])) < (arr_3 [i_1]))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_29 = ((/* implicit */signed char) arr_33 [i_1]);
                        var_30 = ((/* implicit */unsigned int) ((unsigned char) arr_16 [i_10]));
                        arr_34 [i_10] [(unsigned short)9] [i_9] [i_9] [10U] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1] [i_9] [i_10]))));
                    }
                } 
            } 
            var_31 ^= ((/* implicit */_Bool) ((unsigned char) ((long long int) arr_10 [i_1] [i_1])));
            arr_35 [i_8] = ((/* implicit */unsigned long long int) arr_15 [i_8]);
            var_32 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_12 [i_1] [i_1] [i_8] [i_8]))))));
        }
        var_33 = ((/* implicit */unsigned long long int) ((((arr_20 [i_1] [i_1]) >> (((arr_28 [i_1] [i_1] [i_1] [i_1]) + (457734312))))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_1] [(unsigned char)10]))))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_12 = 1; i_12 < 22; i_12 += 1) 
        {
            var_34 = ((/* implicit */unsigned long long int) arr_38 [i_11] [i_12]);
            var_35 = ((unsigned char) arr_39 [i_11]);
            arr_42 [i_12] [i_12 + 1] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)34457));
            var_36 = ((/* implicit */long long int) arr_36 [i_12]);
            var_37 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_41 [23ULL] [i_11] [i_11])))));
        }
        for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            var_38 = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) arr_36 [(_Bool)1])))));
            var_39 = ((/* implicit */unsigned int) ((unsigned long long int) arr_41 [16] [i_11] [i_11]));
        }
        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_40 = ((/* implicit */unsigned int) arr_43 [i_15]);
                        var_41 = ((/* implicit */short) ((unsigned long long int) (unsigned char)255));
                        var_42 = ((/* implicit */signed char) arr_39 [i_14]);
                    }
                } 
            } 
            arr_52 [10] = arr_40 [i_11] [i_11] [i_11];
        }
        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((_Bool) arr_50 [i_11] [i_11])))));
    }
}
