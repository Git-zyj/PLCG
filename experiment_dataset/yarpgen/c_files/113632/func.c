/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113632
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
    var_10 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_14 [i_0] [i_1 + 3] [i_1] [(unsigned char)14] [i_2 - 2] [i_3] = ((/* implicit */signed char) ((((_Bool) var_3)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                        arr_15 [18] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        var_11 = ((/* implicit */long long int) ((((/* implicit */int) (short)24498)) ^ (-765739958)));
                        arr_16 [i_0] [i_0] [i_1 + 1] [i_0] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_5) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        arr_19 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_0] &= var_2;
                        arr_20 [i_0] [(short)2] [i_0] [i_4 - 1] = ((/* implicit */signed char) ((((unsigned int) ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))));
                        arr_21 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (-765739958)))) ? (((((/* implicit */_Bool) 765739972)) ? (((/* implicit */int) (unsigned char)61)) : (-765739958))) : (((((/* implicit */int) (unsigned char)194)) << (((((/* implicit */int) (unsigned short)33951)) - (33928))))))) >> ((+(((/* implicit */int) var_3))))));
                    }
                    arr_22 [i_0] [i_1] [i_2 - 1] [i_1 + 4] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (var_5))))))));
                    var_12 = ((/* implicit */long long int) ((short) (~(var_4))));
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_5);
                    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) ((var_6) == (var_6)))) != ((-(((/* implicit */int) var_3)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_7))));
}
