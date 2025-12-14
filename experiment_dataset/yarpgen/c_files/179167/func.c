/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179167
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
    var_15 = ((/* implicit */signed char) var_11);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) max((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1])))), (((unsigned long long int) min((((/* implicit */long long int) arr_3 [i_0])), (-7934089268155324469LL))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)75), (((/* implicit */unsigned char) arr_3 [i_0 - 1]))))) && (((((((/* implicit */_Bool) arr_0 [i_0])) && (arr_3 [i_0 - 1]))) || (((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_1)))))))));
        arr_5 [i_0] = 4294967295U;
        arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_0 - 1] [i_0 - 1]) / (arr_1 [i_0 - 1] [i_0 - 1])))) ? (((arr_1 [i_0 - 1] [i_0 - 1]) + (var_12))) : (((arr_1 [i_0 - 1] [i_0 - 1]) / (arr_1 [i_0 - 1] [i_0 - 1])))));
        var_17 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_3 [i_0 - 1])) / (arr_1 [i_0 - 1] [i_0 - 1]))), (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) arr_3 [i_0 - 1]))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 3; i_2 < 10; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) (unsigned char)79);
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) ((((arr_13 [i_1]) + (((/* implicit */unsigned int) var_12)))) != (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)177)))))))) : (((/* implicit */int) (signed char)119))));
            /* LoopNest 2 */
            for (signed char i_3 = 3; i_3 < 8; i_3 += 2) 
            {
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) (unsigned char)181);
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_18 [i_1] [i_2 - 3]))));
                        arr_19 [i_1] [i_3 + 2] [i_2] [i_1] = arr_17 [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1];
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((arr_14 [i_1] [i_1]), (var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_2 - 1] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) (short)63))))))) : (12657281210461014312ULL)));
                        var_23 = ((/* implicit */signed char) (((-(var_9))) * (((((/* implicit */_Bool) arr_17 [(unsigned short)9] [i_2 - 1] [i_4 - 1] [i_2 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_4]))) : (arr_18 [1ULL] [i_4])))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    {
                        arr_28 [i_1] [i_1] [i_1] [i_1] = ((_Bool) min((((/* implicit */int) arr_7 [i_7] [i_1])), (((int) var_6))));
                        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_14 [i_7] [i_7])))))) ? (((((((/* implicit */int) var_10)) != (((/* implicit */int) (unsigned char)75)))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [i_1])) >= (((/* implicit */int) arr_0 [i_7]))))) : (((((/* implicit */int) var_10)) | (((/* implicit */int) (unsigned char)79)))))) : (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [i_7])) : (-3))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_16 [i_7] [i_1] [i_5] [i_1])) : (((/* implicit */int) (unsigned char)79))))))));
                    }
                } 
            } 
        } 
        arr_29 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (long long int i_8 = 2; i_8 < 8; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                {
                    arr_37 [i_9] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [(signed char)6] [(signed char)6] [i_1]))) & (((-2847997160178828731LL) & (2847997160178828736LL)))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            {
                                arr_42 [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 - 1])) - (((/* implicit */int) (signed char)88))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)78)), (2847997160178828740LL)))) ? ((-(arr_33 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1724932968)) && (((/* implicit */_Bool) arr_35 [i_8] [i_8] [(_Bool)1])))))))) : (((/* implicit */unsigned long long int) min((arr_23 [i_1 - 1] [i_1 - 1] [i_8 - 1]), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)75)), (295285524)))))))));
                                arr_43 [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])) - (((/* implicit */int) arr_17 [i_8 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_44 [i_1 - 1] [i_1] = ((/* implicit */unsigned int) (signed char)66);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_12 = 0; i_12 < 20; i_12 += 4) 
    {
        arr_48 [i_12] = ((/* implicit */signed char) var_5);
        var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
        arr_49 [i_12] [i_12] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_12])) || ((!(((/* implicit */_Bool) 1008243342U))))));
    }
}
