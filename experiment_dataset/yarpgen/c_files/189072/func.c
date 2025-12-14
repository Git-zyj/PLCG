/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189072
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
    var_17 = ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) ((short) ((var_8) != (((/* implicit */int) (short)2047)))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_16)) > (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_0])) || (((/* implicit */_Bool) ((unsigned char) arr_8 [i_0] [i_1] [i_0]))))))));
                        arr_12 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-2047)) ? (-333926023) : (((/* implicit */int) (signed char)0))));
                        var_20 = ((/* implicit */signed char) ((short) ((signed char) ((int) arr_2 [i_0]))));
                        var_21 |= ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_1] [i_1] [i_2]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        arr_18 [i_0 - 1] [i_5] [i_4] [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) < (arr_4 [i_0 - 1])))) & ((~(((/* implicit */int) (unsigned short)0))))));
                        arr_19 [i_5] [i_1] [12ULL] [i_5] |= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 0LL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_5 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1] [i_4] [i_5])))))))))));
                        arr_20 [i_0] [i_0] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((var_3) ^ (((/* implicit */int) var_0)))), (((/* implicit */int) ((_Bool) (unsigned char)66)))))), (arr_17 [i_0])));
                    }
                } 
            } 
            arr_21 [i_0] = ((/* implicit */short) (-(arr_10 [i_0] [i_0])));
        }
        arr_22 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1])) > (((/* implicit */int) (unsigned short)65535)))) ? (((((/* implicit */int) (short)0)) ^ (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))) : (max((arr_0 [i_0]), (((/* implicit */int) var_10)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-1)))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((arr_5 [i_8]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (min((arr_5 [i_8]), (((/* implicit */unsigned int) (short)2034))))));
                        var_24 = ((/* implicit */long long int) max((((/* implicit */int) ((short) arr_1 [i_0 - 1]))), ((~(((int) var_0))))));
                    }
                } 
            } 
        } 
        arr_31 [i_0] = ((/* implicit */int) min((((((((/* implicit */unsigned long long int) arr_24 [i_0 - 1] [i_0])) <= (var_7))) ? (((arr_2 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_29 [i_0])), (arr_17 [i_0])))) || (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])))))));
    }
    var_25 |= ((((_Bool) var_8)) ? ((~(((/* implicit */int) var_1)))) : ((-(((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (unsigned char)170)) - (162))))))));
}
