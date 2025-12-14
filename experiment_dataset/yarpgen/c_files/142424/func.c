/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142424
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */long long int) (((((~(((/* implicit */int) (unsigned char)52)))) + (2147483647))) >> (((((/* implicit */int) var_3)) - (49023)))))) * (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_3)))))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)2025))))) + (-7611628638095788645LL))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_15 = ((/* implicit */long long int) arr_1 [i_0]);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            arr_12 [i_0] [i_1] [i_1] [(unsigned short)1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_4])))) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_0 [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2047U))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-9))))))));
                            var_16 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned char)255))))), (((((/* implicit */_Bool) 4294965249U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (2147483647ULL)))))));
                            arr_13 [i_4] [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) == (arr_4 [i_0]))))));
                            var_17 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_3] [i_4]))))));
                        }
                        arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] = ((/* implicit */int) (short)31054);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_18 += ((/* implicit */long long int) arr_3 [i_0] [i_5] [i_0]);
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                arr_23 [i_0] [i_0] = ((/* implicit */short) var_7);
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_6 + 1])) ? (arr_4 [i_6 + 1]) : (arr_4 [i_6 + 1])));
            }
            for (unsigned int i_7 = 1; i_7 < 13; i_7 += 3) 
            {
                arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_5]);
                arr_28 [(unsigned short)10] &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)31054)) ? (((/* implicit */int) arr_3 [(_Bool)1] [i_5] [i_7])) : (var_1)))));
            }
            arr_29 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)29)) > (((/* implicit */int) (unsigned char)255)))) ? (((/* implicit */int) (!(var_5)))) : (((((/* implicit */int) (signed char)-67)) * (((/* implicit */int) var_2))))));
        }
        for (unsigned short i_8 = 2; i_8 < 12; i_8 += 2) 
        {
            var_20 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)63510)) && (((/* implicit */_Bool) arr_30 [i_0] [i_8 + 2])))) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)25190))))) : (min((var_12), (((/* implicit */long long int) arr_11 [i_8] [i_8] [i_8] [i_8] [i_0] [i_0])))))) : (((/* implicit */long long int) ((unsigned int) (unsigned short)65535)))));
            arr_33 [i_0] = ((/* implicit */signed char) (((_Bool)0) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 10124642242633861217ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2047))))))));
            var_21 = ((/* implicit */unsigned char) var_9);
            var_22 ^= ((/* implicit */unsigned char) (signed char)96);
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) min((var_23), (min((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)8))))) ? (min((((/* implicit */unsigned int) (signed char)-1)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_8]))))), (((/* implicit */unsigned int) (~(var_13))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 2; i_11 < 10; i_11 += 3) 
                        {
                            arr_43 [i_0] = ((/* implicit */int) (((!((!(((/* implicit */_Bool) (signed char)53)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_12)))))))) : (((((/* implicit */_Bool) (unsigned short)9244)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_0] [i_0])))))) : (((((/* implicit */_Bool) -7672264025801995051LL)) ? (arr_8 [i_0] [13] [i_9] [i_10] [i_11]) : (((/* implicit */unsigned long long int) var_13))))))));
                            arr_44 [10LL] [10LL] [i_9] [i_10] [i_0] [3U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_8] [i_0] [i_10] [i_11] [(short)6])) ? (arr_11 [i_0] [i_8 - 2] [i_0] [i_10] [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (unsigned char)209))))) == (((((/* implicit */_Bool) 2596830094U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)107)))))))) : (arr_32 [i_0])));
                            arr_45 [i_0] [i_10] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-9)) ? (1698137202U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32256)))))) ? (((((/* implicit */_Bool) 963100758967808472LL)) ? (arr_30 [i_11 - 2] [i_11 + 3]) : (arr_30 [i_11 + 2] [i_11 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_11 + 4] [i_11 + 2])) && (((/* implicit */_Bool) arr_30 [i_11 + 3] [i_11 + 3]))))))));
                        }
                    }
                } 
            } 
        }
    }
}
