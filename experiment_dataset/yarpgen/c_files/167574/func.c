/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167574
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 -= ((((/* implicit */_Bool) var_14)) ? (max((((/* implicit */long long int) arr_2 [i_0])), (((long long int) arr_2 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (!((!(arr_5 [i_0] [i_1] [i_2])))));
                    var_19 = ((/* implicit */_Bool) ((signed char) ((unsigned int) min((var_5), ((signed char)53)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            arr_14 [i_4 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) ((int) (short)-12831)));
                            var_20 = ((/* implicit */unsigned int) max((arr_13 [i_3 + 1] [i_3 - 1] [i_0] [i_3 - 1] [i_3 + 2] [i_3 + 1]), (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_11 [i_0] [i_1] [i_2] [i_4 - 1]))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_0])));
                            var_21 = ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_2] [i_3 - 2] [i_4 - 1]);
                            var_22 ^= ((/* implicit */unsigned char) ((int) (-(arr_13 [i_0] [i_1] [i_1] [i_3 - 2] [i_4 + 1] [i_1]))));
                        }
                        arr_16 [i_0] [i_1] [i_1] [i_3 + 1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_2 [i_3 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))) : (((((/* implicit */_Bool) max((3160100257U), (((/* implicit */unsigned int) (short)30972))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (((unsigned int) var_2))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_2] [i_0] = ((/* implicit */long long int) var_12);
                        var_23 = ((/* implicit */signed char) ((((var_10) + (((/* implicit */int) var_13)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18)))))));
                        var_24 = ((/* implicit */long long int) ((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_13 [i_0] [i_0] [i_0] [i_2] [i_5] [i_5])));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) var_12);
    }
    var_26 = ((/* implicit */signed char) var_9);
}
