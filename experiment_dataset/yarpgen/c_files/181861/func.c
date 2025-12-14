/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181861
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) >= (((/* implicit */long long int) var_8)))))) % (((((/* implicit */_Bool) var_0)) ? (614369413U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19859)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned char) var_13))))) : (var_4)));
    var_16 = var_0;
    var_17 ^= ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) 3680597883U)) : (4593671619917905920ULL))) == (((/* implicit */unsigned long long int) min((var_1), (var_1)))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                    {
                        var_18 -= ((/* implicit */unsigned short) var_4);
                        arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) 13853072453791645697ULL))) > (max((((13853072453791645697ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]))))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) min((var_11), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_7)))))));
                    }
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        var_19 -= ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (614369390U)));
                        var_20 = ((/* implicit */int) max((((/* implicit */long long int) var_14)), (min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))));
                        arr_16 [i_0] = ((/* implicit */long long int) (~(14272236461758784054ULL)));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_12);
}
