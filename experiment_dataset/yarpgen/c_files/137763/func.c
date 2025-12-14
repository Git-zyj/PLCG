/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137763
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 4] [16])) ? (arr_7 [i_0] [i_2 + 2] [i_2]) : (((/* implicit */int) arr_6 [i_0] [i_2 + 2] [(unsigned char)1] [(short)8])))), (((/* implicit */int) ((short) arr_6 [i_0] [i_1] [i_1] [7])))));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */int) (~(((((((arr_4 [i_0] [i_2] [i_0]) + (9223372036854775807LL))) >> (((((-2147483640) - (-2147483602))) + (78))))) ^ (((/* implicit */long long int) arr_10 [i_2 + 4] [i_3] [i_3 - 2] [i_2 + 4] [(unsigned short)16]))))));
                        arr_11 [(_Bool)1] [i_0] [i_2] [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) (short)1199)), (645196559U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_3])))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (~((~(((/* implicit */int) var_13))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (((((/* implicit */_Bool) var_1)) ? (max((645196529U), (3649770739U))) : (((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7810)))))))));
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 12; i_4 += 2) 
    {
        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            for (unsigned int i_6 = 3; i_6 < 12; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 645196559U))));
                    arr_18 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min(((+(3719022421639956090LL))), (((/* implicit */long long int) arr_10 [i_6 - 2] [i_4] [i_5 + 1] [16] [i_4]))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) arr_5 [i_4] [(short)1] [i_4 - 3] [i_4])) : (((/* implicit */int) arr_16 [i_4 - 3] [i_4] [i_4]))))) & (((((/* implicit */unsigned long long int) 16777215)) - (var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (arr_10 [i_4] [i_5] [i_4] [i_6 + 1] [i_6 - 2]))))));
                    arr_19 [i_4] = ((long long int) ((long long int) arr_17 [i_5 - 1]));
                }
            } 
        } 
    } 
}
