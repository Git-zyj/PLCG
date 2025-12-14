/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170311
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
    var_20 = ((/* implicit */unsigned char) ((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(18446744073709551589ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : ((~(4294967295U)))));
        var_22 = ((4294967284U) - (((var_14) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (unsigned int i_4 = 3; i_4 < 10; i_4 += 1) 
                {
                    {
                        var_23 = ((/* implicit */int) ((unsigned long long int) arr_9 [i_4 - 2] [i_4 - 2] [i_1]));
                        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(12U)))) ? (var_14) : (4063847723U)));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */int) ((((/* implicit */int) ((short) 1646307427512597150LL))) < (0)));
                            var_26 = ((/* implicit */signed char) 4294967284U);
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) -197145596206020250LL))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_0 [i_4 - 3]))));
                            var_28 = ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_5]));
                        }
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned char) max((var_29), (arr_4 [i_1])));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967282U)) ? (arr_15 [i_1] [i_1] [(short)9] [i_1]) : (arr_15 [i_1] [i_1] [i_1] [i_1])));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            arr_22 [(signed char)6] = ((/* implicit */unsigned short) (-(arr_2 [i_6])));
            var_31 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_16))));
        }
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_6])))), (((/* implicit */int) arr_24 [i_8] [i_8] [i_8]))))));
            var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
            var_34 = ((/* implicit */unsigned long long int) var_16);
        }
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) min((((/* implicit */int) ((short) var_10))), ((~(((/* implicit */int) arr_6 [i_6] [i_6]))))))) != (arr_13 [3ULL] [i_9] [i_9] [i_9] [3ULL] [i_9])));
            arr_28 [(_Bool)1] [i_9] = min((((/* implicit */unsigned long long int) ((unsigned int) -1))), (((unsigned long long int) 4260878421U)));
        }
        arr_29 [i_6] [i_6] = ((/* implicit */_Bool) max((((min((((/* implicit */long long int) 4260878421U)), (arr_20 [(_Bool)0] [i_6]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(_Bool)1]))) : (((((/* implicit */_Bool) 16901221200590808266ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967283U))))))));
        var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6] [(unsigned char)2] [i_6] [6] [i_6] [i_6])) ? (((/* implicit */unsigned int) -208405133)) : (9U))))));
        var_37 *= ((/* implicit */long long int) (((~(((/* implicit */int) var_8)))) >= (((/* implicit */int) ((unsigned short) (unsigned short)0)))));
        var_38 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_13 [i_6] [i_6] [i_6] [0ULL] [i_6] [i_6]))))))) ^ (max((((/* implicit */unsigned int) var_8)), (((unsigned int) var_5))))));
    }
}
