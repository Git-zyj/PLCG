/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185986
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) (_Bool)1);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))), (min((var_1), (((/* implicit */long long int) arr_3 [i_2] [i_2 - 1] [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)254))));
                                arr_14 [4LL] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_2 [i_2 - 1])))), ((+(((/* implicit */int) (unsigned short)954))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) arr_11 [i_2] [i_2] [8U] [(unsigned short)9] [i_0] [0U] [i_0]);
                }
            } 
        } 
        var_22 -= ((/* implicit */unsigned short) arr_10 [i_0] [(unsigned short)6] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_5 = 4; i_5 < 18; i_5 += 1) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */int) var_3)) * ((+(((/* implicit */int) (unsigned short)29192))))));
        arr_18 [(short)10] [i_5] = ((/* implicit */unsigned short) var_8);
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (short i_7 = 1; i_7 < 17; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_26 [i_5] [(unsigned char)14] [i_7] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-76)) & (((/* implicit */int) (signed char)-47))));
                        var_24 = ((((/* implicit */int) (unsigned char)0)) > (((((/* implicit */_Bool) (short)2766)) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) (_Bool)1)))));
                        var_25 = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? ((-(18014398505287680LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)28160)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                for (short i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (+(((/* implicit */int) (short)19824)))))));
                        var_27 = (!(((/* implicit */_Bool) ((signed char) arr_23 [(signed char)4] [(_Bool)1] [(unsigned short)3]))));
                        /* LoopSeq 4 */
                        for (short i_11 = 1; i_11 < 18; i_11 += 1) /* same iter space */
                        {
                            var_28 = var_9;
                            arr_34 [i_10] = ((/* implicit */unsigned short) var_14);
                        }
                        for (short i_12 = 1; i_12 < 18; i_12 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) arr_20 [i_6] [i_5]);
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) 6697873522545411087ULL)) ? (18014398505287693LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-11670)))));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5])) ? ((-(((/* implicit */int) arr_21 [(_Bool)1] [i_6] [i_9])))) : ((-(((/* implicit */int) (unsigned char)1)))))))));
                            var_32 = ((/* implicit */unsigned char) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))) : (((arr_33 [i_5] [(short)8] [i_10] [i_5] [(_Bool)1] [i_10] [i_5 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned char i_13 = 1; i_13 < 18; i_13 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */long long int) (-(((((/* implicit */int) (short)-16098)) | (((/* implicit */int) var_17))))));
                            var_34 &= ((/* implicit */unsigned char) (+(((unsigned long long int) var_1))));
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (-(((((/* implicit */int) arr_19 [(unsigned char)0])) ^ (((/* implicit */int) arr_24 [i_13] [(_Bool)1] [i_9] [(unsigned short)7] [i_5] [i_5 + 1])))))))));
                        }
                        for (unsigned char i_14 = 1; i_14 < 18; i_14 += 3) /* same iter space */
                        {
                            var_36 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_37 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_21 [8ULL] [i_14] [i_10])) && (((/* implicit */_Bool) arr_36 [i_5] [i_5 - 1] [4U]))))));
                            arr_44 [i_14] [i_10] [i_9] [i_5 - 3] [i_10] [i_5 - 3] = ((/* implicit */unsigned int) arr_21 [i_14] [(short)13] [i_6]);
                            var_38 = ((/* implicit */unsigned short) (~(((((((/* implicit */int) arr_30 [i_5] [i_5] [i_5])) + (2147483647))) << (((((/* implicit */int) arr_27 [i_5] [(_Bool)1] [i_5])) - (181)))))));
                            var_39 += ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (short)2781)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)253)))));
                        }
                        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (unsigned short)32424))));
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_5 - 4] [i_5 - 4])) ^ (((/* implicit */int) (short)2766))));
                    }
                } 
            } 
        }
        for (short i_15 = 1; i_15 < 16; i_15 += 3) /* same iter space */
        {
            var_42 -= ((/* implicit */_Bool) (~(((/* implicit */int) (short)5174))));
            /* LoopNest 2 */
            for (long long int i_16 = 0; i_16 < 19; i_16 += 4) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_43 = ((/* implicit */short) arr_32 [i_5 - 3] [i_15] [(_Bool)1] [i_15] [i_17]);
                        arr_52 [i_5] [i_15] [(short)1] [i_17] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) arr_50 [i_5] [i_5] [i_5 - 1] [i_16] [i_17] [i_17])) : (((/* implicit */int) arr_50 [i_5] [(unsigned char)2] [i_5 - 2] [(unsigned short)7] [i_5] [(_Bool)1]))));
                        arr_53 [i_5] [(unsigned short)14] [i_16] [(unsigned short)14] [i_5] [i_17] &= ((/* implicit */unsigned long long int) (unsigned char)41);
                        var_44 = ((/* implicit */long long int) (short)-8643);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_18 = 0; i_18 < 19; i_18 += 3) 
            {
                for (unsigned char i_19 = 0; i_19 < 19; i_19 += 2) 
                {
                    {
                        var_45 = ((/* implicit */short) (signed char)-47);
                        var_46 = ((/* implicit */unsigned short) arr_25 [(short)16] [i_15] [i_15] [i_15]);
                    }
                } 
            } 
        }
        for (short i_20 = 1; i_20 < 16; i_20 += 3) /* same iter space */
        {
            var_47 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)9)) >= (((/* implicit */int) (short)-6334)))))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_5 - 3] [i_5] [i_5 - 3]))) : (arr_41 [i_20])))));
            var_48 = ((/* implicit */long long int) arr_31 [i_5] [10LL]);
            var_49 = ((/* implicit */signed char) (unsigned short)0);
            var_50 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (signed char)76)))));
        }
        var_51 += ((/* implicit */unsigned int) ((arr_38 [i_5 + 1] [i_5] [(unsigned short)4] [i_5] [(unsigned short)6] [i_5]) ? (((/* implicit */int) arr_27 [i_5] [i_5] [i_5 - 4])) : (((/* implicit */int) (_Bool)1))));
    }
    var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (-7540079857611882186LL) : (var_11))) * (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) min((((/* implicit */unsigned short) var_17)), ((unsigned short)33111))))))) : (((/* implicit */int) var_4))));
}
