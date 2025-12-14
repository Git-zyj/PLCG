/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152171
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) var_11))))) ? (((var_3) + (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) var_18)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            var_20 ^= ((/* implicit */unsigned short) var_3);
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_1 [i_0]))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_1 [(unsigned short)3])) : (((((/* implicit */_Bool) 1682941397)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)40003))))));
        }
        for (int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            arr_10 [i_2] [i_0] [i_2] = ((/* implicit */long long int) ((min((-2147483639), (((/* implicit */int) (unsigned char)156)))) & (((((/* implicit */int) (unsigned short)60)) | (((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1]))))));
            arr_11 [i_0] [i_2 - 1] [i_2] = ((/* implicit */short) var_10);
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_2 - 1])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2])))))));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_21 [i_3] [(_Bool)1] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)9449))));
                        var_23 -= ((/* implicit */int) ((arr_18 [i_4 - 1] [i_6 - 1]) ^ (arr_18 [i_4 - 1] [i_6 - 1])));
                    }
                } 
            } 
        } 
        var_24 = ((arr_0 [i_3]) ^ (((/* implicit */int) arr_6 [i_3] [i_3])));
    }
    var_25 = ((/* implicit */short) var_8);
}
