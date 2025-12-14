/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121751
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
    var_10 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) min((var_1), (0)))) <= (((((/* implicit */unsigned long long int) var_0)) * (140737488355327ULL))))), ((!(((/* implicit */_Bool) var_9))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_11 ^= ((/* implicit */unsigned char) (((~((~(((/* implicit */int) var_4)))))) & (((/* implicit */int) ((min((((/* implicit */int) var_4)), (var_8))) == (((/* implicit */int) arr_0 [i_0])))))));
        var_12 = ((/* implicit */signed char) min(((-(18446603336221196300ULL))), (((140737488355306ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1560)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */_Bool) 10580223539955957893ULL);
            var_14 = ((/* implicit */signed char) 18446603336221196290ULL);
            arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1] [i_2])) & (0)));
            arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)511))) : (18446603336221196270ULL)));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] [i_3] = ((/* implicit */unsigned int) (+(arr_9 [i_1] [i_3])));
            arr_12 [i_3] [i_1] [i_1] = ((/* implicit */long long int) ((int) (unsigned char)195));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_15 = ((/* implicit */unsigned int) ((int) 140737488355334ULL));
                var_16 = ((/* implicit */int) ((unsigned short) arr_15 [i_1] [i_1] [i_1]));
                var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_1)))));
            }
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                for (short i_7 = 1; i_7 < 18; i_7 += 2) 
                {
                    for (int i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        {
                            arr_27 [i_1] [(unsigned short)9] [i_1] [i_7 - 1] [i_8] = ((/* implicit */unsigned char) (-(arr_14 [i_1] [i_8 - 1] [(signed char)15])));
                            var_18 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_8] [i_6] [(signed char)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1] [i_4] [i_6])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_9 = 2; i_9 < 15; i_9 += 3) 
        {
            var_19 = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) arr_26 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) : (140737488355325ULL))), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_9]))))));
            arr_32 [i_1] [i_9] [i_1] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (signed char)116)) && (((/* implicit */_Bool) arr_30 [i_9 + 1] [i_1])))));
            arr_33 [i_1] [16] = (!(((/* implicit */_Bool) ((arr_30 [i_9 + 4] [i_1]) << (((/* implicit */int) (unsigned short)16))))));
        }
        arr_34 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446603336221196270ULL)) ? (arr_29 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1] [i_1])))))) ? (((/* implicit */int) max(((unsigned char)123), ((unsigned char)14)))) : (max((var_8), (((/* implicit */int) arr_4 [i_1]))))));
        arr_35 [i_1] [i_1] = ((/* implicit */signed char) var_7);
    }
}
