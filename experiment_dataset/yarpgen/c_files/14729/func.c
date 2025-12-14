/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14729
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
    var_16 = ((/* implicit */unsigned int) ((((long long int) ((unsigned char) 4124314722833893069LL))) == (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [(short)1] = ((short) ((3435678122918218183LL) & (-627012342658994174LL)));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) 4124314722833893050LL);
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_17 = ((/* implicit */signed char) (unsigned char)115);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(arr_6 [i_1])))) ? (max((((/* implicit */long long int) (unsigned short)50953)), (8876311310167254409LL))) : (((/* implicit */long long int) ((arr_1 [i_1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((int) arr_8 [i_2 + 3] [(signed char)2])))))));
            arr_11 [i_1] = ((unsigned short) -4124314722833893084LL);
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                arr_15 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) max((arr_14 [i_1] [9] [i_1]), (((/* implicit */int) (_Bool)0))))) : (((arr_0 [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1]))) : (arr_8 [i_1] [i_1]))))) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            arr_21 [i_1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) (unsigned short)4499);
                            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_2 + 1] [(_Bool)0] [i_2 + 1]))) / (var_8))) * (((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) / (732398051))))));
                            arr_22 [i_4] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_15)))) ? (var_8) : (((((/* implicit */_Bool) arr_20 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_5] [i_2 - 1])) ? (((/* implicit */long long int) arr_20 [i_2] [(unsigned short)2] [i_2 + 1] [i_2 + 1] [i_2] [i_5] [i_2 - 1])) : (var_8)))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (+(arr_6 [i_5]))))));
                            var_21 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((var_12) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_2] [10] [i_4]))))))))));
                        }
                    } 
                } 
                var_22 = ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)127)) > (((/* implicit */int) arr_16 [i_1] [i_2] [i_2] [i_2] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_2]))))) : (((/* implicit */int) ((signed char) arr_6 [(signed char)4])))))) ? (((/* implicit */long long int) min((arr_5 [i_1]), (((/* implicit */int) arr_10 [i_1] [i_1]))))) : (((long long int) arr_5 [i_1])));
            }
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 2])) ? (arr_14 [i_2 + 2] [i_2 + 1] [i_2 + 2]) : (arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 2])))) ? (min((((((/* implicit */_Bool) (signed char)0)) ? (-7384764294308499477LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-101))))), (9223372036854775800LL))) : (((((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_2 + 2] [i_2 + 1])) ? (arr_12 [(_Bool)1] [i_1] [i_2 + 2] [i_2 + 1]) : (arr_12 [i_1] [i_1] [i_2 + 2] [i_2 + 3])))));
                arr_25 [i_1] [i_1] = ((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]);
                var_24 = ((/* implicit */short) var_11);
                var_25 = ((/* implicit */unsigned long long int) var_8);
            }
            for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [i_9] [(unsigned char)9] [i_2] [i_2] [i_1] [i_1]))))) ? ((+(((/* implicit */int) arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) max((arr_33 [i_1] [i_1] [i_1] [i_7] [i_1] [i_9]), (arr_33 [i_9] [i_9] [i_8] [i_2 + 2] [i_2 + 2] [i_1]))))));
                            arr_36 [i_2] [(_Bool)1] [i_7] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 - 1])) ? (((var_6) | (var_7))) : (((((/* implicit */_Bool) 4124314722833893069LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (3654313334U))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) min((((/* implicit */long long int) (signed char)127)), (((long long int) (-(((/* implicit */int) arr_19 [(unsigned short)4] [i_7] [i_7] [i_7] [i_7])))))));
                arr_37 [i_1] = ((/* implicit */unsigned short) (((-(min((((/* implicit */unsigned int) arr_19 [i_1] [i_1] [i_1] [i_1] [8LL])), (var_15))))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_29 [i_7] [i_2] [11ULL])))))));
            }
            var_28 = ((/* implicit */unsigned long long int) min((((arr_23 [i_2 - 1] [i_2 + 2] [i_2 + 2]) ? (((/* implicit */int) arr_23 [i_2 + 1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_23 [i_2 + 3] [i_2 + 2] [i_2 + 3])))), (((/* implicit */int) ((((/* implicit */int) arr_23 [i_2 + 2] [i_2 + 3] [i_2 - 1])) > (((/* implicit */int) (unsigned short)26451)))))));
        }
        var_29 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))));
    }
    for (short i_10 = 0; i_10 < 21; i_10 += 3) 
    {
        var_30 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_6))))))));
        arr_40 [i_10] = (((-(((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) var_13))))))) >= (((/* implicit */int) var_0)));
        arr_41 [i_10] = ((/* implicit */long long int) arr_38 [i_10]);
    }
    var_31 = ((/* implicit */unsigned char) var_13);
}
