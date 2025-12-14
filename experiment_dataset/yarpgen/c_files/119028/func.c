/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119028
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
    var_12 |= ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)12293))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_12 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_3] [i_4])) ? (var_5) : (((/* implicit */int) arr_3 [i_1] [i_4])))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)186)), (11047609935266644820ULL))) : (((/* implicit */unsigned long long int) var_1))));
                                var_13 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -575024135)) ? (((/* implicit */int) (short)3229)) : (((/* implicit */int) (signed char)-3))))) || (((/* implicit */_Bool) (short)-3219)))));
                                var_14 = ((/* implicit */int) (signed char)37);
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)3)) ? (1751546260) : (((/* implicit */int) (signed char)-8)))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_0] [i_0] [i_1]);
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2 - 2] [i_2] [i_1])) ? (arr_10 [i_1] [i_1] [i_2 + 1] [i_2 - 1] [i_2]) : (arr_10 [i_1] [i_2] [i_2 - 2] [i_2] [i_2])))) == (((unsigned long long int) var_10))));
                    var_17 = max((((/* implicit */int) ((unsigned char) arr_10 [i_1 - 1] [i_1 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 2]))), ((~(((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_2 - 2] [i_2 + 1] [i_2 - 2])))));
                }
            } 
        } 
    } 
}
