/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142595
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (3633121799U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) / (arr_1 [i_1])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) : (arr_1 [i_1 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1])))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_0] [i_1 - 1])), (2693332827U)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) arr_4 [i_0] [i_1 - 1]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1 - 1]))) & (-5261483195919723309LL)))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-5261483195919723309LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21109)))))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1])) ? (max((((/* implicit */long long int) arr_3 [i_0] [i_0])), (5261483195919723309LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) (signed char)72))))))));
                var_20 = ((/* implicit */unsigned int) var_8);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_22 += ((/* implicit */signed char) min((((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)28863)))))), (((((/* implicit */_Bool) (short)8184)) ? (661845501U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3633121785U)) <= (var_3)))))))));
    }
    for (signed char i_3 = 3; i_3 < 20; i_3 += 2) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned int) ((2987604073813099046LL) / (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)35878), (((/* implicit */unsigned short) (_Bool)1)))))) : (arr_8 [i_3] [i_3 + 1])))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_15))));
        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
    }
    var_25 &= ((/* implicit */unsigned int) var_17);
    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((min((661845496U), (((/* implicit */unsigned int) (unsigned char)137)))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) : (var_10))))))));
}
