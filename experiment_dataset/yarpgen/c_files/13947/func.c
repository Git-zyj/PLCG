/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13947
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
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0 - 3] [i_1 + 1]) << (((3145728U) - (3145708U)))))) ? (((/* implicit */int) min(((unsigned short)42290), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29)) && (((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 3])))))));
                var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_1 [i_0] [i_0 + 3])))));
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)8170), ((unsigned short)65497)))) ? (((/* implicit */unsigned long long int) max((arr_1 [i_0 - 1] [i_0 + 4]), (arr_0 [i_0] [i_1 - 2])))) : (((((((/* implicit */_Bool) 3238332847733557464LL)) ? (((/* implicit */unsigned long long int) -3238332847733557464LL)) : (9179681555475077906ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)55032))) - (3249137511133942021LL))))))));
                arr_6 [i_0] [i_0 + 4] [i_0] = ((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 4]);
                var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_1 [i_1 + 1] [i_1 - 2])) : (1010228750150857610LL))) > (((/* implicit */long long int) 2563133527U))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((var_8) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_0)))))) : (var_8)));
}
