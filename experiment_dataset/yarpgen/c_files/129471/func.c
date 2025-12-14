/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129471
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(var_8)))), (((((((/* implicit */_Bool) 9223372036854775798LL)) ? (6490055129646702451LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-14))))) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2] [10U])))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((4294967295U) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 2])) ? (min((var_0), (((/* implicit */int) arr_1 [(signed char)3] [i_0])))) : (((/* implicit */int) arr_2 [(unsigned char)10] [i_0 - 2])))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (arr_2 [i_0] [(signed char)7])))), (max((-689372281), (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) (short)-3653)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (min(((+(3396731862U))), (((/* implicit */unsigned int) ((_Bool) (unsigned short)65517))))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] = ((/* implicit */int) arr_10 [i_0] [7U] [i_2] [i_4] [2U]);
                                arr_17 [(_Bool)1] [i_0] [i_4] [7U] = ((/* implicit */unsigned short) max((((unsigned char) ((arr_0 [i_2] [i_0]) % (((/* implicit */int) (unsigned short)10777))))), (((/* implicit */unsigned char) (_Bool)1))));
                                var_16 += ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((signed char) 2121718437)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (((((((/* implicit */int) arr_10 [9LL] [i_1] [(_Bool)1] [i_2] [i_2])) != (((/* implicit */int) (_Bool)0)))) ? (min((6U), (((/* implicit */unsigned int) (unsigned char)252)))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)65)), (2147483647))))))));
                    arr_18 [(_Bool)0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) (unsigned short)27345)) : (160522737)))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0])) ? (arr_0 [i_0 - 2] [i_0]) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 2; i_5 < 24; i_5 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) arr_20 [i_5 - 2]);
        arr_21 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5 - 1]))) : (var_3)));
        var_19 = ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) arr_19 [i_5 - 1])) : (746201444));
    }
    for (int i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_27 [i_7] [(_Bool)1] [i_7] = ((/* implicit */unsigned int) min((max((arr_23 [i_6]), (arr_26 [i_7]))), (((/* implicit */int) ((_Bool) arr_26 [i_7])))));
            arr_28 [i_7] [(_Bool)1] = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-30719)))))) == (((/* implicit */int) arr_24 [i_6] [14]))));
            var_20 = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) ((arr_19 [i_6]) && (arr_19 [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18398574494779655328ULL)))))));
            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7]))) - (15840198601348756027ULL))) >= (var_3)));
        }
        var_22 = ((/* implicit */_Bool) (+(((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (int i_9 = 1; i_9 < 16; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_11 = 2; i_11 < 16; i_11 += 4) /* same iter space */
                        {
                            var_23 = ((unsigned char) var_3);
                            var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [6])) ^ (((/* implicit */int) (unsigned short)4089))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15930))) : ((+(3141420466U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_41 [i_6])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_9 - 1]))))))) : ((+(var_2)))))));
                        }
                        for (int i_12 = 2; i_12 < 16; i_12 += 4) /* same iter space */
                        {
                            arr_45 [13] [i_8] [i_9] [i_9] [(unsigned char)0] = ((/* implicit */long long int) (+(((unsigned int) arr_26 [i_9]))));
                            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_6]))))) && (((/* implicit */_Bool) min((arr_22 [(short)1]), (((/* implicit */int) (_Bool)0))))))))));
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_26 &= ((/* implicit */_Bool) (~(((((/* implicit */int) arr_24 [i_10] [i_13 - 1])) | (((/* implicit */int) arr_24 [i_6] [i_6]))))));
                            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                            var_28 = ((/* implicit */int) (unsigned char)4);
                            arr_49 [i_9] [(signed char)7] [i_10] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((-10LL) > (((/* implicit */long long int) -679977049))))), (-657220813)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (arr_23 [i_6]) : (((/* implicit */int) (unsigned char)21))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45117))) : (((((/* implicit */_Bool) (signed char)-94)) ? (arr_39 [9U] [i_8] [i_9] [i_9] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_6] [(short)7] [i_9] [i_10] [(unsigned char)5] [i_8] [1LL])))));
                        }
                        arr_50 [i_6] [i_10] [i_9] [(_Bool)1] [i_8] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_43 [i_9] [15LL] [7LL] [2ULL] [i_9 - 1] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))) : (arr_43 [(unsigned char)12] [i_9] [15U] [i_9] [i_9 - 1] [4LL] [(unsigned short)3])))));
                        arr_51 [4U] [i_9] [16ULL] [(unsigned short)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [5U] [(unsigned char)8] [(unsigned short)14]))) : (((long long int) (_Bool)1))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((2138727848405022621ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_42 [i_10] [i_8])) > (-1732108849)))))))))))));
                        var_30 -= min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_43 [i_6] [i_6] [i_8] [(short)5] [i_9] [(unsigned char)3] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [i_10] [5LL] [(unsigned char)6])))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))), (4341305995116305131LL));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
    var_32 = ((/* implicit */_Bool) -5982783793345716031LL);
}
