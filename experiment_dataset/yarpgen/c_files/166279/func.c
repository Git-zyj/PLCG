/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166279
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
    var_13 = var_2;
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) 2175102720U))));
    var_15 &= max((max((((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (var_11)))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)55479)) != (var_0)))) * (((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) var_5)) - (182)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [(short)0] &= ((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]));
                var_16 = ((/* implicit */unsigned short) max((arr_4 [i_1]), (((/* implicit */short) arr_0 [i_0]))));
                var_17 = ((/* implicit */long long int) min((0), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)95)), (var_7)))) : (((var_8) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-33))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) -1401922829);
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16368)) ^ (((/* implicit */int) arr_1 [i_0]))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) arr_9 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_3]))));
                            arr_12 [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) min(((unsigned short)49167), (((/* implicit */unsigned short) arr_0 [i_1]))))) ^ (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])))) & (((((/* implicit */int) arr_2 [i_1] [i_1])) >> (((/* implicit */int) arr_2 [i_1] [i_2]))))));
                        }
                    } 
                } 
                var_20 = arr_4 [i_1];
            }
        } 
    } 
}
