/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102471
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 ^= ((/* implicit */long long int) 369450300);
                arr_5 [i_0] [i_0 + 3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) 1024140672776988799LL)) ? (((/* implicit */int) (unsigned short)7705)) : (((/* implicit */int) (short)25965))))))) % (max((max((((/* implicit */long long int) var_0)), (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) 15094372892642743755ULL)) ? (2291865390U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(max((6046043244565354016LL), (((/* implicit */long long int) (short)12768)))))))));
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                            {
                                arr_12 [i_2] [i_1] [i_2] [i_1] [i_1] = max((max((((/* implicit */long long int) (~(((/* implicit */int) var_14))))), (((long long int) 3333867485225518106ULL)))), (((/* implicit */long long int) max((((/* implicit */int) var_7)), (((int) var_0))))));
                                var_20 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) < ((-(max((arr_9 [i_0] [i_1] [i_2] [i_3] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)6))))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((unsigned long long int) (~(max((((/* implicit */int) (_Bool)1)), (var_1)))))))));
                            }
                            for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                            {
                                arr_15 [i_0 - 1] [i_1] [i_2] [i_3] [i_0 - 1] [i_3] [i_0 - 1] = ((/* implicit */int) (+((-(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) / (var_8)))))));
                                var_22 = ((/* implicit */signed char) max((4299806541852486572ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                            }
                            var_23 += ((/* implicit */long long int) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */long long int) (+(0U)))) == ((~(var_11)))))), ((short)12760)));
}
