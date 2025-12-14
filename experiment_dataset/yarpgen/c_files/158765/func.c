/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158765
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0 + 4] [i_1] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))) ? (((((/* implicit */_Bool) 13673438393691008002ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)1))))) & ((~(max((((/* implicit */unsigned long long int) (_Bool)1)), (13677079762865366404ULL)))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 4773305680018543614ULL)) ? (((/* implicit */int) (_Bool)1)) : (316709362))), (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)-69)) : (-8)))))));
                            arr_13 [i_0 + 1] [i_0] [i_0] = ((/* implicit */int) (((+((-(arr_2 [i_0]))))) * (((/* implicit */unsigned int) ((int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_15))))))));
                            arr_14 [i_2 - 2] [i_0] [i_3] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */short) (_Bool)1)), (arr_8 [i_0 - 1] [i_2 + 1] [i_0 - 1] [i_0 - 1] [i_0]))));
                            arr_15 [i_0] = ((/* implicit */_Bool) min((((arr_1 [i_3] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (1931019733))), (((int) arr_1 [i_3] [i_0 - 1]))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned short)46422)) - (((/* implicit */int) var_18)))));
            }
        } 
    } 
    var_20 |= ((/* implicit */signed char) 1U);
}
