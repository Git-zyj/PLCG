/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140304
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
    var_11 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((min((var_0), (-1424829856))), (((/* implicit */int) var_7))))), (var_2)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_12 -= ((/* implicit */unsigned int) (-((+((((_Bool)1) ? (((/* implicit */int) (short)19424)) : (((/* implicit */int) (short)-19425))))))));
            var_13 = max((max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_0]))), ((!(((/* implicit */_Bool) (+(var_2)))))));
            var_14 = ((/* implicit */signed char) var_2);
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 23; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-19416))))), (max((((/* implicit */unsigned int) (short)19445)), (2616978044U)))))), (((((/* implicit */unsigned long long int) var_2)) + (14542939692710514387ULL)))));
                            arr_11 [i_4] [i_1] [(short)14] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -9223372036854775777LL)) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (322945024360364314LL))))))) : (((/* implicit */int) (unsigned short)16384))));
                            arr_12 [i_3] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                            var_16 -= ((/* implicit */_Bool) -1945303292);
                            var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_9 [i_4] [(unsigned char)6] [i_1] [i_4] [i_3 - 1]) & (((/* implicit */unsigned long long int) 322945024360364299LL))))) ? (((arr_9 [i_4] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]) | (arr_9 [i_4] [(signed char)20] [i_2] [i_3] [i_3 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15404212439902584326ULL)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) (short)-32761)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32737))));
                arr_17 [i_1] [14ULL] = ((/* implicit */unsigned char) arr_2 [23LL] [i_1]);
                var_18 += ((/* implicit */short) ((unsigned char) arr_3 [i_0] [i_0] [8ULL]));
            }
        }
        var_19 -= var_3;
    }
    /* LoopNest 3 */
    for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            for (short i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_25 [i_6 - 1] [i_7] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6] [i_7]))) : (var_10))) <= (((/* implicit */unsigned long long int) (~(arr_24 [(short)2] [i_7] [i_7] [i_6]))))))), (((((/* implicit */_Bool) (short)-32739)) ? (((/* implicit */int) arr_18 [i_7] [i_7])) : (((((/* implicit */int) var_7)) + (((/* implicit */int) var_9)))))))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32753)) << (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
