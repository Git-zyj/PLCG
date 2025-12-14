/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17539
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [3] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */short) (unsigned char)4))))) ? (((unsigned long long int) arr_7 [i_0] [i_2])) : (((/* implicit */unsigned long long int) 184602120))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4)))))))) : (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) <= (var_0))))))));
                    var_13 ^= (~(max(((~(((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */int) arr_7 [i_0] [i_0])) ^ (var_4))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
    }
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)56)) : (max((var_4), (((/* implicit */int) (signed char)-41))))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned short) var_9))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (131071ULL)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_10))))))))))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_11)), ((+(((/* implicit */int) (unsigned short)38142))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */int) (signed char)10))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) var_9)))))) : (((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned short)0)))))))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            {
                arr_17 [i_3] &= ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)252)), (arr_12 [i_4 - 1])))) / (arr_13 [i_3] [i_3] [(unsigned char)3])));
                arr_18 [i_3] [i_3] = ((/* implicit */_Bool) ((signed char) (+(((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 + 2] [(_Bool)1]))))))));
            }
        } 
    } 
}
