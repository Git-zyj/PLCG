/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115861
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) var_18);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) arr_3 [i_0]))))) >> (((412141571) - (412141566))))), (max((min((-412141572), (((/* implicit */int) (unsigned char)144)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (unsigned short)0))))))));
            var_21 = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) == (9223372036854775807LL))))) < (((((/* implicit */_Bool) max((16256), (0)))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (signed char)-126))))));
            var_22 -= ((/* implicit */unsigned long long int) 412141569);
            var_23 = min((((((/* implicit */_Bool) var_9)) ? (-412141567) : (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((unsigned char) 412141566));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [9ULL])) ? (((/* implicit */int) arr_6 [(unsigned char)13])) : (((/* implicit */int) arr_6 [(_Bool)1])))) : (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (short)24811))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                arr_13 [i_4] [(unsigned char)3] [i_4] [(unsigned short)7] = ((/* implicit */short) -751823767);
                var_26 &= ((/* implicit */unsigned int) ((signed char) -660911339));
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_3 - 2]))) : (arr_7 [i_3] [i_3 - 2] [i_3 + 1]))))));
            }
            var_28 = ((/* implicit */long long int) var_17);
            var_29 = ((/* implicit */int) (+(8622068298289496184LL)));
        }
        var_30 = ((/* implicit */long long int) (((+(4))) < (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_8 [i_0] [0LL] [i_0]) : (((/* implicit */int) (unsigned short)0))))) >= (max((arr_10 [i_0] [i_0]), (((/* implicit */long long int) var_3)))))))));
        var_31 = ((/* implicit */unsigned char) ((arr_11 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_32 = (unsigned short)15;
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
    {
        var_33 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_5]))));
        var_34 = ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_6 [i_5])));
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 4; i_7 < 18; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned char i_9 = 2; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) 1999550263U);
                            var_36 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) var_13)))));
                            var_37 = ((/* implicit */unsigned long long int) (+((+(706537065)))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)51)) >= (-660911335)));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    for (unsigned int i_11 = 3; i_11 < 16; i_11 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned short) (~(((arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_11 + 2] [i_10] [i_10] [i_5])))))));
                            arr_28 [i_10] = (~(((((/* implicit */_Bool) arr_7 [i_5] [i_5] [(unsigned char)11])) ? (arr_10 [(signed char)12] [i_5]) : (((/* implicit */long long int) var_0)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_17 [i_12] [i_5] [i_5])))) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5])))))));
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (unsigned char)164))));
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        var_42 = ((/* implicit */short) ((8622068298289496184LL) << (((arr_17 [i_13] [i_7 - 1] [i_7 - 3]) - (8378308107438831582LL)))));
                        var_43 = ((((/* implicit */_Bool) ((unsigned int) 660911339))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_19)) ^ (var_7))));
                    }
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_29 [i_5] [i_6] [i_6] [i_6] [i_14])) : (((/* implicit */int) arr_29 [i_7] [i_7] [i_7] [i_12] [i_14]))));
                        var_45 = ((/* implicit */int) ((signed char) var_3));
                        var_46 = ((((((/* implicit */int) (short)-14496)) + (2147483647))) >> (((((/* implicit */int) (signed char)72)) - (43))));
                    }
                }
                for (signed char i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    arr_40 [(unsigned char)16] = ((/* implicit */int) (((~(11924930240228777368ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5] [i_6] [i_5] [i_6])) ? (((/* implicit */int) arr_20 [16] [16] [(unsigned short)2] [(_Bool)1])) : (((/* implicit */int) (unsigned char)164)))))));
                    var_47 |= ((/* implicit */int) var_1);
                }
            }
            var_48 = ((/* implicit */int) ((arr_19 [i_5] [i_6] [0ULL] [i_6]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25185)) ? (1825599820) : (((/* implicit */int) (_Bool)1)))))));
            var_49 = ((/* implicit */unsigned short) ((_Bool) (signed char)-104));
            var_50 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)164))));
        }
    }
    var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((var_6), ((unsigned short)47564)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_4)))))) ? (((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)248)))) - (((/* implicit */long long int) ((/* implicit */int) min((var_13), ((unsigned short)65521))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(var_15))))))));
}
