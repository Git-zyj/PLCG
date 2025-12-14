/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142932
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
    var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)70)), ((short)-20094)))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_7))));
    var_15 |= (+(var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (5274056456231806517ULL))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                            {
                                var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_0] [i_4])) && (((/* implicit */_Bool) ((((/* implicit */int) (short)-32763)) / (((/* implicit */int) (_Bool)1)))))));
                                arr_16 [i_3] [i_1] [i_2] [i_3] [i_4] = (((((-(((/* implicit */int) (short)-12457)))) / (((/* implicit */int) arr_4 [i_0] [i_1])))) / (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_2] [i_3])));
                            }
                            var_17 *= ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
            }
        } 
    } 
}
