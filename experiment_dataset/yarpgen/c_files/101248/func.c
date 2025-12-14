/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101248
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((var_5) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))))));
            arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [(unsigned char)6] [i_1])) ^ (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))));
            var_21 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(signed char)4])) / (((/* implicit */int) var_6)))))));
        }
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_11 [i_0] [11LL] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-12231))));
            var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_0])), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_2]))) / (var_4))) % (min((var_15), (((/* implicit */unsigned long long int) (signed char)-98))))))));
        }
        var_23 = ((_Bool) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            for (long long int i_4 = 3; i_4 < 11; i_4 += 1) 
            {
                {
                    arr_16 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) 312427044807898190LL)));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) (~(min((arr_8 [i_5]), (arr_8 [i_0])))));
                                var_25 -= ((/* implicit */unsigned char) max((arr_19 [i_4] [i_3] [i_4 - 3] [i_5] [i_4 - 3]), (((/* implicit */unsigned long long int) arr_8 [i_0]))));
                                arr_21 [i_0] [i_0] [i_0] [1] [i_6] = ((/* implicit */short) (((-(((/* implicit */int) arr_18 [i_4 - 1] [11U] [i_3 - 1] [(unsigned short)11])))) / (((/* implicit */int) ((_Bool) arr_9 [i_4 + 3])))));
                                var_26 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_4 - 3] [i_3 + 1])) * (((/* implicit */int) arr_5 [i_4 + 1] [i_3 - 1])))) / (((((/* implicit */int) arr_5 [i_4 - 1] [i_3 + 2])) * (((/* implicit */int) arr_5 [i_4 + 1] [i_3 + 2]))))));
                                var_27 += ((/* implicit */unsigned long long int) arr_14 [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) ((arr_19 [i_0] [i_0] [(short)10] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))), (((((((/* implicit */long long int) ((/* implicit */int) var_16))) & (-3134242402015107439LL))) % (max((((/* implicit */long long int) var_6)), (arr_8 [i_0]))))))))));
    }
    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (signed char)65))));
    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((short) var_13)))));
    var_31 = ((/* implicit */_Bool) var_6);
}
