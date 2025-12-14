/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101946
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
    var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) min((var_11), (((/* implicit */unsigned short) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) var_4)), (var_10)))))) : (((((_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) var_9))))));
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((9609504109858878640ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) 18446744073709551615ULL);
                                arr_16 [i_1] [i_1] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (((-(max((arr_15 [i_1] [i_1 + 2] [i_2] [i_3] [i_4 + 2]), (((/* implicit */unsigned int) arr_6 [i_1] [i_3])))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((int) (_Bool)1)))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (!(((((/* implicit */int) arr_10 [i_2])) <= (((/* implicit */int) ((short) arr_4 [i_2] [i_3] [i_4]))))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((unsigned long long int) -1789917583)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_24 [i_1] = ((/* implicit */unsigned char) arr_17 [i_0] [i_1] [i_1] [(_Bool)1] [i_6]);
                                var_17 ^= ((/* implicit */int) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) min((((/* implicit */int) var_1)), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224)))))))));
}
