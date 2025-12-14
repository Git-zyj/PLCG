/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15905
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) 1073610752U))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_4 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_0])))) : (((((/* implicit */_Bool) ((unsigned long long int) 3221356540U))) ? (((((/* implicit */_Bool) var_12)) ? (1073610756U) : (3221356543U))) : (((arr_12 [i_0] [i_1] [i_1] [i_3]) ? (3221356541U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32702)))))))));
                            var_21 = ((/* implicit */long long int) 1073610753U);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 1073610768U))) ? (-1131517354910211427LL) : (((/* implicit */long long int) min((var_16), (var_13))))))));
    var_23 = ((/* implicit */unsigned long long int) 1073610755U);
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -3608465354269767641LL)) ? (((/* implicit */int) (short)-32717)) : (((/* implicit */int) var_17))))) : (var_0)))) ? (var_12) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-32711)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32707)))))))));
    var_25 = ((/* implicit */long long int) var_4);
}
