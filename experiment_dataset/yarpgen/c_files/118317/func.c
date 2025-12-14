/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118317
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)21952))) + (((((/* implicit */_Bool) -5360792538457415387LL)) ? (4353549431222509017LL) : (((/* implicit */long long int) -1337158254))))))) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_0] [15])), (2198486384640ULL))) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))))));
                var_14 = ((/* implicit */signed char) ((((4353549431222509017LL) == (((/* implicit */long long int) -2129281440)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) != (max((((/* implicit */long long int) (short)16384)), (-4353549431222509010LL))))))) : (((min((arr_1 [i_0]), (arr_4 [i_0] [8U] [i_1]))) - (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1 - 1] [i_4 + 1] [(unsigned short)0])) > (((/* implicit */int) arr_9 [i_1 - 1] [i_4 + 1] [i_1 - 1])))))));
                                arr_14 [i_0] [i_4] [i_2] [2] [i_4] [i_3] [i_4] = ((((((/* implicit */_Bool) arr_3 [i_4 - 3] [i_4 - 3] [i_4 - 1])) ? (arr_7 [i_0] [i_1] [i_2] [i_4]) : (-4353549431222509018LL))) - (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_3])))));
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_2])) / (arr_13 [i_1 - 1]))))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3] [i_1 + 1] [9ULL]))))) - (((/* implicit */int) (!(((/* implicit */_Bool) -1672902795))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-1672902795)))) && (((/* implicit */_Bool) -5360792538457415387LL))));
                }
                arr_15 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] = ((/* implicit */long long int) ((unsigned short) (-9223372036854775807LL - 1LL)));
                var_19 = ((/* implicit */unsigned char) (((-(-4353549431222509018LL))) >> (((((/* implicit */int) max((arr_9 [i_0] [i_1 + 1] [i_0]), (arr_9 [i_0] [i_1 + 1] [i_1 + 1])))) - (25979)))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_0);
    var_21 = ((/* implicit */unsigned long long int) min((((max((((/* implicit */unsigned int) (unsigned short)14337)), (var_7))) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)238)))))));
}
