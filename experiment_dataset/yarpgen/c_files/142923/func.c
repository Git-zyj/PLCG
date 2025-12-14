/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142923
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
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_7)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) max((1111197816388365561LL), (((/* implicit */long long int) 935655694U))));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                        {
                            arr_13 [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (arr_10 [i_0 + 3] [i_1] [(unsigned short)0] [i_3] [i_4] [i_0] [(unsigned short)11]))), (((((/* implicit */int) ((_Bool) var_1))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_4] [0] [17ULL])) && (((/* implicit */_Bool) var_2)))))))));
                            var_13 = ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-18189)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 2] [i_2] [i_0 - 2] [i_0])) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            arr_17 [i_2] [i_2] [i_2] [i_3] = ((((/* implicit */int) (unsigned short)46827)) + (((/* implicit */int) (unsigned short)14575)));
                            arr_18 [i_3 + 1] [i_1] [i_2] [i_1] [i_0 + 2] [i_0] [i_1] |= ((/* implicit */short) ((_Bool) (short)2046));
                            arr_19 [i_5] [i_2] [i_1] [i_2] [(signed char)7] = ((unsigned char) (-(min((var_6), (((/* implicit */unsigned int) (_Bool)1))))));
                        }
                        for (int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_2] [i_1] = ((/* implicit */int) ((signed char) (unsigned char)238));
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */int) min((max((((/* implicit */unsigned short) var_2)), (var_0))), (((/* implicit */unsigned short) (_Bool)1))))) * (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_2 [(_Bool)1]))))))));
                            arr_24 [i_2] [(short)19] [(short)19] [i_3] [i_3] [i_3] [(short)19] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (arr_21 [i_2] [i_2] [i_0 + 3] [i_3] [i_2] [i_3 + 3]) : (arr_21 [i_2] [i_1] [i_0 - 1] [i_0 - 1] [i_6] [i_3 + 3]))) - (((((/* implicit */int) (unsigned short)28672)) % (((/* implicit */int) (short)32744))))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)41513)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (var_5))) / (((long long int) (short)7307))))) ? (4294967282U) : (((/* implicit */unsigned int) arr_6 [6ULL] [6ULL] [i_2]))));
                        }
                    }
                } 
            } 
        } 
        arr_25 [i_0] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
        var_16 = ((/* implicit */unsigned char) (+(max(((+(-1150574609))), ((+(var_7)))))));
    }
    var_17 = ((/* implicit */int) var_2);
}
