/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170851
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((~(4113576451811135719ULL))) << (((/* implicit */int) (!(((/* implicit */_Bool) 7031043633523614066LL))))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11542)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (5006226418046585185LL)));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-11859)))))))) || (((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned int) (short)-27433)), (1091086007U)))))));
                    arr_10 [i_0] = ((/* implicit */unsigned int) ((short) 1091086023U));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0] [i_1])) && ((_Bool)0))))));
                    arr_15 [i_0] [i_0] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (signed char)56)), (3330643388012296076ULL))))))));
                    var_15 = ((/* implicit */signed char) (!(((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1] [i_3]))))) < ((-(483034028U)))))));
                }
                var_16 &= ((/* implicit */int) (((+(((/* implicit */int) arr_4 [i_0] [i_1])))) >= ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [2ULL] [i_1])))))))));
                var_17 = ((/* implicit */_Bool) 3203881282U);
            }
        } 
    } 
    var_18 += ((/* implicit */int) (short)18469);
    var_19 |= ((/* implicit */unsigned long long int) (~(var_5)));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_12)))) ? (1111224854U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
}
