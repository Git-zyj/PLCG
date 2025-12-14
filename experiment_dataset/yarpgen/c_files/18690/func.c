/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18690
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) arr_0 [i_0]);
        var_15 = ((/* implicit */short) max(((+(arr_1 [i_0 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 8795958804480LL))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_0])))))))));
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45478))) == (-1LL)))))) : (min((((/* implicit */long long int) var_2)), (max((-8795958804480LL), (((/* implicit */long long int) (unsigned short)466))))))));
    /* LoopNest 3 */
    for (int i_1 = 4; i_1 < 22; i_1 += 1) 
    {
        for (short i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */short) (~(min((min((8795958804480LL), (((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1])))), (((/* implicit */long long int) (short)4108))))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_1])) ? (arr_6 [i_1 - 1] [i_1 - 1] [i_1]) : (arr_6 [i_1] [i_1] [i_1])))) ? ((-(arr_6 [i_1 + 2] [i_2 + 1] [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1] [i_1])) ? (arr_6 [i_1 - 2] [i_1 - 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)105)))))));
                    var_17 = (short)4099;
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_4))) ^ (((/* implicit */unsigned long long int) arr_6 [i_2 - 1] [i_2 - 1] [i_1]))))) ? (arr_6 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)105)))));
                    var_18 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */int) ((arr_6 [i_1] [i_1] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) >> (((/* implicit */int) arr_3 [i_1])))) != (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) ((arr_6 [i_1] [i_1] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) >> (((((/* implicit */int) arr_3 [i_1])) - (59))))) != (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (var_4)));
}
