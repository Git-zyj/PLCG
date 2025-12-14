/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100921
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_9)))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_3)), (arr_2 [i_0] [i_0]))))) : (((((/* implicit */long long int) var_10)) - (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) - (34359738367LL))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 5877312312380746600LL)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (5852342973053459713ULL)))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) var_11))))))) : (2147483647)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_10))));
        arr_7 [18LL] [18LL] = ((/* implicit */unsigned long long int) arr_5 [(unsigned short)6] [i_1]);
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_5 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_16 = (+(((/* implicit */int) ((((/* implicit */_Bool) 2392505762703874813LL)) && (((/* implicit */_Bool) var_7))))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((arr_12 [i_3 - 1] [i_3 - 1] [i_3 + 2]) + (2147483647))) >> (((arr_12 [i_3 + 2] [i_3 + 1] [i_3 + 1]) + (1512113155))))))));
                    }
                    var_18 = (+(((/* implicit */int) (unsigned short)48993)));
                    var_19 += ((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_1] [i_2] [i_3 + 1]));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            arr_22 [i_5] [i_6] [i_6] = ((/* implicit */int) var_3);
            var_20 = ((/* implicit */unsigned short) ((34359738349LL) + (((/* implicit */long long int) min((min((((/* implicit */int) var_0)), (2130308055))), (arr_12 [(signed char)4] [i_6] [i_6]))))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (unsigned short)14614))));
            /* LoopNest 3 */
            for (unsigned short i_7 = 2; i_7 < 15; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) ((unsigned short) var_6));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((2392505762703874819LL), (((/* implicit */long long int) -2130308046)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26329)) ? (-1603142781) : (((/* implicit */int) (unsigned char)241)))))));
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                        var_26 = ((/* implicit */unsigned short) ((long long int) 2130308055));
                        var_27 &= ((/* implicit */unsigned short) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47)))));
                    }
                } 
            } 
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_5] [i_10])) ? (((/* implicit */int) arr_2 [i_10] [i_5])) : (((/* implicit */int) var_7))));
        }
        arr_38 [7] = ((/* implicit */unsigned short) ((signed char) ((arr_8 [i_5] [i_5] [i_5]) ^ (arr_8 [i_5] [i_5] [i_5]))));
    }
}
