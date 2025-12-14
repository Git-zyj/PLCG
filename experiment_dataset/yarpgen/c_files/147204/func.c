/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147204
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_17 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_4 [i_2] [i_1] [i_2]))))));
                        var_18 -= ((/* implicit */unsigned int) arr_3 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 3; i_4 < 22; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max(((unsigned short)29785), (((/* implicit */unsigned short) max(((short)-19519), ((short)13945)))))))));
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_4] [i_1] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_13)), (((unsigned char) (-(((/* implicit */int) arr_14 [i_1] [i_4] [i_2] [i_1] [i_5] [i_4] [i_5])))))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */short) (+(((/* implicit */int) min((((unsigned short) arr_3 [i_2])), (arr_10 [i_2] [i_1]))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [i_2] [i_0] [i_2]) + (arr_4 [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2]))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_19 [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_10 [0LL] [i_6]), (arr_1 [i_6]))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (short)4061)) : (((/* implicit */int) (short)-19520)))), (((/* implicit */int) arr_3 [i_6])))), (((/* implicit */int) ((_Bool) min((741768549), (((/* implicit */int) (_Bool)1)))))))))));
    }
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4925))) : (((((_Bool) -617228734)) ? (((/* implicit */unsigned int) (+(var_1)))) : (var_12)))));
    var_24 = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27520))) + (min((10312502163759083531ULL), (((/* implicit */unsigned long long int) 2174124285U))))))));
}
