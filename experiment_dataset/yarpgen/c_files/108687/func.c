/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108687
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
    var_19 = ((/* implicit */unsigned char) var_11);
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)16465)) ? (((/* implicit */int) (short)16455)) : (((/* implicit */int) (short)-16456)))))));
    var_21 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned long long int) ((signed char) (-(((10338501046064719812ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9048))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) (short)-26454);
                            var_23 = (!((_Bool)1));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (11500819355526905465ULL) : (arr_4 [i_1]))))));
                    var_24 = ((/* implicit */unsigned short) arr_15 [i_1 + 1]);
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_18))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1])))))));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)107)))))));
                }
                var_28 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) (short)-26442)) : (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
