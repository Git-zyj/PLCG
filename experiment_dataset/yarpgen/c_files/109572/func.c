/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109572
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
    var_11 = ((/* implicit */int) var_0);
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8424328859698026159LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (1163833146)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7345065343469462602LL)) ? (((/* implicit */int) (unsigned char)26)) : (1163833146)))) : (((var_1) >> (((3637881011U) - (3637880995U)))))))) : ((~(max((3815578420183821039LL), (((/* implicit */long long int) var_2))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_13 = ((((((/* implicit */_Bool) ((long long int) (short)-22001))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) var_7))))) : (arr_4 [i_0] [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) 1367750651U)), (-7345065343469462602LL))) == (min((((/* implicit */long long int) (unsigned char)28)), (arr_5 [i_0] [22LL] [i_2]))))))));
                    var_14 = ((/* implicit */long long int) ((int) (short)18927));
                    var_15 = min((max((((/* implicit */long long int) var_4)), (var_6))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (arr_7 [(_Bool)1] [(_Bool)1] [i_0])))));
                }
            } 
        } 
    } 
}
