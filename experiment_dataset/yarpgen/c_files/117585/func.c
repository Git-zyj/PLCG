/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117585
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_9 [18LL] [i_1] [18LL] |= ((/* implicit */signed char) (~(min((704752364889441377LL), (((/* implicit */long long int) var_7))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                            {
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (-(704752364889441377LL))))));
                                arr_12 [i_0] [i_1] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */short) max((arr_11 [i_0] [i_1] [i_0] [i_3 - 2] [i_4]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11)))))));
                                var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2] [i_0] [i_2]))));
                                arr_13 [i_4] [i_4] [18LL] [i_4] [i_4] [i_4] |= ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1] [i_4]);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((3039488255260215652LL) ^ ((~(-3039488255260215653LL)))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 4; i_5 < 21; i_5 += 4) 
                {
                    for (short i_6 = 1; i_6 < 20; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((short) ((arr_4 [i_1] [(signed char)3] [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_1])) < (((/* implicit */int) arr_1 [i_5])))))))));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_6] [i_7] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((3039488255260215652LL) - (3039488255260215631LL)))))) ? (arr_0 [i_0]) : ((~((-9223372036854775807LL - 1LL))))))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                } 
                var_16 *= var_6;
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */int) (signed char)-25)) & (var_1)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (var_5)))))))));
}
