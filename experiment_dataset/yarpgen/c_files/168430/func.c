/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168430
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((((/* implicit */_Bool) (unsigned short)58696)) ? (7475872083407897316ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62585))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_10 = ((int) ((unsigned int) (unsigned short)58691));
                    arr_10 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1] [i_1] [i_1]);
                }
                var_11 = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
                var_12 = ((/* implicit */int) max((((unsigned char) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1] [i_1 - 1] [(unsigned short)13])) || (((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (int i_5 = 2; i_5 < 14; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    {
                        var_13 = ((int) max((((/* implicit */unsigned short) arr_15 [i_5 + 3] [i_5 + 3] [(short)12])), ((unsigned short)6845)));
                        arr_24 [i_3] [i_4] [i_4] [i_5] = ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_3] [i_4])) : (((/* implicit */int) arr_1 [i_3] [i_4])))) : (((/* implicit */int) ((_Bool) var_8))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(_Bool)1] [i_5] [i_5] [i_3])) ? (((/* implicit */long long int) var_7)) : (var_0)))) ? (((/* implicit */int) arr_0 [i_5 - 2])) : (((/* implicit */int) arr_9 [i_5 + 1] [i_5 - 1] [i_5 - 2])))))));
                            var_15 = ((/* implicit */unsigned short) min((max((arr_19 [i_5 - 1] [i_5 + 1] [i_5] [(unsigned short)14]), (((/* implicit */int) arr_23 [i_5 - 1] [i_5 + 3] [i_5 - 1] [i_5])))), (arr_19 [i_5 + 2] [i_5 + 1] [i_5] [i_5 + 1])));
                        }
                        for (unsigned short i_8 = 3; i_8 < 15; i_8 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned char) arr_2 [i_5 - 1] [i_8 - 3]))), (((long long int) arr_2 [i_5 - 1] [i_8 + 2]))));
                            var_17 = ((/* implicit */int) max((var_5), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)6839)), (0))))));
                            var_18 = ((/* implicit */int) max((-9158341071266382943LL), (((/* implicit */long long int) (unsigned short)58696))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) max((var_4), (((/* implicit */int) var_9)))))) ? (var_2) : (((/* implicit */int) arr_25 [i_3] [i_4] [14] [i_4] [i_5] [i_8]))));
                        }
                        var_20 -= ((/* implicit */unsigned int) var_7);
                        var_21 = ((((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_5 + 3] [i_5 + 3] [i_5 + 3] [(unsigned char)9] [i_5 - 1])) ? (((((/* implicit */_Bool) arr_0 [i_5 - 2])) ? (arr_29 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 + 2]) : (arr_29 [i_4] [i_4] [i_5 - 1] [i_5 - 1] [i_4] [i_5 + 3] [i_5 - 2]))) : (((/* implicit */int) arr_0 [i_5 - 2])));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) arr_29 [(unsigned char)8] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
    }
    var_23 = ((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned int) var_7)), (var_5))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)26))) : (max((((/* implicit */int) ((_Bool) var_7))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))));
}
