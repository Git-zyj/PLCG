/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181293
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
    var_10 = ((/* implicit */_Bool) var_8);
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-18355))))) ? (((((/* implicit */_Bool) (-(var_1)))) ? (((var_9) ? (((/* implicit */int) (short)-29701)) : (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) var_9)))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)39)))))))));
    var_12 |= ((/* implicit */unsigned long long int) (-((+(9223372036854775807LL)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_13 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [4ULL]))));
        var_14 = (!(((/* implicit */_Bool) arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10597215074810365750ULL)) ? (((((/* implicit */_Bool) (unsigned short)3192)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1])))) : (((((/* implicit */int) arr_4 [i_1])) << (((arr_1 [i_1]) - (4375668440194907200ULL)))))));
        var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1 + 1]))));
        var_17 = ((/* implicit */unsigned char) 9223372036854775807LL);
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_1]) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (unsigned short)57000)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) arr_0 [i_2]))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) 2147483647);
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17851374317477639647ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2] [i_1]))) : (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4]))) : (14569187308537770533ULL))));
                        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_3]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    {
                        arr_19 [i_6] [i_6] [i_6] [i_1] = ((/* implicit */_Bool) 1442363591);
                        var_21 = ((/* implicit */signed char) (~(1123636188U)));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_2 [0ULL] [3ULL]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) var_3)))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                var_24 = ((/* implicit */signed char) arr_14 [i_1]);
                arr_24 [i_7] [i_2] [i_1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((4630988905672766266LL) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_7])))))) ? (arr_3 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 10061900468635334666ULL))))))));
            }
        }
        for (unsigned char i_8 = 1; i_8 < 8; i_8 += 1) 
        {
            var_25 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
            var_26 = ((((/* implicit */_Bool) arr_11 [(signed char)4] [i_8] [i_8 + 2] [i_8] [i_8 + 2])) && (((/* implicit */_Bool) arr_6 [i_8 + 1] [i_1])));
        }
    }
    for (unsigned char i_9 = 2; i_9 < 9; i_9 += 1) /* same iter space */
    {
        var_27 = ((((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_9 + 1] [i_9 + 1]))) | ((-9223372036854775807LL - 1LL)))) ^ (((/* implicit */long long int) ((/* implicit */int) min((arr_26 [i_9 - 2] [i_9 + 1]), (arr_26 [i_9 - 1] [i_9 + 1]))))));
        arr_31 [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_9])) ? (var_1) : (((/* implicit */int) arr_0 [(_Bool)1])))) != (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))))));
        var_28 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 3948346613U)) && (((/* implicit */_Bool) -6828853923404019184LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [7] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_29 [(signed char)8] [(signed char)8])) : (((/* implicit */int) arr_30 [i_9]))))) : (min((((/* implicit */unsigned long long int) arr_0 [(unsigned char)2])), (var_3))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((arr_21 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */unsigned short) arr_16 [i_9])))), (((/* implicit */unsigned short) arr_26 [i_9 - 2] [i_9 - 2]))))))));
    }
}
