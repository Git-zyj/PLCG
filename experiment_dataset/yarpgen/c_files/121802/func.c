/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121802
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
    var_15 = ((/* implicit */int) ((min((((/* implicit */long long int) (-(var_9)))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-1476172433297532143LL))))) - ((-(min((((/* implicit */long long int) (_Bool)1)), (var_6)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_10)), (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)32761))))), (arr_1 [i_0])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 12; i_1 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_0 [i_0]))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_1 - 1])))) : (((/* implicit */int) var_14))));
            var_18 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_13)) + (2147483647))) >> (((((/* implicit */int) var_1)) - (11317)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3))))) : (arr_4 [i_0] [i_0]));
            var_19 += ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3359923048U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)28646))))) : (var_0)));
        }
        for (int i_2 = 3; i_2 < 12; i_2 += 2) /* same iter space */
        {
            var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))));
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 2034551964U)) ? (((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) (_Bool)1))))) ? ((-(arr_4 [i_0] [i_2 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (2142476591U)));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 12; i_3 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        {
                            arr_20 [i_4] [i_0] [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [10LL])) || (((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) arr_9 [i_6] [2U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_4]))) : (var_4)))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((arr_5 [i_5] [i_4]) ? (var_6) : (((/* implicit */long long int) var_7)))))));
                            arr_21 [i_6 - 1] [i_6] [i_4] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) arr_19 [i_4] [i_4] [(unsigned short)5] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_1))))) != (var_6)));
                        }
                    } 
                } 
            } 
            arr_22 [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0)))) ? (((((/* implicit */_Bool) var_14)) ? (var_9) : (arr_9 [(signed char)3] [i_3]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9))));
        }
        for (int i_7 = 3; i_7 < 12; i_7 += 2) /* same iter space */
        {
            arr_27 [i_7] [i_7] [12U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) arr_23 [i_0])) ? (((/* implicit */int) var_8)) : (var_7))) : (((/* implicit */int) min((var_12), (arr_13 [(signed char)6]))))))) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (signed char)-20))))) : (min((((/* implicit */unsigned int) min((((/* implicit */short) var_12)), (var_13)))), (min((var_4), (var_9))))));
            arr_28 [i_0] [i_7 - 1] [(signed char)8] = ((/* implicit */unsigned char) min((var_12), (((/* implicit */signed char) ((((/* implicit */int) var_3)) > ((+(((/* implicit */int) (unsigned short)37785)))))))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    {
                        var_23 &= ((/* implicit */long long int) min((min((3238385079U), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_9)) : (var_0)))))))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))) >= (var_0))))) - (var_9)));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_37 [i_10] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_13)))) ? (var_7) : (((((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) var_12)) : (var_7)))));
        var_25 *= ((/* implicit */unsigned char) ((538850428) % (((/* implicit */int) (signed char)32))));
    }
}
