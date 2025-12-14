/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183599
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
    var_20 = ((/* implicit */int) ((long long int) min(((~(15542049686185279840ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65521))))))));
    var_21 = ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) (unsigned char)138)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)54537)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_22 = min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65521)) | (((/* implicit */int) arr_2 [i_0 - 1]))))), ((-(arr_6 [i_0 + 1] [i_0 + 1]))));
                arr_7 [6] [(short)8] [i_1] &= var_16;
                var_23 = ((/* implicit */unsigned long long int) ((long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) <= (1099511627775ULL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29))) ^ (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65503))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 524288ULL)) ? (-4559427411767858304LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? ((~(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                arr_16 [1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-13167)), (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17890048476731971523ULL))))) : (((/* implicit */int) max((arr_0 [i_2] [i_3]), (arr_0 [i_2] [i_2]))))));
                arr_17 [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_9 [i_2])) <= (((/* implicit */int) (short)-5217))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (unsigned short)41368))));
}
