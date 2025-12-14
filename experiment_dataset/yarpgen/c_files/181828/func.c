/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181828
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_9) < (((/* implicit */unsigned int) (-(2147483647)))))))));
        var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    }
    for (int i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) ((signed char) (signed char)-3))) : (arr_3 [i_1] [i_1])));
            arr_7 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_6 [i_2 + 1] [i_2 + 1] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        }
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 1) 
                {
                    for (int i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_16)))) < (2147483647)));
                            var_22 = ((int) (-(((/* implicit */int) arr_15 [0LL] [i_3] [0LL] [i_3]))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_3])) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_3]))));
            var_24 = (~(((/* implicit */int) var_7)));
        }
        for (signed char i_7 = 3; i_7 < 11; i_7 += 2) 
        {
            arr_24 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [8U] [i_7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) <= (((((/* implicit */_Bool) 2147483647)) ? (10820564027701330459ULL) : (((/* implicit */unsigned long long int) var_5))))))), (arr_23 [i_1])));
            arr_25 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483647)) ? (arr_3 [i_1] [i_7]) : (((/* implicit */int) ((signed char) 2251799813685247ULL)))));
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) > (((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_10])) || (((/* implicit */_Bool) var_3))))) - (((/* implicit */int) arr_18 [i_8] [i_9] [i_8]))))));
                            var_26 = ((/* implicit */long long int) var_17);
                            var_27 = ((/* implicit */short) var_11);
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */signed char) ((((long long int) -9223372036854775802LL)) & (((/* implicit */long long int) (~(((/* implicit */int) (short)7360)))))));
        }
        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                for (signed char i_13 = 2; i_13 < 11; i_13 += 2) 
                {
                    {
                        arr_42 [i_1] [i_1] [i_11] [i_11] [i_1] |= ((((/* implicit */_Bool) max((((/* implicit */int) (short)-7338)), (-2147483647)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_17)) > (var_9)))) : ((~(min((730294624), (((/* implicit */int) (short)-32751)))))));
                        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_13 - 2] [i_12] [i_11] [i_1 + 1] [i_1])))))));
                        var_30 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */int) arr_30 [i_1] [i_11] [i_11])) / (arr_38 [(signed char)8] [i_1]))), (((/* implicit */int) (short)10)))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) (short)-9913))))) && (((/* implicit */_Bool) (short)7360)))) ? (2305841909702066176ULL) : (((/* implicit */unsigned long long int) 118841904U))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */int) 4176125372U);
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_9)) < (((unsigned long long int) arr_30 [i_11] [i_15] [i_16]))));
                            arr_50 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_38 [i_1] [i_14 - 1]) / (arr_33 [i_1 + 1] [i_11] [i_14 + 3] [i_15] [i_16] [i_1 + 1] [i_1 + 1])));
                            var_34 -= ((/* implicit */int) var_12);
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned long long int) ((var_2) > (((/* implicit */int) (short)-7360))));
                /* LoopNest 2 */
                for (unsigned short i_17 = 1; i_17 < 10; i_17 += 1) 
                {
                    for (short i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        {
                            arr_55 [i_14] [i_14] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [(unsigned short)8] [i_11] [i_11])))))));
                            arr_56 [i_1] [i_1] [i_11] [i_14] [i_11] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) 2525040936U)) ? (arr_14 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_3)) : (var_6))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) var_6))));
                arr_57 [i_1] [i_11] [i_14] = ((/* implicit */unsigned short) arr_16 [i_1] [i_1]);
            }
            /* vectorizable */
            for (unsigned long long int i_19 = 1; i_19 < 8; i_19 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_20 = 2; i_20 < 11; i_20 += 2) 
                {
                    for (short i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        {
                            arr_65 [6ULL] [i_19] [i_20] = ((/* implicit */unsigned long long int) var_4);
                            arr_66 [5] [i_19] [5] [i_20] [i_1] [i_19] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_19] [(signed char)4] [i_19 + 1] [i_19]))) == (var_16)));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_40 [i_19] [i_19 + 3] [i_20] [i_21]))));
                            var_38 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_17)) ? (6205807242873338019ULL) : (((/* implicit */unsigned long long int) var_2)))) % (((/* implicit */unsigned long long int) arr_51 [i_20] [i_20] [i_20] [i_20]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (unsigned int i_23 = 0; i_23 < 12; i_23 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */short) ((signed char) arr_39 [i_23] [i_11] [i_1]));
                            var_40 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_11] [i_19]))) % (4294967283U))))));
                            var_41 = ((/* implicit */signed char) (-(arr_70 [i_1] [i_19] [i_1] [i_1 - 2] [i_23] [i_11] [i_1 - 2])));
                            var_42 = ((/* implicit */_Bool) (+(arr_54 [i_19] [i_19] [i_1 - 2] [i_1] [i_1])));
                        }
                    } 
                } 
            }
        }
        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_7)) == (arr_4 [i_1] [i_1]))))))) ? (((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : ((+(max((((/* implicit */unsigned int) -730294627)), (arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)4])))))));
    }
    var_44 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) < (var_5)));
}
