/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139614
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) max((min(((-(((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_2] [i_2])))), (((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))), (((/* implicit */int) ((unsigned short) (~(arr_0 [i_1])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) - (arr_5 [i_0 - 1] [(signed char)16] [i_2]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0)))))))) || (((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_0] [i_0] [i_0 - 1] [(signed char)16] [i_3]), (((/* implicit */unsigned char) (_Bool)0)))))) : (max((((/* implicit */long long int) (unsigned char)255)), (arr_0 [i_0]))))))));
                        arr_12 [i_3] [i_3] [(_Bool)1] [i_3] [i_3] = ((/* implicit */int) (unsigned char)197);
                    }
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) var_1)), (((signed char) var_6))))) >= (((/* implicit */int) var_0))));
    var_12 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned char)12))))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (var_6)))))) : (max((((/* implicit */long long int) ((var_1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))), (var_4)))));
    var_13 = ((/* implicit */int) var_7);
}
