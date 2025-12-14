/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16332
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) arr_0 [i_0] [i_0]);
                var_18 = ((/* implicit */unsigned char) 538675369656249792LL);
                var_19 -= ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max(((short)-3197), (((/* implicit */short) var_9))));
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned long long int) min((((long long int) ((916413761) >= (((/* implicit */int) (short)3197))))), (((/* implicit */long long int) (short)-3197))));
                                arr_18 [i_2] [i_2] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (short)-3207))) | (((/* implicit */int) ((short) var_16)))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_16)), (arr_15 [i_2] [i_6] [i_2 - 1] [16] [i_3])))) ? (((((/* implicit */_Bool) (short)32766)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3204))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : (((((unsigned long long int) (short)-3185)) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_7)), ((short)-3185)))))))));
                            }
                        } 
                    } 
                    var_23 = min((((short) arr_15 [i_2] [i_2 - 1] [i_2] [i_4] [i_4 - 2])), ((short)16256));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 2) 
                        {
                            {
                                arr_25 [i_2] [i_7] [i_2 - 1] |= ((/* implicit */signed char) arr_17 [(_Bool)1] [i_3]);
                                arr_26 [i_2] [i_2] [(_Bool)1] [i_4 + 3] [i_7] [i_8] = ((/* implicit */_Bool) (~((+(((/* implicit */int) min((arr_22 [i_2] [i_3] [i_4] [i_3] [(_Bool)1]), ((unsigned char)114))))))));
                            }
                        } 
                    } 
                }
                arr_27 [i_2] [i_3] [i_2 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_22 [i_2] [i_2 - 1] [i_2 - 1] [i_3] [i_2 - 1]))));
                var_24 = ((/* implicit */unsigned long long int) ((arr_20 [i_2] [i_3] [i_3]) & (((/* implicit */unsigned int) ((((/* implicit */int) max((var_5), (var_3)))) ^ (((/* implicit */int) (short)-16239)))))));
                var_25 = ((/* implicit */long long int) min((6784729407151906872ULL), (((/* implicit */unsigned long long int) ((unsigned char) arr_14 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2])))));
                var_26 = ((/* implicit */short) arr_15 [i_2] [i_3] [i_3] [i_2] [i_2]);
            }
        } 
    } 
    var_27 = ((/* implicit */short) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_8))));
}
