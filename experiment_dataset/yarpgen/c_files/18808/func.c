/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18808
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
    var_19 = ((/* implicit */short) max((var_0), (((/* implicit */long long int) var_15))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) max((arr_0 [i_0 - 1]), (((arr_0 [i_0 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((short) var_7));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_21 += ((/* implicit */unsigned short) arr_2 [8]);
                        arr_14 [i_0] [i_0] = ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 + 1] [i_0]);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_4 = 4; i_4 < 13; i_4 += 4) 
        {
            var_22 = (-(((/* implicit */int) arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 4] [i_0])));
            var_23 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_4])))))));
        }
        for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 3; i_7 < 14; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_13 [i_5] [i_6] [i_7] [(unsigned char)6]))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min((arr_21 [i_0] [6U] [i_0]), (((/* implicit */int) ((short) arr_26 [i_5] [i_5]))))))));
                            arr_27 [i_8] [i_0] [11] = ((/* implicit */unsigned short) var_1);
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (unsigned short)65535))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_6]);
                var_28 = ((/* implicit */int) (((-(arr_21 [i_0 - 1] [i_6] [i_6]))) == (-1046957610)));
            }
        }
    }
    var_29 = ((/* implicit */_Bool) (unsigned short)4);
}
