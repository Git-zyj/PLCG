/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13531
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-28130)) : (((/* implicit */int) ((_Bool) (short)28132))))), (((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(-27518588)))) % (arr_1 [i_1] [i_2 + 1]))))));
                    arr_7 [i_2] = ((/* implicit */long long int) (_Bool)1);
                }
                arr_8 [i_0] [i_1] = ((/* implicit */_Bool) ((((((((/* implicit */long long int) arr_3 [i_0])) / (arr_0 [i_1]))) % (((/* implicit */long long int) arr_3 [i_0])))) % (((/* implicit */long long int) ((/* implicit */int) ((((int) (short)9961)) != ((((_Bool)1) ? (((/* implicit */int) (unsigned char)7)) : (-27518590)))))))));
                var_16 = ((((/* implicit */int) (!((_Bool)1)))) / (((/* implicit */int) max(((short)3816), ((short)9976)))));
                arr_9 [i_0] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761))) * (arr_1 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) (short)-28101)))))) : (arr_1 [i_1] [i_0])))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (short)-7166)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (-2147483647 - 1))) / (arr_0 [i_0]))))))) : (((arr_3 [i_1]) ^ (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))))))));
            }
        } 
    } 
}
