/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180896
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (unsigned short)16516)))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [i_1])))) & (((var_4) / (arr_2 [i_1]))))) : (((/* implicit */long long int) min((arr_3 [i_1] [i_0] [i_0]), ((+(arr_3 [(short)8] [i_0] [i_0]))))))));
                var_11 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16516))))))), (arr_1 [i_1] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)49019))))) && ((!(((/* implicit */_Bool) arr_11 [i_1] [i_4] [i_3] [(_Bool)1] [19LL] [i_1])))))))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_3])), (arr_13 [i_1] [i_3] [i_2 - 2] [i_1] [i_1]))), (((/* implicit */unsigned long long int) (+(var_4))))))) ? (min((min((arr_2 [i_1]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) max(((unsigned short)26638), ((unsigned short)16516)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_3] [(unsigned short)15] [(unsigned short)15] [(unsigned char)6] [i_1])))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */_Bool) (~((~(arr_13 [i_1] [i_0 + 1] [i_1] [19] [(unsigned short)2])))));
                var_15 = ((/* implicit */signed char) (((-(((unsigned int) arr_6 [i_1] [i_1] [i_1] [i_0])))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [15LL] [15LL])) ? (((/* implicit */int) arr_11 [i_1] [(_Bool)1] [i_0] [i_1] [i_0] [i_1])) : (arr_10 [i_0] [i_1] [i_0]))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned char) ((arr_13 [i_7] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))));
                            arr_26 [6LL] [i_6] [i_7] [i_7] [i_8] [6LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_24 [(_Bool)1] [(unsigned short)0] [i_7] [i_7] [i_7]) | (((/* implicit */long long int) arr_8 [i_9] [(_Bool)1] [i_7] [(short)17] [i_6] [(_Bool)1]))))) ? (((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) var_9)) : (var_6))) : (arr_10 [i_8 - 1] [i_7] [i_8 - 1])));
                        }
                    } 
                } 
            } 
            arr_27 [i_6] = ((/* implicit */unsigned short) (((-(var_5))) + (((/* implicit */long long int) ((arr_9 [i_5] [i_5] [(unsigned short)8] [i_6]) | (arr_3 [i_5] [i_5] [15]))))));
            var_17 = ((/* implicit */unsigned short) ((arr_9 [i_5] [(short)14] [(short)14] [i_5]) << (((arr_9 [i_5] [i_5] [12LL] [(_Bool)1]) - (675438936)))));
            var_18 += ((/* implicit */long long int) (((-(var_4))) < (((arr_24 [(unsigned short)5] [(unsigned char)2] [i_6] [i_5] [i_5]) + (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_5] [i_6])))))));
            var_19 = ((/* implicit */unsigned short) arr_2 [(unsigned char)16]);
        }
        var_20 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [(_Bool)1] [i_5] [i_5] [(_Bool)1] [i_5])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [8] [(unsigned short)5] [i_5]))))))));
        arr_28 [i_5] = (-(((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_5]))))));
        arr_29 [i_5] [1] = ((/* implicit */int) var_4);
    }
}
