/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177628
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (((-(((/* implicit */int) arr_1 [i_0])))) - (((/* implicit */int) arr_1 [i_0])));
                    var_20 ^= ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) arr_1 [6U])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 13; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                arr_15 [i_3 - 1] [i_4] [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [(_Bool)1] [i_3 + 2] [(_Bool)1]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_1 [6U])))))) : (3739671862U)));
                arr_16 [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))) <= (((var_13) & (arr_13 [i_3 - 2])))))) >= (((/* implicit */int) (_Bool)1))));
                arr_17 [i_3] [i_3] = ((/* implicit */unsigned char) ((arr_8 [i_4] [i_3 + 2]) > (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [(unsigned char)22])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_10))) <= (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_3 [(signed char)12]))))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) min((((int) var_10)), (((/* implicit */int) var_6))))) : ((+(var_7)))));
    var_22 = ((/* implicit */unsigned short) min(((~(((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) (signed char)-66)) + (83))))))), (((/* implicit */int) (signed char)7))));
}
