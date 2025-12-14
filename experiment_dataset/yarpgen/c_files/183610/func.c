/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183610
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 = (!(max((((((/* implicit */unsigned long long int) 2660731055U)) != (125795417484673241ULL))), (max(((_Bool)1), ((_Bool)1))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned short) (_Bool)1)))));
            arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)16677))))) - (((18446744073709551587ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23)))))));
            arr_5 [i_1] = ((/* implicit */_Bool) (~(((unsigned long long int) (unsigned char)186))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 288230376151711744LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16677))))));
        }
        var_24 = ((/* implicit */_Bool) (unsigned short)15360);
    }
    var_25 ^= ((/* implicit */short) ((((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)4032))))))) * ((-(((1634236241U) / (((/* implicit */unsigned int) -1813399186))))))));
    var_26 = (~(226291606U));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))) >= ((~((~(((/* implicit */int) (_Bool)1))))))));
                var_28 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)48381)))))))));
            }
        } 
    } 
}
