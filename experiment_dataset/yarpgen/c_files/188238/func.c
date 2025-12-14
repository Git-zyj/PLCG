/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188238
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
    var_19 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)23428)) == (((/* implicit */int) arr_1 [14U])))))))) ? ((~(((/* implicit */int) arr_1 [i_0 + 2])))) : ((+(var_13)))));
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [(unsigned short)7])) < (((85976468) ^ (((/* implicit */int) (unsigned short)9298))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] [i_1 - 3] |= ((/* implicit */int) min((((/* implicit */long long int) ((unsigned char) ((unsigned char) var_10)))), (var_15)));
                        var_21 = ((/* implicit */long long int) arr_2 [i_1 - 1] [i_1 + 1]);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            arr_15 [i_1] [i_3] = ((/* implicit */long long int) var_0);
                            arr_16 [i_0 - 2] [i_0 - 2] [i_2] [i_3] = arr_7 [i_1 - 1];
                        }
                        for (long long int i_5 = 1; i_5 < 13; i_5 += 3) 
                        {
                            arr_19 [i_2] [i_2 + 1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) max((min((2364990478U), (((/* implicit */unsigned int) arr_5 [i_5 - 1])))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_5] [i_0])))))));
                            arr_20 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) var_12)) ? (-1225627622) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 2] [i_0 + 1] [(unsigned short)4])) && (((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 2])))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1890533038U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((((~(arr_8 [(short)12]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */int) (short)-23429))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)27125)) && (((/* implicit */_Bool) var_1)))))))));
        var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (1064083754) : (1064083753)))) : ((-(4174481988U))))) & (((unsigned int) var_2))));
    }
}
