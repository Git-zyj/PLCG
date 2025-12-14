/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182185
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((((-(((/* implicit */int) var_8)))) ^ (((/* implicit */int) var_0)))) : (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)64862), (((/* implicit */unsigned short) (signed char)64))))) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) var_2)))) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) min(((signed char)-121), (((/* implicit */signed char) ((_Bool) (short)-29634))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 = (+(((((((/* implicit */int) arr_2 [i_0])) ^ (var_4))) / (((/* implicit */int) (unsigned short)679)))));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (signed char)125))))));
                }
            } 
        } 
        var_12 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) min(((short)0), (((/* implicit */short) (!(((/* implicit */_Bool) (short)0)))))))), ((-(arr_6 [i_0])))));
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4294967295U)))) ? (((/* implicit */int) max((var_0), (arr_2 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))) ? (var_4) : (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (signed char)-46)))));
    }
    for (int i_3 = 1; i_3 < 10; i_3 += 3) 
    {
        arr_12 [0U] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) : (4405393411383136731ULL))))) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) : (2876013279U))), (((/* implicit */unsigned int) (unsigned short)673)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 827439707)) > (2027807874U)))))));
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            arr_17 [4LL] [i_3] [i_4] = ((/* implicit */short) (((~(((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_4])))))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_3 - 1] [i_3 + 3] [i_3 + 1])) : (min((var_4), (((/* implicit */int) var_8))))))));
            var_14 -= ((/* implicit */unsigned char) arr_13 [i_4] [i_4] [i_3 + 4]);
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned char) (unsigned char)96)))));
        }
        for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_16 ^= ((/* implicit */signed char) ((long long int) ((unsigned char) var_7)));
            /* LoopNest 2 */
            for (long long int i_6 = 1; i_6 < 11; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_17 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)22896))));
                        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_8 = 2; i_8 < 12; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(min((arr_31 [i_5] [10U] [i_8] [i_9] [i_8]), (((/* implicit */long long int) min((2027807874U), (((/* implicit */unsigned int) var_6))))))))))));
                        var_20 = ((/* implicit */unsigned long long int) var_0);
                        arr_32 [i_3] [i_5] [i_3] [i_8] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_8]))) | (var_1))), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64862))) : (1486774980U))))) : (((((/* implicit */_Bool) (+(0U)))) ? (arr_27 [i_3] [i_8 + 2] [(_Bool)1] [i_8 + 2] [i_9]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))))));
                        var_21 *= ((/* implicit */unsigned char) (~(((((13407847505458701295ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))))) ? (((/* implicit */int) ((unsigned char) arr_9 [i_3]))) : ((~(((/* implicit */int) var_8))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            arr_35 [i_3] [i_3] [i_8] [(unsigned char)13] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((min((((/* implicit */unsigned long long int) arr_11 [i_5] [i_3])), (var_1))) / (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_0 [i_10])) ? (((/* implicit */int) arr_29 [i_3 + 4] [i_5] [i_8])) : (((/* implicit */int) var_8)))))))))));
                        }
                    }
                } 
            } 
        }
        for (short i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            arr_39 [i_3 + 2] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_28 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 3])) + (((/* implicit */int) arr_28 [i_3 + 4] [i_3] [i_3 + 4] [i_3 - 1])))) > (((/* implicit */int) arr_13 [i_11] [i_11] [i_3 + 3]))));
            arr_40 [6ULL] [i_3 + 4] [6ULL] &= ((/* implicit */int) arr_14 [i_3 + 4] [i_11] [i_11]);
        }
        /* LoopNest 2 */
        for (unsigned int i_12 = 1; i_12 < 11; i_12 += 3) 
        {
            for (short i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                {
                    arr_47 [i_13] [i_3] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3 + 2] [i_3 + 4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((arr_2 [i_3 - 1]), (arr_2 [i_3 + 3])))) : (((((/* implicit */int) arr_2 [i_3 + 1])) + (((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1]))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((arr_4 [i_3]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) arr_42 [i_3 - 1] [i_12 + 2])) : (max((arr_34 [i_3] [0U] [i_13]), (((/* implicit */long long int) var_5))))))))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((unsigned int) (signed char)126))) : (min((arr_19 [(_Bool)1] [i_13]), (((/* implicit */long long int) var_9)))))), (min((((/* implicit */long long int) ((signed char) arr_45 [i_3]))), (max((((/* implicit */long long int) (_Bool)0)), (arr_41 [(signed char)10] [i_3] [i_3 + 3]))))))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */_Bool) min((var_25), (var_5)));
}
