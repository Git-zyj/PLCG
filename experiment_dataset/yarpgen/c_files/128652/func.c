/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128652
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) (-(min(((~(arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((int) 2143130397504346674ULL)))))));
                arr_5 [12] [i_1] [i_0] |= ((/* implicit */int) (unsigned short)11613);
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    var_19 = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) min((16979948303890334146ULL), (arr_6 [i_2 - 1] [i_0] [i_0])))) || (((/* implicit */_Bool) ((unsigned short) arr_3 [i_0])))))), (min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1]))))), ((unsigned short)53922)))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_7 [i_0])))))))));
                    arr_9 [i_0] [(unsigned short)5] [i_2] = ((/* implicit */unsigned short) (~(643080677)));
                    arr_10 [i_0] [i_1 - 3] [i_2 - 2] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_18), (((/* implicit */short) arr_7 [i_0])))))) ^ (arr_6 [i_2 + 1] [i_1 - 1] [i_1 + 1]))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_3))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 311679542)) ? (((/* implicit */int) ((((/* implicit */int) ((var_12) && (((/* implicit */_Bool) var_7))))) != (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (unsigned char)122))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
}
