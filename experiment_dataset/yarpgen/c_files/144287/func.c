/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144287
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (var_3)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) min(((+(((/* implicit */int) (unsigned short)43237)))), (((/* implicit */int) arr_5 [i_1] [i_1])))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(((/* implicit */int) arr_3 [i_0])))))));
                    var_22 = ((/* implicit */_Bool) (unsigned short)16);
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1])) % (((/* implicit */int) min((((/* implicit */short) arr_5 [i_0] [i_0])), (arr_3 [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        for (long long int i_4 = 1; i_4 < 7; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) var_19);
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((_Bool) max((((/* implicit */int) var_7)), (var_12)))) ? (((/* implicit */int) (!(((((/* implicit */int) var_19)) < (((/* implicit */int) (short)-25397))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_13)))) <= (arr_1 [i_6] [i_6])))))))));
                        }
                    } 
                } 
                var_26 ^= (!(((_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) -265208729)) : (arr_0 [i_4 + 4] [i_3])))));
                arr_18 [i_3] [i_4] = ((/* implicit */int) var_19);
            }
        } 
    } 
    var_27 = ((/* implicit */int) var_1);
}
