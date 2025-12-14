/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187341
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_11 [i_4] [i_4] [i_2] [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] = arr_2 [i_0];
                                var_12 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_4] [4ULL]))) - (17218918674585443680ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-95)))))) : (max((17643383893488712461ULL), (17643383893488712446ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)254), (((/* implicit */unsigned char) arr_7 [i_4]))))))));
                                arr_12 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) != (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_3])))), ((+(((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                    var_13 = ((((/* implicit */_Bool) ((arr_2 [i_0]) - (((/* implicit */int) ((((/* implicit */int) (unsigned short)16434)) > (((/* implicit */int) arr_6 [i_2] [i_1] [i_2])))))))) ? (13537044992567798986ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((144373003U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) var_8)))))));
                    arr_13 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) (unsigned short)49737);
                    arr_14 [i_2] [i_1] [(short)11] = ((/* implicit */unsigned short) 144372998U);
                    arr_15 [i_0] [(short)4] [5] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) << (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (min((var_8), (((/* implicit */unsigned short) (_Bool)1)))))))));
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((+(4909699081141752634ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)21114)) != (((/* implicit */int) (_Bool)1))))))))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) 3183023930U))));
}
