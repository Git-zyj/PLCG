/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10628
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) max((((/* implicit */short) var_4)), ((short)-11177))))) ? (((arr_3 [(_Bool)1] [i_1] [(_Bool)1]) | (((/* implicit */long long int) arr_2 [i_0] [6] [i_1 + 3])))) : (arr_3 [i_0] [i_1] [i_1])));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    arr_7 [i_0] [(unsigned char)11] [5] = ((/* implicit */unsigned int) arr_3 [i_1] [i_1 + 3] [i_1]);
                    var_21 = ((/* implicit */short) (!(max((arr_1 [i_1 + 3] [i_1 - 1]), (arr_1 [i_1 - 1] [i_1 + 2])))));
                    arr_8 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_2 [i_0 - 1] [4] [7]), (((/* implicit */unsigned int) var_3)))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned int) var_18);
                            arr_16 [i_0] [i_0] [(unsigned short)8] [(short)9] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */int) (short)14024)) | (((/* implicit */int) (unsigned short)10754)))), (((/* implicit */int) arr_6 [(_Bool)1] [i_0 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) min((var_15), (var_15)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))));
}
