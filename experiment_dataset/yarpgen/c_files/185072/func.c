/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185072
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) ((((((/* implicit */_Bool) 8846472726577273760LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))))) : ((~(((/* implicit */int) arr_3 [i_2] [i_0]))))));
                    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((3429680540U) * (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) min((arr_0 [i_0] [i_1]), ((unsigned short)60358))))))) ? ((+(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_0)) : (var_16))))) : (((/* implicit */unsigned long long int) (~(((var_9) ? (var_2) : (((/* implicit */int) (unsigned short)5150)))))))));
                    var_19 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_3 [19ULL] [i_1])) ? (4082434909U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) / ((+(min((var_0), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 19; i_3 += 3) 
    {
        for (long long int i_4 = 1; i_4 < 19; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) var_5);
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_6 [i_3 + 1] [i_3] [i_5])) > (((/* implicit */int) arr_2 [i_3 - 1] [i_4])))))))) ? (min((((((/* implicit */_Bool) arr_13 [i_3 + 1] [2ULL] [i_4] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3 - 1] [i_3 - 1]))) : (arr_12 [i_3 + 1] [i_3 + 1] [i_5]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            {
                                arr_21 [i_3 + 1] [i_3 + 1] [i_5] [i_6] [i_3] = ((/* implicit */short) (+((-(((((/* implicit */int) var_7)) + (((/* implicit */int) var_9))))))));
                                arr_22 [i_3] [i_6] [i_5] [i_4] [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (signed char)41))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */long long int) var_11)), (var_10)))))));
                                var_22 = ((/* implicit */unsigned int) var_9);
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) max((arr_19 [i_7] [i_6] [i_5] [i_4] [i_4] [i_3 - 1] [i_3]), (((/* implicit */int) arr_4 [i_3] [i_5] [i_6])))))) ? ((~(var_5))) : (((/* implicit */int) (signed char)-25))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) 212532375U);
}
