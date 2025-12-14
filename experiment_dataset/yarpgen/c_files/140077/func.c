/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140077
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */short) max((((((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_1 [i_1] [i_2])))) - (((/* implicit */int) arr_7 [i_0])))), (((((/* implicit */_Bool) (unsigned char)165)) ? (1879048192) : (((/* implicit */int) (unsigned short)61231))))));
                    var_15 = ((/* implicit */unsigned short) (((~(max((arr_4 [(unsigned short)6] [i_1] [(unsigned short)17]), (((/* implicit */unsigned int) arr_6 [i_1] [i_2])))))) | (max((((((/* implicit */_Bool) (unsigned short)4284)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (206400578U))), (min((206400577U), (((/* implicit */unsigned int) (unsigned short)4304))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_11 [i_3] [i_2] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */int) (unsigned short)4286)) | (((/* implicit */int) var_7)))))))));
                        var_16 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [14ULL] [i_1] [i_1] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (206400578U) : (((/* implicit */unsigned int) (-2147483647 - 1))))))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_2] [i_1])))))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_6)))))));
}
