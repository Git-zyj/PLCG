/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171386
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_0] [i_0]))) / (arr_9 [i_0] [i_0] [i_0] [(unsigned char)0])))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [14U])) ? (var_0) : (56042279U)))))), (((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */long long int) (+(var_0)))) : (((((/* implicit */_Bool) arr_9 [i_0] [16LL] [i_2] [14LL])) ? (((/* implicit */long long int) var_11)) : (1008LL))))))))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */signed char) (-(var_0)));
                        }
                        arr_14 [i_2] [i_2] [i_1 - 1] [i_2] = (+(((/* implicit */int) arr_7 [i_3] [i_2])));
                        arr_15 [i_0] [i_1 - 1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-38))));
                        var_15 = ((/* implicit */unsigned char) var_4);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_6 [(unsigned char)0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (var_4)))))), (arr_12 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])));
    }
    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5 - 1]))) : (var_4)))), (((((/* implicit */_Bool) 56042288U)) ? (((/* implicit */unsigned long long int) -988LL)) : (var_1)))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [22]))))));
    }
    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 3) 
    {
        arr_22 [i_6] [i_6] = 1028LL;
        /* LoopSeq 1 */
        for (long long int i_7 = 3; i_7 < 18; i_7 += 4) 
        {
            arr_27 [i_6] [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_26 [i_6] [i_6 - 1])) ? (((/* implicit */long long int) var_0)) : (arr_9 [i_6 - 1] [11] [i_6 + 1] [i_6]))), ((-(arr_9 [9LL] [(signed char)11] [i_6 - 1] [i_6])))));
            var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_1)))))))));
            var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_8)))) ? ((+(arr_24 [10ULL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_6] [i_7 - 3] [i_6] [i_7] [17] [i_6])) ? (var_4) : (((/* implicit */long long int) var_12)))))));
        }
    }
    for (unsigned char i_8 = 1; i_8 < 16; i_8 += 3) 
    {
        var_20 += ((/* implicit */signed char) (-(var_5)));
        arr_30 [i_8] = ((/* implicit */signed char) (-(var_1)));
    }
    var_21 -= ((/* implicit */unsigned char) var_11);
    /* LoopSeq 1 */
    for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        arr_33 [i_9] = ((/* implicit */signed char) (~(arr_10 [i_9] [i_9] [i_9] [i_9] [i_9])));
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            for (signed char i_11 = 4; i_11 < 18; i_11 += 1) 
            {
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    {
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
                        arr_41 [i_10] [i_10] [i_9] [i_12] = ((/* implicit */unsigned long long int) (-(-1414159116175019597LL)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_13 = 1; i_13 < 18; i_13 += 3) 
        {
            arr_44 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (unsigned char)136))))) ? (((var_6) ? (((/* implicit */long long int) ((var_12) + (var_12)))) : (((((/* implicit */_Bool) var_5)) ? (-7470406081474991694LL) : (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) ((arr_7 [i_9] [i_9]) ? (arr_16 [i_13 + 2] [i_13 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [(_Bool)1] [i_9] [i_9]))))))));
            /* LoopNest 3 */
            for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                for (unsigned int i_15 = 1; i_15 < 19; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((((arr_52 [i_15 + 1] [i_13] [i_14] [i_13 + 2]) ? (arr_38 [i_13 + 2]) : (arr_38 [i_13 + 1]))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_36 [i_9] [i_15 - 1] [i_14])))))));
                            arr_56 [13ULL] [i_13] [3] [13ULL] [i_9] [13ULL] [(unsigned char)9] = ((/* implicit */int) ((arr_43 [5ULL] [i_13]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147)))));
                            var_24 += ((/* implicit */signed char) arr_53 [i_14] [i_14] [18ULL] [i_15 + 1] [8] [i_15 + 1]);
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(var_2)))) ? ((+(arr_24 [(_Bool)1]))) : (((/* implicit */unsigned long long int) (+(arr_26 [4U] [4U])))))))))));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 1010LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1020LL)) && (var_6))))) : (((((/* implicit */_Bool) arr_10 [i_15 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 2] [i_13 + 1])) ? (arr_10 [i_15 + 1] [i_13] [i_13 - 1] [i_13 + 1] [i_13 - 1]) : (arr_10 [i_15 + 1] [i_14] [i_13 + 2] [i_13 + 2] [i_13 - 1])))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_13 + 1] [i_9] [i_13 + 1])) ? (arr_19 [i_9]) : (arr_19 [i_9])))) ? (((((/* implicit */_Bool) 7470406081474991720LL)) ? (3925222518151731712LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : ((~(arr_19 [i_9])))));
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_53 [i_13 + 2] [i_13 - 1] [(signed char)16] [(_Bool)1] [14LL] [i_13]))));
        }
    }
}
