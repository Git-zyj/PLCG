/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175370
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
    for (unsigned short i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8452))) : (17162187288335876480ULL)))) ? (min((((/* implicit */long long int) (unsigned short)10770)), (arr_5 [i_0] [i_1 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1828264863U)) && (((/* implicit */_Bool) (unsigned short)34619))))))))) || (((/* implicit */_Bool) (signed char)-123))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 6; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(2147483647)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0] [i_0 + 3] [(unsigned char)2] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))) - (arr_3 [i_0])))) ? (min((2147483638), (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) arr_10 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_4])))))));
                                var_19 = ((/* implicit */signed char) (!(min((arr_2 [i_1 + 1] [i_1 + 1]), (arr_2 [i_1 - 1] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((min((((((/* implicit */int) var_10)) ^ (-2147483638))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-1)))))) > ((-2147483647 - 1)))))));
}
