/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112890
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
    var_20 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_12)) >> ((((-(((/* implicit */int) var_16)))) + (6414))))), (((((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned char)192)))) ^ (((/* implicit */int) (short)17730))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (((+(((/* implicit */int) var_4)))) <= (((/* implicit */int) var_3)))))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) >= (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) < (((/* implicit */int) arr_6 [i_1])))))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) var_11)))))) : (4079940584U)));
                arr_7 [i_0] [i_0] [2LL] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (17592186040320ULL))))) ^ (2985067221286064184ULL)));
            }
        } 
    } 
}
