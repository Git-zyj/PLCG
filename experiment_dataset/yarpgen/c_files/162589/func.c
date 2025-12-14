/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162589
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) ((var_13) == ((-(((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) min((((((/* implicit */int) var_15)) == (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_4 [11LL] [11LL] [i_1]))))))) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
                arr_5 [(signed char)9] [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_2 [i_0] [i_1])) >= (((/* implicit */int) arr_1 [i_1] [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_18);
    var_22 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_10))))), ((-(var_17))))) - (((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (var_17))) - (((/* implicit */unsigned int) (+(var_6))))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_7 [i_2] [i_3]), (arr_7 [i_2] [i_3]))))) + (var_11)));
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_6)) < (min((((/* implicit */unsigned int) ((-433239728) / (433239742)))), (((4294967292U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [11U]))))))))))));
                var_25 = (~(min((((/* implicit */long long int) -433239725)), (min((arr_8 [i_3] [i_3]), (((/* implicit */long long int) var_16)))))));
            }
        } 
    } 
}
