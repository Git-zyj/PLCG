/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184146
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */int) arr_5 [i_2])), ((+(((/* implicit */int) arr_3 [i_0])))))));
                                arr_13 [i_2] = ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned char) var_13)))))) == (((((/* implicit */_Bool) arr_7 [i_2])) ? (-9156059167006386611LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))))), (((unsigned short) (unsigned char)131))));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (unsigned char)133))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) arr_5 [i_1])), (arr_7 [i_0])))));
                            arr_18 [10] [i_5] [i_6] [i_6] [i_6] &= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-17365))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)57344))))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [(unsigned char)14] [i_1] [i_5] [i_6])) <= (((/* implicit */int) arr_8 [(_Bool)1] [i_1] [(short)17] [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57344)))))))));
                            arr_19 [i_0] [i_1] [i_5 - 1] [i_6] = (~(min((((((/* implicit */_Bool) (short)-17365)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)107)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)12] [i_5] [i_1] [(unsigned char)4]))))))));
                            arr_20 [5LL] [i_1] [i_5 + 1] [i_6] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [3LL] [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_1)) / (var_9)))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_3))));
    var_19 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-23813)))) : (((/* implicit */int) ((unsigned char) var_1))))))));
}
