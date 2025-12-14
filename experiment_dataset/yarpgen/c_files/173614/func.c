/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173614
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) ((long long int) (unsigned char)12));
        var_16 &= ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) ((unsigned char) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_17 &= ((/* implicit */int) var_9);
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
            {
                arr_9 [i_0] [i_0] [i_0] &= (unsigned char)14;
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_18 -= ((/* implicit */signed char) min((var_4), (((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2])) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (unsigned char)0)))) != (((int) var_7)))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_2])) != (((/* implicit */int) arr_4 [i_3])))))) : (((((/* implicit */long long int) 1879048192U)) & (var_6)))));
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_2] [i_1] [i_1] [i_1] [i_0]))) : (var_12))), (((/* implicit */unsigned int) max((arr_8 [i_2] [(unsigned char)13] [i_0]), ((unsigned char)205)))))))));
                    var_20 = ((/* implicit */unsigned char) min((((arr_7 [i_0] [i_0] [i_0]) / (arr_7 [i_0] [5LL] [i_2]))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (arr_7 [i_0] [i_1] [i_2]) : (arr_7 [i_0] [i_1] [i_2])))));
                    arr_15 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (-(((arr_11 [i_0] [i_0] [i_2] [i_3] [i_0]) >> (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (988249181)))))));
                }
                var_21 = 17179869152ULL;
            }
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
            {
                var_22 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-41))));
                var_23 = ((/* implicit */unsigned char) min((max((0ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))), (((/* implicit */unsigned long long int) (signed char)-41))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (var_8) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_2 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) arr_10 [i_4] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) 523776LL))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_13)) == (((((/* implicit */_Bool) (~(6721862031227748352ULL)))) ? ((+(arr_11 [i_0] [i_1] [i_4] [i_1] [i_0]))) : (arr_17 [i_0] [i_1] [i_4])))));
            }
        }
        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 2) 
        {
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((-523777LL), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) arr_22 [i_5 + 1] [i_5 + 1] [i_5]))))) ? (((((0ULL) <= (((/* implicit */unsigned long long int) arr_6 [i_5] [i_5] [i_5])))) ? (16776704LL) : (((/* implicit */long long int) arr_10 [14U] [i_5] [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1])))) : (((((/* implicit */_Bool) -523777LL)) ? (((/* implicit */long long int) arr_11 [i_0] [i_5 + 1] [i_5] [i_0] [i_5 + 1])) : (arr_7 [6LL] [i_5] [i_5 + 1])))));
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_5) : ((-((+(var_12)))))));
                arr_25 [i_6] [i_6] [6ULL] [6ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_9))));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)11))));
                    var_29 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_24 [i_0] [i_5] [i_6])), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_8))) : (arr_1 [i_7])))));
                    arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_0] [i_5] [i_6] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (11045901127697546434ULL))) <= (((/* implicit */unsigned long long int) 3853911343258883765LL))));
                }
            }
            for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                arr_33 [i_5 + 1] [i_5] = ((/* implicit */unsigned char) (+(((unsigned long long int) arr_5 [i_0] [i_5] [i_5 - 1]))));
                var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)7)), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)178))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)200))) : (((((/* implicit */_Bool) 14047444090099246950ULL)) ? (arr_19 [i_8] [i_0]) : (((/* implicit */long long int) var_12))))))));
                arr_34 [i_0] [i_5] [i_5] [18ULL] = ((/* implicit */signed char) arr_17 [i_8] [i_5] [i_0]);
                var_31 &= ((/* implicit */long long int) max((9007061815787520ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) 3853911343258883754LL)))))));
            }
        }
    }
    var_32 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
    var_33 = ((/* implicit */unsigned char) var_4);
}
