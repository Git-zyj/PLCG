/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12996
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (-((-(((int) arr_6 [i_0] [i_0] [i_1] [i_2]))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */short) max((((/* implicit */long long int) (short)0)), (((0LL) / (((/* implicit */long long int) 572863511U))))));
                        var_18 -= ((/* implicit */long long int) min((((((/* implicit */int) (short)-26090)) / (((/* implicit */int) min(((short)-9), ((short)18)))))), (((/* implicit */int) ((short) max((6198214076273911701LL), (((/* implicit */long long int) 2147483636))))))));
                    }
                    for (long long int i_4 = 1; i_4 < 6; i_4 += 3) 
                    {
                        var_19 += ((((/* implicit */_Bool) (short)15291)) ? ((~(max((-6198214076273911680LL), (((/* implicit */long long int) 0U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) (short)-32762)) : (((((/* implicit */int) (short)-9)) | (((/* implicit */int) var_10))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_2] [(short)8] = ((int) (~(((arr_2 [i_1]) / (((/* implicit */long long int) arr_4 [i_4 + 4] [i_1] [i_0]))))));
                        var_20 = ((/* implicit */long long int) (+(((((/* implicit */int) min(((short)32736), ((short)20684)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])))))))));
                        var_21 &= ((/* implicit */short) ((((((/* implicit */int) (short)-14069)) + (2147483647))) >> (((2969793621U) - (2969793612U)))));
                    }
                    arr_15 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [1LL] [(short)9] [(short)9] [i_2])) ? (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)15))) : (arr_7 [i_0] [i_1] [i_2]))) >> (((((/* implicit */int) (short)4044)) - (3997))))) : (min((((long long int) -3226747721209262231LL)), (((/* implicit */long long int) (!(((/* implicit */_Bool) 3781055332U)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) 513911945U);
}
