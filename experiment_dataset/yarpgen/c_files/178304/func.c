/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178304
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
    var_11 = ((/* implicit */int) var_0);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */unsigned int) (short)0)), (arr_2 [i_0 - 1]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((_Bool) 0ULL));
            arr_6 [i_0] [i_1] [2ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0 + 3]))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            var_14 = ((/* implicit */short) arr_2 [i_0 + 2]);
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) arr_2 [i_0 - 3])) : (((((/* implicit */_Bool) (unsigned char)16)) ? (0ULL) : (0ULL)))));
        }
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)53081)), (arr_2 [i_0])))), (max((((/* implicit */long long int) var_5)), (26LL)))))) ? (((9223372036854775807LL) / (arr_4 [i_0 - 3] [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2]))))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_5 [i_3 + 3])) ? (arr_5 [i_3 + 2]) : (((/* implicit */long long int) 2126079998)))))))));
        var_18 = ((/* implicit */unsigned short) (-(min((3278163777882267436ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50400))) > (var_0))))))));
    }
    for (unsigned char i_4 = 4; i_4 < 21; i_4 += 2) 
    {
        var_19 = ((/* implicit */short) (~((-2147483647 - 1))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50396)) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_5)))))))) ? (max((4450890967736884848ULL), (((/* implicit */unsigned long long int) (unsigned short)15120)))) : ((~(arr_12 [i_4 - 4])))));
        var_21 ^= ((/* implicit */unsigned long long int) var_2);
        var_22 = ((/* implicit */short) ((((7753254385795253017LL) | (((/* implicit */long long int) ((/* implicit */int) (short)29488))))) < (min((arr_11 [1] [i_4]), (((/* implicit */long long int) 2126079992))))));
    }
    for (short i_5 = 2; i_5 < 23; i_5 += 2) 
    {
        arr_16 [(_Bool)1] |= ((/* implicit */unsigned short) (_Bool)1);
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    {
                        arr_23 [i_5 + 1] [i_5 + 1] [(short)20] [i_7] [3ULL] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_15 [i_5 - 1]), (arr_15 [i_5 - 1])))) ? (((long long int) arr_15 [i_5 - 1])) : (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (arr_15 [i_5 - 1]))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_5 + 1])) * (((/* implicit */int) ((short) (short)29488))))))));
                        var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-12589)) ? (4271601080215290957LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-29489))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (short)29488)), ((unsigned short)22005))))));
                        arr_24 [i_5] [i_7] [i_7] [i_8] [i_5] [i_7] = ((/* implicit */int) -1263738777933468502LL);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max((min((((/* implicit */unsigned long long int) (short)13565)), (arr_14 [i_5 - 2]))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-26584))) <= (var_0))))) : (0ULL))))))));
    }
}
