/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136355
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
    var_19 = ((/* implicit */short) (-((-(((/* implicit */int) var_0))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((var_13) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */int) var_18)) << (0LL)))))) | (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) - (((/* implicit */int) (short)32767))));
                var_22 = max(((~(arr_1 [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)24))))));
                var_23 = ((/* implicit */_Bool) (-(8358874344066904474LL)));
                var_24 = ((/* implicit */unsigned short) (((((+(8358874344066904476LL))) | (0LL))) << (((max((((8358874344066904468LL) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */long long int) ((unsigned short) arr_0 [i_0]))))) - (8358874344066904468LL)))));
                var_25 = ((/* implicit */unsigned short) (((~(((unsigned int) 6254989371619211646ULL)))) | ((~(arr_1 [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 4; i_2 < 7; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 7; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        {
                            arr_13 [i_4] [i_3] [i_4] [i_5] = ((((unsigned long long int) ((arr_1 [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_4 + 2] [i_4] [i_4 + 2] [(unsigned short)8])) - ((-(1410455273)))))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_2 + 2] [i_4 + 1] [i_4 + 3])), (595891472U)))) ? (((((/* implicit */long long int) ((int) arr_1 [i_3]))) | (((((/* implicit */_Bool) arr_4 [4U] [(_Bool)0])) ? (24LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_3] [i_4]))))))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_12 [i_2] [i_4]))))))))));
                            var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) max((8358874344066904474LL), (((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)19))))))))))));
                            arr_14 [i_3] [i_4] = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_10 [i_2] [i_4] [i_2] [i_4 + 4]))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned int) ((int) ((-30LL) | ((~(24LL))))));
            }
        } 
    } 
}
