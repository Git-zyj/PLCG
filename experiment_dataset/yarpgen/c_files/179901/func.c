/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179901
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3 - 1] [i_3 - 3] [i_1])) ? (arr_9 [(_Bool)1] [1ULL] [i_3 - 1] [(_Bool)1] [14U]) : (arr_9 [i_2] [i_1] [i_3 - 1] [i_3] [i_0])));
                        var_16 *= ((/* implicit */signed char) ((-1597249197) ^ ((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1]))))));
                    }
                    var_17 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)21827)))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned char) ((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_7 [i_0] [i_0] [i_0]))) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)21827)) & (((/* implicit */int) (unsigned short)21838)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_4] [i_4]))));
        arr_13 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [(short)10] [i_4] [i_4] [i_4]) ? (((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [2LL])) : (((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) && (((/* implicit */_Bool) arr_12 [i_4] [i_4])))))));
    }
    var_19 = var_2;
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (short i_6 = 3; i_6 < 18; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)42808))));
                        arr_25 [i_6] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)22718)))) ? (((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_23 [(unsigned char)18] [i_6 - 2] [i_7] [i_8])))) == (((((/* implicit */_Bool) (unsigned short)42818)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7]))))))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5] [i_5]))))), (arr_19 [i_5] [(short)18] [i_5])));
    }
    var_22 = var_3;
}
