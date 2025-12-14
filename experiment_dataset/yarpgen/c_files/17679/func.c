/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17679
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
    var_20 ^= ((/* implicit */int) (((_Bool)1) ? (max((var_18), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) (~(1416992509)));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)120))))) : (min((var_12), (((/* implicit */long long int) 2250878348U))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (unsigned short)8128)) : (81426253)))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? (-4078377662463005265LL) : (((/* implicit */long long int) ((/* implicit */int) ((3385165635U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))))))))));
            arr_10 [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((signed char) (_Bool)1));
        }
        var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) var_5)), (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) + (arr_8 [i_1] [i_1]))))));
        var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((var_2) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)8128), (((/* implicit */unsigned short) var_11)))))) : (-1854224225857955271LL)))), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (7912122838362198229ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) : (arr_1 [i_1])))));
    }
    var_25 = ((/* implicit */int) var_11);
    var_26 = ((/* implicit */_Bool) var_18);
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-13098)) - (((/* implicit */int) (signed char)99))))) ? ((+(arr_12 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1111671102) > (((/* implicit */int) (short)0))))))));
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_3)), ((-(arr_13 [i_3]))))))));
        var_29 -= ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
        var_30 += ((/* implicit */signed char) (!((_Bool)0)));
        var_31 ^= ((/* implicit */int) ((unsigned char) 2147483647));
    }
    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_32 ^= ((/* implicit */int) ((max((((/* implicit */long long int) (signed char)112)), (6750781979461534056LL))) > (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4])))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            var_33 *= ((/* implicit */signed char) var_15);
            var_34 = ((/* implicit */unsigned int) 2697153594148519380ULL);
            var_35 = ((/* implicit */long long int) arr_16 [i_5] [i_5]);
            var_36 += ((/* implicit */short) min((8388607ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        }
    }
}
