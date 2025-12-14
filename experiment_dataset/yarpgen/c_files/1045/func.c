/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1045
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_10))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 ^= ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) var_4)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) >> (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_1] [i_1])), (var_13)))))));
                    var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1]))));
                    var_18 += ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_7 [i_1] [i_0] [i_0] [i_2 - 1])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_3))));
                        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | ((~(5193074236641075697LL)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) ((min((arr_9 [i_0] [7ULL] [i_0] [i_0]), (arr_9 [i_0] [(_Bool)1] [i_3] [i_4]))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_1])))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3]))))))))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */short) arr_5 [i_2 + 2] [i_1]))))) ? (6799970662114280690LL) : (((/* implicit */long long int) ((arr_5 [i_2 + 2] [i_1]) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_1])) : (((/* implicit */int) arr_5 [i_2 - 2] [i_3]))))))))));
                        }
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) min((6799970662114280690LL), (((/* implicit */long long int) 0U))))) : ((+(arr_10 [i_0] [(_Bool)1] [i_0] [i_0] [1LL])))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (12619298774351829727ULL) : (((((/* implicit */_Bool) 134217724U)) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (min((((/* implicit */int) (_Bool)0)), (-200060974))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                {
                    var_25 ^= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) >= (-4919554386605548449LL)))), ((+(((/* implicit */int) arr_1 [(signed char)16]))))));
                    var_26 = ((/* implicit */long long int) arr_9 [i_6] [i_6] [i_6] [i_6]);
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_5] [i_6] [i_7])) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235)))))))) ? (min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_5] [i_7])), (max((((/* implicit */unsigned long long int) arr_13 [(unsigned short)14] [i_5] [i_6])), (arr_16 [i_0] [i_6] [i_7]))))) : (min(((+(arr_16 [i_0] [i_5] [i_7]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned char)239)))))))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)46)) ? (12619298774351829727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                        var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (2781848545U)))) || (((/* implicit */_Bool) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5] [i_7]))))))))) : (((int) (signed char)115))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) arr_19 [i_8]);
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_18 [i_8] [i_8])) && (((/* implicit */_Bool) var_2)))) || ((!(((/* implicit */_Bool) arr_18 [i_8] [i_8])))))))));
        var_32 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((long long int) var_7)))) & (((((((/* implicit */_Bool) 144115188075855871LL)) ? (arr_18 [9U] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))))) | (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))));
    }
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
    {
        var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_9])) ? (((((/* implicit */_Bool) -2263497262696862938LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)102)))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 3; i_10 < 23; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                {
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) arr_23 [i_9] [(short)16]))));
                    var_35 += ((/* implicit */_Bool) min((((/* implicit */int) arr_25 [i_9] [i_9] [i_11])), ((+(((/* implicit */int) arr_22 [2LL]))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
        {
            for (unsigned short i_14 = 4; i_14 < 18; i_14 += 2) 
            {
                {
                    var_36 *= ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_14] [i_14 + 1] [i_14 + 1]))))) < ((~(min((((/* implicit */long long int) arr_8 [i_12])), (var_7)))))));
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (+((-(((arr_30 [i_12] [i_13] [12]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_13]))))))))))));
                    var_38 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_25 [i_12] [i_12] [(_Bool)1])) ? (var_3) : (((/* implicit */long long int) arr_33 [i_12] [i_14 - 2] [i_14]))))));
                    var_39 &= ((/* implicit */unsigned char) ((288230307432235008ULL) >= (((((/* implicit */_Bool) arr_6 [i_14 + 1] [i_14 - 1])) ? (arr_6 [i_14 - 3] [i_14 - 3]) : (((/* implicit */unsigned long long int) 2781848545U))))));
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-98)) ? (var_12) : (((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) (signed char)96)))))));
}
