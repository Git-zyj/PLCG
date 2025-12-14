/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168285
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 = ((4LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1]))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_2 + 1]))) < (((((/* implicit */_Bool) arr_0 [i_0])) ? (10147627331215076627ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))))))));
                }
            } 
        } 
        var_16 |= ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
    var_18 = ((/* implicit */unsigned long long int) ((((long long int) 12985332710862263885ULL)) + (((((long long int) var_10)) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-12)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            {
                var_19 = ((unsigned short) ((unsigned short) arr_8 [i_3 + 1]));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), ((-(((((((/* implicit */_Bool) arr_20 [i_3 + 2] [i_7])) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-12)) | (((/* implicit */int) (short)-28980)))))))))));
                                var_21 = arr_18 [i_3] [(unsigned short)1] [i_5] [i_3] [i_5];
                                var_22 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-50)) ? (arr_16 [i_3 + 1] [i_4] [(unsigned short)7] [i_4 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
