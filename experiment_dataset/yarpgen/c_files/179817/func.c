/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179817
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6)))))));
    var_14 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)19807)) == (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1)))))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (short)19110)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_1 [i_1]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((arr_8 [i_0] [i_3 - 1] [i_2] [i_2]) ? (((/* implicit */int) arr_8 [i_0] [i_3 - 1] [i_2] [i_3 - 1])) : (((/* implicit */int) arr_8 [i_3] [i_3 + 1] [i_0] [i_3 + 1])))))));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (-1044527711) : ((-(((/* implicit */int) var_0)))))))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) arr_2 [i_1] [i_1]))))))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)2] [i_0]))) + (8744683369329154073LL))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+(-8744683369329154073LL))))));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) (short)-19134)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39077))) : (10740982464458676795ULL))))));
                        arr_14 [12U] [12U] [12U] [i_0] [12U] &= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        arr_15 [i_0] [0U] [i_4] &= ((/* implicit */unsigned char) (~(arr_5 [i_1] [i_2] [4])));
                    }
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1044527689)) ? (arr_13 [i_0] [i_0] [i_2]) : (arr_7 [i_0])))) ? (arr_5 [i_0] [i_0] [6]) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_12))))))) : (((/* implicit */int) (signed char)124)))))));
                }
            } 
        } 
    } 
}
