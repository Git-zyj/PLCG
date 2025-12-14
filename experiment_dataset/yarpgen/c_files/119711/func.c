/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119711
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [13LL] [(signed char)11] [i_3] [i_0] = ((((((/* implicit */int) (short)7075)) << (((((/* implicit */int) arr_5 [i_3 - 1])) - (63))))) ^ (((/* implicit */int) (_Bool)1)));
                            arr_11 [i_3] [i_1] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (2905237166U));
                            arr_12 [i_1] [i_1] [1] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_3 + 1] [i_3 - 1])) ? ((~(((/* implicit */int) arr_7 [i_0])))) : (((/* implicit */int) arr_8 [i_0] [i_3 - 1] [i_3] [15ULL] [i_3])))));
                            arr_13 [(unsigned char)4] [(unsigned char)4] [i_2] [i_3] [i_1] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_6 [i_0] [i_1] [i_2] [i_3])))))))) ^ (((((/* implicit */_Bool) 1389730130U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((unsigned long long int) var_13))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_0] [i_0] [(short)10] [i_1]) != (((/* implicit */unsigned int) var_8)))))) & (((max((2905237166U), (arr_6 [i_0] [i_1] [i_1] [i_1]))) << (((/* implicit */int) arr_2 [i_1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
}
