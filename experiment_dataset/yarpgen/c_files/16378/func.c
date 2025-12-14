/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16378
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_14 = ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))) & (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) (unsigned char)127)))))) : ((+(var_9))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    var_15 = ((/* implicit */short) var_2);
                    arr_9 [i_0] [i_1] [i_2 - 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1984)) ? (1984) : (((/* implicit */int) (unsigned char)67))));
                }
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    arr_12 [14ULL] = ((/* implicit */_Bool) var_10);
                    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3408546326U)) ? (arr_2 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96)))))) && (((/* implicit */_Bool) arr_2 [i_0])))) ? ((~(((/* implicit */int) ((725885236103150284LL) != (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) : (((/* implicit */int) ((-2070876958) < (((/* implicit */int) arr_4 [i_0] [i_3])))))));
                }
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                    var_18 = ((short) ((((/* implicit */_Bool) arr_7 [13ULL] [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)35))))) : (((/* implicit */int) var_1))));
                }
                arr_15 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                arr_16 [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)99)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-429)))))));
            }
        } 
    } 
}
