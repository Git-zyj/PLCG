/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108406
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [(unsigned char)6] [(_Bool)1] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_10 = ((/* implicit */_Bool) min((min((((/* implicit */int) var_8)), (((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned short)21902)))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [(short)11]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_19 [i_5] [i_4] [i_3] [i_2] [i_1] = max((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [(_Bool)1])) ^ (((/* implicit */int) arr_15 [i_5 - 1] [0] [i_5] [i_5] [i_5]))))), (min((((/* implicit */unsigned int) arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1] [(unsigned short)10] [i_5 - 1])), (var_4))));
                                arr_20 [i_1] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)26689)) <= (((/* implicit */int) (unsigned short)0))))) / (((((/* implicit */int) (short)-32752)) ^ (((/* implicit */int) (_Bool)0))))));
                                arr_21 [i_1] [i_2] [i_2] [i_3] [i_4] [i_3] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) ((var_3) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-28942))))))));
                                var_11 ^= var_7;
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_2] [i_2] [i_3] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)0))))) && (((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (unsigned short)9525)))))))) : (((/* implicit */int) arr_7 [i_1] [7U])));
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)32752)))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_9 [i_1] [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_7 [(short)4] [i_1]))))))));
        var_13 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [(short)6])))), (min((((/* implicit */int) ((((/* implicit */int) (short)-32752)) == (((/* implicit */int) (unsigned short)26689))))), (((((/* implicit */_Bool) arr_10 [(short)4] [i_1] [10] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [(unsigned char)6]))))))));
        arr_23 [i_1] [i_1] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_9 [i_1] [i_1]))))));
    }
    for (short i_6 = 1; i_6 < 10; i_6 += 3) 
    {
        arr_28 [3U] = ((/* implicit */unsigned short) ((int) var_7));
        var_14 = arr_27 [i_6];
    }
    var_15 = ((/* implicit */_Bool) var_2);
}
