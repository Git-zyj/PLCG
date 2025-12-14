/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144264
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
    var_18 = ((/* implicit */signed char) var_11);
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_13))));
    var_20 |= ((/* implicit */long long int) var_14);
    var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((int) var_1)) : (((((/* implicit */_Bool) 16515072U)) ? (((/* implicit */int) var_16)) : (-2068095601)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (+(var_8)))) : (var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_22 -= ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_23 |= ((/* implicit */unsigned short) arr_3 [(_Bool)1] [i_1]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (short i_4 = 4; i_4 < 8; i_4 += 3) 
                    {
                        {
                            arr_15 [i_2] [i_0] [i_2] = ((/* implicit */signed char) max((max((min((((/* implicit */int) (unsigned short)63)), (2068095600))), (((/* implicit */int) (!(((/* implicit */_Bool) 1048064))))))), ((+(((/* implicit */int) var_5))))));
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)192)))));
                        }
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)4588)) : (((/* implicit */int) (unsigned char)59))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_1] [i_0 + 1] [i_0] [i_0 + 1])))));
            }
            arr_17 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40121))));
            var_25 = ((/* implicit */signed char) ((short) arr_1 [i_0]));
        }
        /* vectorizable */
        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 1) 
        {
            arr_20 [i_0] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0 + 2]))));
            arr_21 [i_0] = ((_Bool) arr_2 [i_0 - 1] [i_5 + 2]);
        }
    }
    for (short i_6 = 1; i_6 < 19; i_6 += 4) 
    {
        arr_25 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((2068095600) + (((/* implicit */int) arr_23 [i_6 + 2] [i_6 + 2]))))) ? (((int) (unsigned char)108)) : (((/* implicit */int) arr_24 [i_6]))));
        arr_26 [(unsigned short)4] |= ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
    }
}
