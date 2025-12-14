/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185838
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 0U)), (((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(unsigned short)13])) || (((/* implicit */_Bool) (signed char)-86)))) ? (((unsigned long long int) arr_0 [i_0] [4])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                arr_4 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_0 [i_1] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) arr_7 [i_2]);
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((14094996109804411634ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_2 + 3])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_2 + 2])) + (29043)))))))))));
    }
    var_15 += ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (short i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned long long int) (((+(arr_11 [i_3 + 2] [i_3]))) != (((/* implicit */int) max(((unsigned short)8042), ((unsigned short)22134))))));
        var_16 = ((/* implicit */unsigned char) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 + 1] [i_3 - 1]))) | ((-(var_6))))));
        var_17 = ((((/* implicit */unsigned long long int) arr_11 [i_3] [i_3 + 2])) & (((((/* implicit */_Bool) arr_7 [i_3 - 1])) ? (3534123733590378181ULL) : (((/* implicit */unsigned long long int) 2098282984U)))));
        var_18 = ((/* implicit */int) (((-(14094996109804411633ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_3 + 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19080)))))))));
    }
    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 2) 
        {
            var_19 = arr_17 [i_5 + 2];
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((((((/* implicit */unsigned long long int) arr_18 [16])) + (5964417862169229570ULL))) >> (((((/* implicit */int) var_0)) + (16572))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23357)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)228)), ((unsigned short)34189)))) : (((/* implicit */int) var_10))))))))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 1; i_7 < 22; i_7 += 3) 
            {
                for (unsigned short i_8 = 1; i_8 < 23; i_8 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_19 [(unsigned char)18] [i_7] [i_6])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)202))))))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_4] [i_7 + 2] [i_8] [i_8 - 1])) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (unsigned short)18403)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)176)) - (((/* implicit */int) (unsigned short)14335))))) ? (arr_25 [i_4] [i_6]) : (((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)25627)))))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_19 [i_4] [i_6] [i_7 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12776))) : (arr_14 [i_8] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-88)) <= (((/* implicit */int) (signed char)66))))) <= (((((/* implicit */int) (unsigned short)62789)) * (((/* implicit */int) arr_17 [i_4]))))));
            arr_27 [i_4] [(signed char)10] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_23 [8LL] [i_4] [8LL])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))));
        }
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_17 [i_4])), (((((/* implicit */_Bool) arr_16 [i_4] [i_9])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : (18446744073709551606ULL))))))));
            var_27 = ((/* implicit */short) max((((((/* implicit */int) (unsigned short)39136)) << (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (arr_19 [i_9] [i_4] [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : ((~(((/* implicit */int) (signed char)62))))))));
        }
        for (long long int i_10 = 4; i_10 < 23; i_10 += 4) 
        {
            arr_33 [i_10] = (-(((((/* implicit */_Bool) arr_29 [i_10])) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2961))))));
            arr_34 [20LL] [9LL] = ((/* implicit */unsigned char) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (arr_18 [i_10 + 1]))));
        }
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_19 [(short)1] [i_4] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(_Bool)1])))))) ? (arr_19 [18] [i_4] [(unsigned short)4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_19 [i_4] [i_4] [(unsigned short)14]))))));
        var_29 = ((/* implicit */int) (_Bool)1);
    }
    /* LoopNest 3 */
    for (long long int i_11 = 2; i_11 < 19; i_11 += 3) 
    {
        for (int i_12 = 2; i_12 < 21; i_12 += 3) 
        {
            for (signed char i_13 = 1; i_13 < 20; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 3; i_14 < 20; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            {
                                arr_46 [i_11] [i_12] [i_12] [i_14] [i_15] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_13 - 1] [i_14 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1968853348)) ? (-4980705873375650750LL) : (arr_23 [(signed char)11] [(short)17] [i_12])))) : (arr_20 [i_14]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(arr_20 [i_12]))))))));
                                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min(((short)-18942), (arr_7 [i_15]))), (((/* implicit */short) ((unsigned char) (signed char)82)))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)-15305)))), (var_11))))));
                                arr_47 [i_12] [i_12] [i_12] [(short)15] [i_15] [(short)9] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_29 [i_12]), (var_9)))) ? (((long long int) arr_45 [i_12] [(_Bool)1])) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_11 - 1])) / (((/* implicit */int) arr_7 [i_13])))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned char) arr_40 [i_13 + 1] [i_12] [i_11 + 1]);
                }
            } 
        } 
    } 
}
