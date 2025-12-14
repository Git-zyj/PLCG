/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150614
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1524651358U)) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-31)) & (((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (unsigned char)255))))));
    var_21 = var_3;
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) var_15)))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32704))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((max((((/* implicit */unsigned short) (unsigned char)36)), ((unsigned short)32704))), (((/* implicit */unsigned short) arr_1 [(_Bool)1]))))) << ((((-(((/* implicit */int) arr_0 [i_0])))) - (12302)))));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_23 = (~(((/* implicit */int) max((var_7), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1 + 2] [i_1])) == (((/* implicit */int) var_0)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 3) 
                {
                    {
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (-(((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_3 + 2] [i_1 + 2])) : (((/* implicit */int) arr_13 [i_1] [i_3] [i_4 - 1] [i_4 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))) : (((17494559189086508248ULL) ^ (var_10))))))))));
                        var_25 = ((/* implicit */int) arr_4 [i_4] [i_4 - 1]);
                    }
                } 
            } 
        } 
    }
}
