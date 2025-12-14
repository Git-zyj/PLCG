/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172818
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
    var_15 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_16 += (((_Bool)1) ? (min((((/* implicit */unsigned long long int) ((_Bool) 1482036344U))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))) : ((-(0ULL))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [0U] [9] [i_0] [i_0] = 3633841659U;
                        /* LoopSeq 2 */
                        for (short i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)20919)) + (((/* implicit */int) (short)20916))))) ? (((/* implicit */int) arr_1 [i_4 - 1] [i_4 + 2])) : (((/* implicit */int) arr_13 [(unsigned short)2] [(unsigned short)2] [i_2] [3LL] [i_4 + 2] [i_2])))) : (((/* implicit */int) var_11))));
                            var_18 *= ((/* implicit */short) max((((/* implicit */unsigned short) max((arr_8 [i_4 + 2] [12LL] [(unsigned char)4] [(short)12] [(signed char)4]), (arr_8 [i_4 + 2] [i_1] [i_1] [15LL] [i_4 - 3])))), (var_4)));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_0))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_0))) ? (-6601331437774783358LL) : (((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned short)24416)))), ((-(((/* implicit */int) (unsigned char)120))))))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (short)20919))));
                            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(unsigned char)9] [i_5 + 1] [i_5 - 2] [i_5 + 1] [5LL] [5LL]))));
                            var_23 = ((int) arr_6 [i_5 - 1] [i_5 - 2] [i_5 - 1] [(unsigned short)9]);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> ((((-(6601331437774783358LL))) + (6601331437774783389LL)))));
        arr_20 [i_6] = arr_18 [i_6];
        arr_21 [i_6] [(unsigned char)18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6601331437774783358LL)) ? (6601331437774783358LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57823))))))));
        arr_22 [i_6] = ((/* implicit */long long int) var_3);
    }
    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 3) 
    {
        arr_25 [(short)2] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) arr_9 [i_7 + 1])) ? (arr_9 [i_7]) : (((/* implicit */int) arr_19 [i_7 - 1])))) : (min((((/* implicit */int) arr_15 [15LL] [i_7 - 1] [i_7 + 1] [i_7 + 1] [(unsigned char)5] [(unsigned char)5])), (arr_9 [i_7 + 1])))));
        arr_26 [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) arr_8 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1])) : (((/* implicit */int) arr_8 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1])))) + (((int) ((((/* implicit */_Bool) arr_9 [(unsigned short)11])) ? (var_7) : (arr_16 [i_7] [i_7 + 1] [i_7 + 1] [(unsigned short)16] [i_7 + 1]))))));
    }
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 9; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (short i_10 = 2; i_10 < 8; i_10 += 4) 
            {
                {
                    arr_36 [4LL] [i_9] [i_9] [i_10 - 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_8 - 1] [i_8 - 1] [i_10 + 2] [i_10 + 2] [i_8 - 1] [i_8 + 1]))));
                    var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (1489941924U) : (var_13))))));
                    arr_37 [i_8] [i_9] [(short)4] = ((/* implicit */unsigned short) var_5);
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) % (((/* implicit */int) arr_10 [i_10 + 2] [(_Bool)1] [i_10 + 2] [i_10 - 2]))));
                }
            } 
        } 
        var_27 = ((long long int) arr_14 [2ULL] [(unsigned short)7] [i_8 - 1] [i_8 - 1] [i_8]);
    }
}
