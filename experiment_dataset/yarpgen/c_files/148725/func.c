/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148725
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
    var_10 |= ((/* implicit */unsigned long long int) (signed char)61);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_11 ^= ((/* implicit */unsigned long long int) (+(arr_3 [i_1] [i_1] [i_1])));
            var_12 = ((/* implicit */unsigned char) (+(18446744073709551614ULL)));
            var_13 = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)255)))));
        }
        var_14 = ((/* implicit */signed char) ((var_6) + (((/* implicit */int) ((3461233782U) <= (((/* implicit */unsigned int) -1)))))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_9))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) % (var_0))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        arr_8 [18] = ((/* implicit */_Bool) 576460748008456192ULL);
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) 130023424))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) 1914670713)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-9)))))) - (-1843156167)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    {
                        arr_21 [i_3] = 5450377973270359936ULL;
                        arr_22 [i_4 - 1] [i_5 - 1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 1])), (((arr_15 [i_3] [i_4] [i_4] [i_3]) / (((/* implicit */int) var_2)))))));
                        arr_23 [i_3] [i_4 - 1] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)-108)), (((((/* implicit */_Bool) (unsigned short)65512)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))) : (7102484529395945985ULL)))));
                        arr_24 [i_3] [i_6] [i_5 - 1] [i_3] = ((/* implicit */unsigned char) -4018772460316319102LL);
                    }
                } 
            } 
            arr_25 [i_3] [i_3] = ((/* implicit */unsigned char) max((9765188013042479155ULL), (((/* implicit */unsigned long long int) (unsigned char)217))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                for (signed char i_8 = 4; i_8 < 18; i_8 += 2) 
                {
                    {
                        arr_32 [i_3] = ((/* implicit */unsigned long long int) (-(2251799813685247LL)));
                        var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((short) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) (signed char)120))))))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), ((+(12120499872810636152ULL)))))));
                        arr_33 [i_8 + 3] [i_3] [i_3] [15U] [i_3] [i_3] = ((/* implicit */unsigned short) max((-1983294087), (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_10 [4U])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [(unsigned char)15] [i_7 + 1])), (arr_6 [(signed char)4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                        var_19 -= ((/* implicit */int) var_2);
                        arr_34 [i_3] [(unsigned char)4] [(signed char)19] [i_8 - 1] = ((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) var_9))), (((((/* implicit */int) (signed char)127)) << (((-1843156167) + (1843156180)))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                var_20 -= ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) ((signed char) arr_16 [i_4 + 1] [i_4])))))), (arr_0 [i_3])));
                arr_37 [i_3] = ((/* implicit */unsigned char) (-((+((~(arr_29 [i_3] [i_4 - 1] [i_3] [(unsigned char)8])))))));
            }
        }
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                var_21 = ((((/* implicit */int) var_3)) % ((~(((/* implicit */int) (signed char)127)))));
                var_22 = var_1;
                var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967295U)) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (arr_31 [i_3] [i_3] [i_10] [i_11])))));
                arr_45 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -313793207)) ? (((/* implicit */int) (_Bool)1)) : (-1)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_7 [i_11])))));
                arr_46 [i_3] [i_3] [i_11] = ((/* implicit */unsigned long long int) ((unsigned char) var_2));
            }
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((max((var_9), (arr_18 [i_12] [i_3] [i_3] [i_10] [i_3]))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_3] [i_3])) > (((/* implicit */int) arr_36 [i_3])))))))), (max((((/* implicit */unsigned int) (unsigned char)244)), (arr_29 [i_3] [i_10] [(_Bool)1] [i_3])))));
                arr_51 [i_3] [i_10] = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((arr_7 [i_12]) > (((/* implicit */unsigned int) arr_15 [i_3] [i_12] [i_10] [i_3]))))) + (((/* implicit */int) (unsigned char)244))))));
                arr_52 [i_3] [i_3] = ((/* implicit */signed char) var_8);
                arr_53 [i_3] [i_3] = ((/* implicit */unsigned int) (unsigned char)11);
            }
            var_25 -= ((/* implicit */signed char) var_0);
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_10])))))), (var_5))) : (((((/* implicit */_Bool) arr_30 [i_3] [i_3] [i_3])) ? (arr_30 [i_3] [i_10] [(signed char)8]) : (arr_30 [i_3] [i_10] [i_10])))));
        }
        arr_54 [i_3] = ((/* implicit */short) ((_Bool) var_6));
    }
    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [(_Bool)1] [i_13] [(_Bool)1]))))), (((arr_39 [i_13] [2ULL] [i_13]) + (((/* implicit */unsigned long long int) arr_0 [(signed char)8])))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 2537544746279395026LL)) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) (signed char)55))))))))))));
        var_28 = ((/* implicit */unsigned int) 18446744073709551603ULL);
    }
    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (4294967278U) : (max((max((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)42584)) ? (-458077926) : (((/* implicit */int) (_Bool)0)))))))));
}
