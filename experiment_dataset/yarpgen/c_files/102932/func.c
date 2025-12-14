/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102932
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    arr_6 [i_0] [i_0] [(signed char)2] = ((/* implicit */unsigned char) (+(6943569934394965888ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_11 [19] [i_1] [8] [(signed char)20] [i_4] = ((/* implicit */short) ((long long int) arr_1 [i_4 + 1]));
                                arr_12 [i_0] [i_1] [(short)18] [13ULL] = ((/* implicit */int) ((signed char) arr_4 [i_4 + 1] [i_4 + 1]));
                                var_18 = ((/* implicit */int) (~(arr_7 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [20ULL] [i_4])));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) ((((arr_2 [i_0] [i_1]) + (2147483647))) >> (((((/* implicit */int) (unsigned short)28639)) - (28634)))));
                }
                for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_15 [i_0] [i_1] [2ULL] [i_6]))));
                                arr_21 [i_0] [i_1] [i_5] [i_0] [13LL] [i_7] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_7])) ^ (811345446))), (((/* implicit */int) ((unsigned char) arr_14 [19ULL] [19ULL] [i_5] [19ULL])))));
                                arr_22 [i_0] [(signed char)12] [i_0] [i_5] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1793))) | (var_5)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_0] [i_1] [4U] [i_5] [i_6] [i_7] [i_7]))))) : (min((((/* implicit */unsigned long long int) arr_17 [1U] [i_1] [i_5] [1U] [i_7])), ((+(17495040434147555141ULL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        arr_27 [i_0] [i_1] [16LL] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 951703639561996474ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (min((((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0] [i_0])), (min((1228885985U), (((/* implicit */unsigned int) var_10))))))));
                        arr_28 [i_8] [(unsigned short)3] [i_5] [i_1] [i_1] [i_0] = ((/* implicit */signed char) 17495040434147555135ULL);
                        var_21 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0]);
                    }
                    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) (~(0LL)))))));
                    var_23 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((unsigned char) arr_25 [i_0]))), (min((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_5])), (17495040434147555121ULL))))) << (((arr_3 [(_Bool)1]) - (153714708)))));
                    arr_29 [(signed char)14] [i_1] [i_5] = ((/* implicit */int) 17495040434147555127ULL);
                }
                arr_30 [i_0] [(unsigned char)20] = ((/* implicit */int) var_0);
                var_24 = ((/* implicit */_Bool) 17834443753082551546ULL);
                arr_31 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((signed char) 4404649541819629607LL));
                var_25 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_0]))))), (-2061786034406480467LL))) == (((/* implicit */long long int) 0))));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) var_5);
}
