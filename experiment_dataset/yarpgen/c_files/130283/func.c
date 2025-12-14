/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130283
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
    var_10 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) 268419072U)) ? (((/* implicit */long long int) -22)) : (-9223372036854775797LL)))) ? (((((/* implicit */_Bool) 2187925972U)) ? ((+(-9223372036854775797LL))) : (-9223372036854775797LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) == (var_9)))))));
    var_11 = var_0;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -792868099349939908LL)) || (((/* implicit */_Bool) -1355874504))));
                    var_13 = ((/* implicit */long long int) ((_Bool) 7011578833344573977ULL));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */_Bool) var_7)) ? (9223372036854775797LL) : (var_0)))))) ? (min((var_0), (((/* implicit */long long int) max((var_3), (((/* implicit */short) arr_0 [i_0]))))))) : (((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), (var_2)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26379)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (unsigned char)255))));
                        arr_13 [i_0] [(unsigned short)0] [(unsigned short)0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_1))));
                    }
                }
            } 
        } 
    } 
}
