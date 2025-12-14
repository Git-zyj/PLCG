/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168334
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
    var_13 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    var_14 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((-1268616) + (2147483647))) >> (((var_8) - (10392139207919303846ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_2]))))) : (((/* implicit */unsigned int) 1531560006))))) : (((((/* implicit */_Bool) max((var_10), (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) 1268616))))) : (arr_3 [i_0])))));
                    var_15 -= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)7]))))), (max((((((/* implicit */_Bool) -6571542444642956677LL)) ? (((/* implicit */int) var_6)) : (var_4))), (arr_5 [i_0] [i_1] [i_2] [i_2])))));
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) arr_3 [4LL]))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_4)) : (var_8)))))), (var_0)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            {
                var_16 -= ((/* implicit */unsigned char) (~(min(((+(var_0))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)58177)), (var_7))))))));
                var_17 += ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_4] [i_4] [i_4])), (var_10)))) ? (min((var_8), (((/* implicit */unsigned long long int) arr_7 [i_3])))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_11)), (var_10)))))) >> (((((((/* implicit */_Bool) -1268624)) ? (((/* implicit */unsigned long long int) (~(arr_7 [(_Bool)1])))) : (0ULL))) - (18446744072090214031ULL)))));
            }
        } 
    } 
}
