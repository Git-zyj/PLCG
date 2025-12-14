/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108046
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
    var_12 = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) var_5)))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_1 [i_0]))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) (~((+(arr_0 [i_0]))))))));
        arr_4 [i_0] = ((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))) & (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))));
    }
    for (signed char i_1 = 1; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)113)), ((~(max((2793148046243670282ULL), (((/* implicit */unsigned long long int) (signed char)-114))))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) max((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 1])))))));
        arr_8 [i_1] = ((/* implicit */int) ((((arr_6 [i_1 - 1]) && (((/* implicit */_Bool) 15653596027465881333ULL)))) && (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 15653596027465881340ULL))))));
    }
    for (signed char i_2 = 1; i_2 < 23; i_2 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((int) arr_11 [i_2] [i_2 + 1])))) && (((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 - 1]))));
        arr_12 [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_2 - 1])) ? ((+(((/* implicit */int) arr_9 [i_2] [i_2])))) : (((/* implicit */int) arr_10 [i_2])))), (((arr_6 [i_2 - 1]) ? (((/* implicit */int) arr_10 [i_2 + 2])) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_3))))))));
        var_15 = ((/* implicit */signed char) ((((unsigned long long int) max((arr_11 [3LL] [i_2]), (arr_11 [i_2] [i_2])))) >= (((/* implicit */unsigned long long int) ((-48408748) & (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_5 [i_2] [i_2 - 1]))))))))));
    }
    for (signed char i_3 = 1; i_3 < 23; i_3 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_11)))) + (((/* implicit */int) arr_5 [i_3 + 2] [i_3 - 1])))) + (((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 + 2])) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 2])) : (((/* implicit */int) var_10))))));
        var_17 = ((/* implicit */int) (~(((unsigned int) arr_10 [i_3]))));
        var_18 = ((/* implicit */short) arr_13 [i_3 - 1] [i_3 + 1]);
    }
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (~(15653596027465881303ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_10 [i_4])) - (((/* implicit */int) var_7))))));
                    var_21 -= ((/* implicit */short) ((unsigned char) arr_20 [i_4] [i_5]));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)78)) <= (((/* implicit */int) (short)32767)))))));
                }
            } 
        } 
        arr_23 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_4] [6])) & (((/* implicit */int) var_3))))) ? (max((((/* implicit */int) (unsigned char)2)), (var_9))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)12098))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-116))))) : (((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4])))))));
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((max((arr_16 [i_4] [i_7]), (((/* implicit */unsigned int) var_6)))), (((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_4] [i_7]))))))))));
            var_24 ^= ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)42185)) : (var_9))), (((/* implicit */int) var_0)))), ((+(((/* implicit */int) (unsigned char)21))))));
            var_25 += ((/* implicit */int) ((((/* implicit */long long int) (+(arr_16 [i_4] [i_7])))) != (((((/* implicit */_Bool) max((arr_18 [i_4]), (arr_9 [19] [i_7])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_4]))))) : (((long long int) var_8))))));
            var_26 = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) arr_20 [i_7] [5LL])))), (((((/* implicit */int) arr_13 [i_4] [i_4])) & (((/* implicit */int) arr_25 [i_4] [i_7]))))))));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            arr_30 [i_8] [i_8] = ((/* implicit */short) arr_18 [i_4]);
            arr_31 [i_4] [i_4] [i_8] = arr_17 [i_4];
            arr_32 [i_8] [i_8] = ((/* implicit */unsigned int) (unsigned char)137);
        }
    }
    for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_9] [i_9])) << (((max((17334177459658906760ULL), (((/* implicit */unsigned long long int) arr_24 [i_9] [i_9])))) - (17334177459658906758ULL)))))) ? ((-(((/* implicit */int) arr_33 [i_9])))) : (((((((/* implicit */_Bool) (signed char)-63)) || (((/* implicit */_Bool) (short)0)))) ? (arr_17 [i_9]) : (arr_17 [i_9])))));
        var_27 -= ((/* implicit */unsigned char) var_0);
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (+(1056003698U))))));
    }
    for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
    {
        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_21 [i_10] [i_10] [i_10] [i_10]), (arr_21 [i_10] [i_10] [i_10] [i_10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_25 [i_10] [i_10])))) : (max((arr_21 [i_10] [i_10] [i_10] [i_10]), (((/* implicit */unsigned int) (_Bool)1))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_11 = 1; i_11 < 9; i_11 += 1) 
        {
            var_30 -= ((/* implicit */unsigned long long int) ((((int) var_9)) << (((7473190239206396598LL) - (7473190239206396596LL)))));
            arr_40 [6U] [6U] |= 2612527837753065669ULL;
        }
    }
}
