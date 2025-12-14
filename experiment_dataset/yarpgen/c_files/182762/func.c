/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182762
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
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((long long int) (signed char)-105))), (var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) ((signed char) (short)-256));
        var_16 = ((short) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
    }
    var_17 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
    var_18 ^= ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((signed char) var_8));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 3; i_3 < 17; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)108)))))));
                            var_20 = ((/* implicit */unsigned char) arr_7 [i_2] [i_1]);
                            arr_15 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned short) arr_14 [i_1] [(_Bool)1] [i_2] [i_1] [9U]));
                        }
                        arr_16 [i_2] [i_1] = ((/* implicit */unsigned int) ((unsigned short) arr_5 [i_1]));
                    }
                } 
            } 
            var_21 = ((/* implicit */short) arr_3 [i_1]);
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((long long int) arr_8 [i_1] [i_1] [i_7]));
                        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                        var_24 = ((arr_18 [0U] [i_1 + 1] [i_1 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_6]))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned int) var_5);
            arr_23 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2 + 2]))));
        }
        for (signed char i_8 = 2; i_8 < 17; i_8 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) min((((/* implicit */int) var_3)), ((~(((/* implicit */int) ((short) var_2)))))));
            var_27 += ((/* implicit */unsigned int) var_6);
            arr_26 [i_1] [i_8] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) arr_11 [i_1 - 2] [i_1 - 3])))));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((long long int) min(((-(arr_32 [i_1] [i_8] [i_9] [i_10] [i_1]))), (((long long int) var_5)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 3; i_11 < 15; i_11 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_7 [i_1 - 2] [i_10]))));
                            var_30 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32764)) || (((/* implicit */_Bool) var_4)))))) >= ((-(arr_25 [i_1 - 2]))))))));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((_Bool) arr_17 [i_10]))));
                            var_32 = ((/* implicit */signed char) ((long long int) (short)-32747));
                        }
                        for (long long int i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
                        {
                            var_33 *= ((/* implicit */short) min(((unsigned short)65524), (((/* implicit */unsigned short) min(((short)32756), ((short)-32751))))));
                            arr_39 [i_1] [i_8] [i_8 - 1] [i_9] [i_8] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_38 [i_12] [i_8] [i_9] [i_8])))));
                            var_34 = ((/* implicit */_Bool) ((short) (-(arr_1 [i_1 - 1] [i_1 + 1]))));
                            var_35 ^= ((/* implicit */_Bool) (+(((long long int) arr_5 [i_10]))));
                        }
                        /* vectorizable */
                        for (long long int i_13 = 0; i_13 < 18; i_13 += 3) /* same iter space */
                        {
                            var_36 += arr_28 [i_1 - 1];
                            var_37 = ((/* implicit */short) arr_28 [i_1 - 3]);
                            arr_43 [i_10] [i_13] [i_1] [i_1] [i_13] [i_10] [10ULL] = ((/* implicit */unsigned short) ((unsigned long long int) arr_13 [i_1 - 2] [i_1 - 1] [i_1] [i_8 + 1] [i_8 - 1]));
                            arr_44 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_12))));
                            var_38 ^= ((/* implicit */unsigned int) (+(arr_21 [i_8 - 1] [i_1 + 1])));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            arr_48 [i_14] [i_1] [i_1] = ((/* implicit */_Bool) (+(var_7)));
            arr_49 [i_1] = (_Bool)1;
            var_39 = ((/* implicit */unsigned int) ((long long int) (_Bool)1));
        }
        for (short i_15 = 3; i_15 < 17; i_15 += 1) 
        {
            var_40 = ((/* implicit */signed char) arr_1 [i_1] [i_15]);
            var_41 = ((/* implicit */unsigned short) ((unsigned char) ((signed char) 17LL)));
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 18; i_16 += 2) 
            {
                for (long long int i_17 = 0; i_17 < 18; i_17 += 2) 
                {
                    {
                        var_42 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_34 [i_1] [i_15] [i_15] [i_17] [i_1]))));
                        var_43 ^= ((/* implicit */signed char) min((arr_33 [i_15] [i_15]), (min((arr_54 [i_1] [i_15 - 2]), ((short)-32759)))));
                        var_44 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_38 [i_1] [i_1] [i_15 - 1] [0LL]), (arr_38 [i_1] [i_15] [i_15 + 1] [(short)1]))))));
                    }
                } 
            } 
            var_45 += min((min((var_7), (((/* implicit */unsigned int) ((unsigned short) var_6))))), (((/* implicit */unsigned int) arr_51 [i_1] [i_15])));
        }
        var_46 ^= ((/* implicit */long long int) ((signed char) var_0));
        /* LoopSeq 4 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_60 [i_1] [i_18] [2ULL] |= ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_37 [i_1 - 1] [12U] [i_1 - 2] [i_1] [i_1 - 2]), (arr_37 [i_1] [(signed char)4] [i_1 + 1] [(signed char)4] [i_1 - 1]))))));
            var_47 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_8)))), (min((arr_58 [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_33 [i_18] [i_1]))))))));
            var_48 = ((/* implicit */long long int) (unsigned short)65535);
            var_49 = ((/* implicit */short) ((unsigned char) var_8));
        }
        for (unsigned int i_19 = 0; i_19 < 18; i_19 += 2) /* same iter space */
        {
            var_50 = ((/* implicit */unsigned char) min((((arr_25 [i_1 - 2]) % (arr_25 [i_1 - 2]))), (min((((/* implicit */long long int) var_2)), (arr_25 [i_1 + 1])))));
            var_51 = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_19] [i_19] [i_19] [i_19] [i_19])) != ((+(((/* implicit */int) (short)-19))))));
        }
        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 2) /* same iter space */
        {
            var_52 = ((/* implicit */long long int) max((var_52), (((long long int) arr_29 [i_1] [i_20]))));
            var_53 = ((/* implicit */signed char) ((long long int) ((unsigned char) (signed char)-115)));
        }
        /* vectorizable */
        for (unsigned int i_21 = 0; i_21 < 18; i_21 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_22 = 0; i_22 < 18; i_22 += 1) 
            {
                for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 3) 
                {
                    for (signed char i_24 = 0; i_24 < 18; i_24 += 1) 
                    {
                        {
                            var_54 = ((/* implicit */unsigned short) ((_Bool) arr_58 [i_1 - 3] [i_1] [i_1 - 3]));
                            var_55 = ((/* implicit */unsigned short) arr_31 [i_24] [i_24] [i_24]);
                            arr_76 [i_1] [i_1] [i_1] [10LL] [(unsigned short)9] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)32762))));
                            var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) (~(((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
            } 
            var_57 = ((/* implicit */signed char) ((short) (-(((/* implicit */int) var_6)))));
        }
    }
}
