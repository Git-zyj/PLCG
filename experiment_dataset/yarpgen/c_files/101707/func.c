/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101707
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
    var_17 += ((/* implicit */long long int) ((_Bool) (unsigned char)8));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) var_16);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0])), (min((((/* implicit */unsigned long long int) -1874662736)), (var_2))))))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 127)) || (((/* implicit */_Bool) arr_3 [i_1]))));
        }
        for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_20 = var_12;
            arr_7 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_6 [(unsigned char)0]))))) : (min((((/* implicit */int) var_4)), (arr_3 [i_0]))))) ^ (arr_1 [i_0])));
            var_21 *= ((((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45819))) : (var_8))) >= (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_2])), (var_6))))))) / (((/* implicit */int) arr_2 [i_2])));
        }
        for (int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)45799)), (var_0)));
            var_23 = ((/* implicit */long long int) (((~(((/* implicit */int) ((((/* implicit */int) arr_2 [(unsigned short)1])) > (arr_3 [i_0])))))) + (((arr_3 [i_3]) / (((/* implicit */int) arr_0 [i_0]))))));
        }
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_14 [(unsigned char)6] = ((/* implicit */unsigned long long int) arr_2 [i_4]);
        var_24 = ((/* implicit */signed char) ((-493367625) + (((/* implicit */int) (unsigned char)90))));
        var_25 = ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned short)31082)));
    }
}
