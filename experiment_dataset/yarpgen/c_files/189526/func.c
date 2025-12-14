/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189526
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) arr_0 [i_0]);
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_17 ^= ((/* implicit */short) arr_3 [i_0] [i_3]);
                        var_18 = ((536870911ULL) == (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_7 [i_1] [i_2] [i_1] [i_0]))))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */_Bool) arr_2 [i_1] [i_0]);
        }
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) 9))));
            var_21 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_11 [i_0] [i_4] [18ULL] [i_4])) < (var_0)));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned short i_7 = 3; i_7 < 19; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_0))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) arr_18 [i_0] [i_4] [i_5] [i_6] [i_0]))))) ? (((((/* implicit */_Bool) ((var_12) - (var_12)))) ? (1125865547104256ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)14)) < (((/* implicit */int) arr_21 [i_0] [i_8] [i_9])))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 34359738352ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_3 [(_Bool)1] [i_9]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) min((var_13), (((/* implicit */unsigned char) var_7)))))))));
                    var_25 = ((/* implicit */long long int) ((signed char) ((min((var_12), (((/* implicit */unsigned long long int) arr_17 [i_10] [i_8] [i_8] [i_0])))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))));
                    var_26 = ((/* implicit */unsigned char) (-(max((arr_11 [6ULL] [i_9] [i_8] [(_Bool)1]), (((/* implicit */int) var_9))))));
                }
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)0)), (((arr_31 [i_12] [i_8] [(short)15]) ? (((((/* implicit */_Bool) (signed char)0)) ? (34359738352ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                            var_28 = ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)7))))))) ? (((max((((/* implicit */unsigned long long int) (unsigned char)235)), (18446744073709551615ULL))) / (((((/* implicit */_Bool) arr_23 [i_12] [i_9] [i_9] [i_8])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */unsigned char) (~((+((-(((/* implicit */int) (signed char)-1))))))));
        }
        for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            arr_37 [i_13] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
            /* LoopNest 2 */
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                for (unsigned short i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) (-(18446744073709551610ULL)));
                        var_31 = ((/* implicit */int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(unsigned short)8] [i_13] [i_14])) ? (arr_24 [i_0] [i_13] [(unsigned char)7] [i_15]) : (((/* implicit */int) (short)32767))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (arr_40 [i_15] [i_14] [i_13] [i_0]))))))));
                    }
                } 
            } 
        }
        var_32 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_5))))));
    }
    var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((_Bool) var_12)) || (((/* implicit */_Bool) var_13)))))));
    var_34 = ((/* implicit */long long int) var_6);
}
