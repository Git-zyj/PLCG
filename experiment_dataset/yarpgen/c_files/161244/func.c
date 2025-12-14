/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161244
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_9)) + (-84253412))), (((/* implicit */int) ((unsigned char) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned char) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))) : (var_7)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_10 [(short)8] [(short)8] = ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0]);
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-32767))))) << ((((-(((/* implicit */int) arr_1 [i_0] [i_1])))) + (35)))))) : (min((max((((/* implicit */long long int) var_4)), (arr_7 [i_2]))), (((/* implicit */long long int) arr_6 [i_0]))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned char)7] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))));
                            var_14 = var_7;
                            arr_12 [i_2] = ((/* implicit */short) arr_2 [i_3] [i_3] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            arr_18 [(_Bool)1] [i_4 - 1] [(_Bool)1] [i_4] [i_4] = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)32766))) - (arr_4 [i_0] [(unsigned char)0] [i_5])))))));
                            var_15 = ((/* implicit */unsigned int) max(((-(((arr_5 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [(unsigned char)0] [i_5]))))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1])))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) var_11));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (short)32765);
}
