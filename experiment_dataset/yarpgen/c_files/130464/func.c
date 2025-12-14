/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130464
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (-2147483647 - 1)))));
    var_14 = ((/* implicit */signed char) (-(((((/* implicit */long long int) (-(((/* implicit */int) var_1))))) - (max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)16352))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */int) (+(-617168990596815037LL)));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 20; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) (short)31);
                        var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_15 [i_4 - 1] [i_4] [i_4] [i_2])))));
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max((2330099777U), (((/* implicit */unsigned int) (_Bool)1))))));
    }
    var_18 = ((((/* implicit */_Bool) var_2)) ? ((~(var_2))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned short)49323))))), (max((((/* implicit */long long int) var_6)), (var_11))))));
}
