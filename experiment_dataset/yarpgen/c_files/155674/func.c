/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155674
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                var_17 += ((/* implicit */signed char) arr_4 [i_0] [i_0] [(unsigned short)10]);
                var_18 ^= (_Bool)1;
                var_19 ^= ((/* implicit */unsigned short) ((arr_4 [i_0 + 1] [(unsigned short)1] [i_1 + 1]) & ((-(arr_4 [9LL] [i_1] [i_1 - 1])))));
                var_20 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) min((arr_5 [i_0 + 1]), (((/* implicit */short) (_Bool)1))))))) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_1 + 4])) : (((/* implicit */int) (_Bool)1))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((max(((+(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (short)32756)))))) % (((/* implicit */int) (_Bool)1)))))));
            }
            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1 + 4]))) : (arr_4 [7U] [7U] [i_0 + 1]))), (((/* implicit */unsigned long long int) var_1)))))));
            arr_8 [i_1] = var_10;
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 11; i_4 += 2) 
                {
                    for (short i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        {
                            var_23 += ((/* implicit */short) (_Bool)1);
                            arr_17 [i_3] [2ULL] [i_0 + 1] [i_0 + 1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) arr_7 [i_5 + 4] [(_Bool)1] [(unsigned short)3])))), (((/* implicit */int) (unsigned short)59157)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3] [i_0])) && (((/* implicit */_Bool) (unsigned short)30875)))))) ? (var_5) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-8)), (min((((/* implicit */int) arr_2 [i_0] [i_1])), (254))))))));
            }
        }
        var_25 = ((/* implicit */unsigned short) (((!(arr_1 [(short)9] [i_0 + 1]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)45798)) ? (((/* implicit */int) (unsigned short)45806)) : (((/* implicit */int) (short)-29771))))) <= (var_3)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)12591)) >= ((~(((/* implicit */int) (_Bool)1)))))))));
    }
    var_26 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65521))))), (((((/* implicit */_Bool) (short)-17286)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) : (2735969490798223856ULL)))))));
    /* LoopSeq 1 */
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        arr_20 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_6] [i_6])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12130)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-15)) <= (((/* implicit */int) arr_18 [i_6] [i_6])))))) : (max((((/* implicit */unsigned long long int) (short)-18601)), (14663612068553974621ULL))))))));
        arr_21 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_6]))))) ? (((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_19 [i_6])))) : (((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)255))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((min((((/* implicit */int) (unsigned char)254)), (var_1))) > (((/* implicit */int) arr_18 [i_6] [i_6]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_19 [(signed char)10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((unsigned int) arr_18 [i_6] [(unsigned char)2])))))))));
    }
}
