/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119995
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_17 *= ((/* implicit */int) ((unsigned char) ((_Bool) var_2)));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)107);
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((var_11) & (((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_0 [i_1]))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) >= (var_9))))) : (var_9)));
        arr_12 [4LL] |= ((/* implicit */unsigned short) ((int) arr_4 [i_2]));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            var_19 = ((/* implicit */long long int) ((1389525420) >> (((((var_10) - (arr_4 [i_2]))) - (4270246728U)))));
            arr_17 [i_2] [i_2] [(unsigned char)14] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [(_Bool)1])) ? (((/* implicit */int) arr_14 [i_3 + 4] [i_3 - 1])) : (((/* implicit */int) arr_15 [i_2] [i_3 - 2] [i_3]))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-122))));
                        var_21 = ((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 3]))));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1389525425)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) var_12))))) ? (1389525417) : ((~(var_3)))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                            var_24 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) != (var_16))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_25 [i_6] [i_3 - 1] [i_4]) <= (((/* implicit */long long int) var_3)))))) : (arr_10 [i_2])));
                            arr_27 [i_2] [i_3] [i_2] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_13))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1389525426))))) : (((/* implicit */int) arr_21 [i_3] [i_2] [i_3 - 1]))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 19; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_0)) + (1389525447)))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 5309260088916948568LL)) ? (((((/* implicit */unsigned long long int) -5309260088916948569LL)) & (arr_10 [i_4]))) : (((/* implicit */unsigned long long int) arr_22 [i_7 - 2] [i_7 - 1] [i_4] [(unsigned short)20] [i_7 + 1] [i_7 + 1]))));
                            var_27 += ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) == (((((/* implicit */_Bool) arr_3 [i_2])) ? (var_3) : (((/* implicit */int) var_4))))));
                            arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_26 [i_2]);
                        }
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_2] [i_3 + 2])) ? (((/* implicit */int) arr_26 [i_2])) : (((/* implicit */int) arr_26 [i_2]))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned int) ((arr_10 [i_2]) | (((/* implicit */unsigned long long int) -1389525455))));
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11763)) ? (1389525417) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_2] [i_2] [(unsigned char)0] [i_3] [i_3] [i_3])) ? (arr_3 [i_2]) : (((/* implicit */int) arr_30 [i_2] [i_3 - 1] [i_3] [i_3 - 2] [i_2] [i_2]))))) : ((-(arr_1 [i_2]))))))));
        }
        for (unsigned short i_8 = 3; i_8 < 20; i_8 += 4) 
        {
            var_31 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) 1389525405)) < (3505098601698700544LL))))));
            var_32 ^= ((/* implicit */short) (~((+(arr_20 [10] [i_2] [i_2] [i_2])))));
            arr_35 [i_2] [9LL] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1277125643)) ? (arr_22 [i_2] [i_8 - 3] [i_2] [(signed char)2] [i_8 - 1] [i_8]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_2])) + (arr_18 [i_2] [i_2] [i_2]))))));
            arr_36 [i_2] = ((/* implicit */int) var_8);
            var_33 = ((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_8 - 2] [i_8 - 2]))));
        }
    }
    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            for (unsigned char i_11 = 1; i_11 < 20; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    {
                        var_34 = ((/* implicit */long long int) max((var_34), (((((((/* implicit */_Bool) 2256157375U)) ? (8929180863663572455LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))) != (var_9))))))) ^ (((((/* implicit */_Bool) arr_24 [i_12] [i_11] [i_11 + 1])) ? (2834377252093285050LL) : (arr_24 [i_12] [i_12] [i_11 - 1])))))));
                        arr_48 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_9] [i_12])))))));
                    }
                } 
            } 
        } 
        var_35 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((1389525447) >> (((arr_37 [i_9]) - (9813573372693820385ULL)))))) + (arr_9 [i_9])));
    }
    var_36 = ((/* implicit */unsigned short) max((((/* implicit */int) var_15)), (1389525412)));
    var_37 = ((/* implicit */_Bool) var_13);
}
