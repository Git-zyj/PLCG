/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123341
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
    var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (var_17) : (((/* implicit */long long int) (-(var_5)))))), (((/* implicit */long long int) var_11))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
                    var_19 *= ((/* implicit */unsigned char) max(((~((~(arr_4 [(_Bool)1] [i_1]))))), (((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 2])) ? (((((/* implicit */_Bool) arr_2 [4LL] [i_1 + 1] [4LL])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [14U])), (arr_4 [i_0] [i_0])))))));
                    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_16))))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)7726))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            arr_15 [i_3] [i_3 + 2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1803795307)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (_Bool)0))));
            arr_16 [i_3] [i_3] = ((/* implicit */unsigned long long int) -8667392226849639981LL);
            /* LoopNest 3 */
            for (unsigned short i_5 = 3; i_5 < 23; i_5 += 3) 
            {
                for (signed char i_6 = 2; i_6 < 23; i_6 += 2) 
                {
                    for (signed char i_7 = 1; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) -1803795307);
                            arr_26 [i_3 + 3] [i_4] [i_4] [i_5 - 1] [i_3] [i_5 - 1] [i_3 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_23 [i_3]))));
                            arr_27 [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] = ((/* implicit */_Bool) (~(arr_22 [i_3 + 1] [i_5] [i_5 - 2] [i_6 - 2] [i_7] [i_7 - 1])));
                            arr_28 [i_7 - 1] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */unsigned int) arr_12 [i_3]);
                        }
                    } 
                } 
            } 
        }
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((15778868774127298959ULL), (((/* implicit */unsigned long long int) (unsigned short)47107)))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
        arr_33 [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_8] [i_8]))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 2; i_9 < 22; i_9 += 3) 
        {
            arr_36 [i_8] = ((/* implicit */signed char) 1881446060U);
            arr_37 [i_8] [12LL] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59759))) : (arr_22 [i_9] [i_8] [i_9 - 2] [i_8] [i_8] [i_8])))) ? (((((/* implicit */_Bool) arr_20 [i_8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [0] [i_9 - 2] [7ULL])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_13 [i_8])) : (((/* implicit */int) var_16))))));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 4; i_11 < 21; i_11 += 3) 
                {
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_23 [i_10])) + (2147483647))) >> ((((~(((/* implicit */int) arr_18 [(unsigned short)8] [(unsigned char)19])))) + (9))))))));
                            arr_46 [i_8] [i_9] [(signed char)10] [i_8] [(signed char)3] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_9 [i_8]))))));
                            var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_10] [i_10] [i_10])) % (((/* implicit */int) arr_14 [i_10] [(_Bool)1]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    arr_50 [i_8] [i_9 - 1] [i_8] [(_Bool)1] = ((/* implicit */short) arr_8 [i_8]);
                    var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_8] [i_9] [i_10] [i_8]))));
                    arr_51 [i_8] = ((/* implicit */short) (((~(((/* implicit */int) arr_48 [i_8] [14ULL] [(_Bool)1] [14ULL])))) == (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_44 [i_8] [i_8] [i_13])))))));
                }
                arr_52 [i_10] [i_8] [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_8]))));
                var_27 = arr_18 [i_8] [i_9];
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    for (int i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        {
                            arr_59 [i_9] [i_9] [i_8] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_53 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_8])) ? (((((/* implicit */_Bool) arr_21 [19ULL] [i_8])) ? (((/* implicit */int) arr_11 [i_9] [i_9] [i_9])) : (var_5))) : (((arr_11 [(_Bool)1] [12U] [8U]) ? (((/* implicit */int) arr_53 [i_9] [i_9] [i_9] [i_8])) : (((/* implicit */int) arr_18 [i_8] [i_8]))))));
                            var_28 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_25 [i_15] [i_15] [i_8] [0U] [i_8] [i_9 + 1] [i_8])))));
                            var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)5777))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_30 -= ((/* implicit */short) ((((/* implicit */int) arr_8 [i_17])) == (((((/* implicit */_Bool) arr_31 [i_17] [i_9])) ? (((/* implicit */int) arr_24 [i_8] [i_9 + 2] [i_16] [i_8] [i_17])) : (var_3)))));
                            arr_68 [i_8] [i_8] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) arr_19 [i_9] [i_9])) + (((/* implicit */int) arr_63 [(unsigned char)16] [i_17] [i_17] [(short)11] [i_9] [i_8])))) : (((var_11) ? (((/* implicit */int) arr_18 [i_18] [i_8])) : (((/* implicit */int) arr_41 [i_8] [i_8] [i_16] [i_9] [i_17]))))));
                            var_31 = ((/* implicit */_Bool) arr_24 [i_8] [i_17] [i_16] [i_9] [i_8]);
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((arr_62 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9 - 2]) + (arr_62 [i_9 + 2] [i_9 - 2] [i_9 - 1] [i_9 + 2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_73 [i_8] = ((/* implicit */unsigned short) ((arr_22 [i_9 + 2] [i_9 - 2] [i_9] [i_9 + 1] [i_9] [i_9 + 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            arr_74 [i_8] [i_8] [i_8] [i_8] [i_8] [i_19] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8] [i_19] [i_16] [i_9] [i_8]))) : ((-(-3124860139169345890LL)))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5776)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-5945))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_65 [i_8] [i_9] [i_9 + 2] [i_19] [i_8]))));
                        }
                    } 
                } 
                arr_75 [(short)4] [i_8] [i_16] = ((/* implicit */unsigned int) ((unsigned long long int) arr_17 [i_8] [i_9 - 1] [i_9 - 1] [i_8]));
                var_34 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_31 [(short)6] [i_9]))));
            }
            for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 3) 
            {
                arr_78 [i_8] [i_9] [i_8] [i_8] = ((/* implicit */_Bool) arr_35 [i_9 + 2] [i_8]);
                arr_79 [i_8] = ((/* implicit */long long int) ((((/* implicit */int) arr_61 [i_9 + 1] [i_9 - 1] [i_21] [(short)12])) < (((/* implicit */int) var_10))));
            }
        }
    }
    /* vectorizable */
    for (unsigned char i_22 = 1; i_22 < 16; i_22 += 1) 
    {
        arr_82 [i_22] [i_22] = ((/* implicit */unsigned int) arr_0 [i_22] [i_22 + 1]);
        /* LoopNest 3 */
        for (short i_23 = 0; i_23 < 18; i_23 += 2) 
        {
            for (unsigned char i_24 = 0; i_24 < 18; i_24 += 3) 
            {
                for (unsigned char i_25 = 0; i_25 < 18; i_25 += 2) 
                {
                    {
                        arr_90 [i_24] [i_23] [i_23] [i_22] [i_23] [i_25] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_63 [i_22] [(_Bool)1] [i_24] [(_Bool)1] [i_24] [i_23])) >= (((/* implicit */int) var_10)))));
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_23] [i_24] [i_23] [i_23])) || (((/* implicit */_Bool) arr_70 [i_25] [i_23] [i_23] [i_22])))))));
                        var_36 = ((/* implicit */int) arr_11 [i_22 + 2] [i_22 + 2] [i_22]);
                    }
                } 
            } 
        } 
        var_37 = ((_Bool) arr_25 [i_22 + 2] [i_22 - 1] [i_22 + 2] [i_22 + 1] [i_22 - 1] [i_22 + 1] [i_22 + 2]);
        arr_91 [i_22] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_53 [i_22 + 1] [2LL] [i_22 + 1] [i_22])) ? (var_17) : (((/* implicit */long long int) var_15)))) == (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_22 - 1] [i_22 + 1])))));
    }
    var_38 = ((/* implicit */_Bool) (~(((((((/* implicit */int) var_8)) + (2147483647))) << ((((((~(((/* implicit */int) (short)0)))) + (27))) - (26)))))));
}
