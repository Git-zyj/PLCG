/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187463
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
    var_14 = ((/* implicit */short) var_7);
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) min(((unsigned char)183), ((unsigned char)168))))), (((((/* implicit */_Bool) var_7)) ? (min((var_10), (((/* implicit */unsigned long long int) var_13)))) : (((var_9) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 = (_Bool)1;
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned short) ((_Bool) min((arr_5 [i_0 - 1] [(unsigned short)4] [i_0 - 1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [14ULL] [14ULL]))))))));
                            var_18 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) ((unsigned short) (short)10066))))), (((((arr_5 [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))))) ? (-1737820365) : (((/* implicit */int) arr_10 [i_0] [i_1] [(_Bool)1] [i_3] [(unsigned short)6] [(_Bool)1]))))));
                            arr_13 [i_0 + 1] [i_1] [i_0 + 1] [i_2 + 1] [i_2] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_11 [i_3 - 3] [i_2 + 1] [i_0 - 1] [i_0])) != (((/* implicit */int) (unsigned char)194)))))));
                        }
                    } 
                } 
                var_19 &= min((min((var_7), (((/* implicit */unsigned long long int) (unsigned char)183)))), (((/* implicit */unsigned long long int) (unsigned char)186)));
            }
        } 
    } 
}
