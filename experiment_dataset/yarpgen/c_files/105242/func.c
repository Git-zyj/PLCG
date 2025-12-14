/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105242
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((var_12), (((/* implicit */unsigned int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(var_10)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)119))))) ? (2892230805U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8)))))))));
                var_14 += ((/* implicit */long long int) max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (signed char)70)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-11))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) (unsigned char)128)))));
                var_16 = ((((/* implicit */int) (unsigned char)119)) >= (((/* implicit */int) (unsigned short)46880)));
                var_17 = ((/* implicit */signed char) ((((int) arr_3 [i_1 + 2])) ^ (((((((((/* implicit */int) (unsigned short)17506)) | (((/* implicit */int) (signed char)-38)))) + (2147483647))) << (((((((/* implicit */int) var_9)) << (((((/* implicit */int) var_3)) - (45762))))) - (1520)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 23; i_2 += 1) 
    {
        for (unsigned int i_3 = 2; i_3 < 23; i_3 += 2) 
        {
            {
                arr_12 [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) 2892230831U)) : (((((/* implicit */_Bool) var_5)) ? (arr_6 [i_2 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    arr_16 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) min((arr_13 [i_2]), (arr_13 [i_2])))) : (((/* implicit */int) arr_13 [i_2]))));
                    arr_17 [i_2] [6] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))) : ((~(arr_6 [i_2]))))) : (((/* implicit */long long int) max((((/* implicit */int) ((_Bool) var_2))), (((((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) >> (((((/* implicit */int) arr_11 [i_2] [i_3] [i_3])) - (65100))))))))));
                }
            }
        } 
    } 
}
