/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133840
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
    var_14 += ((/* implicit */unsigned char) -128839217);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_11 [(_Bool)1] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-10318))));
                            var_15 = (((+(min((var_12), (((/* implicit */unsigned long long int) (_Bool)1)))))) >> (((/* implicit */int) max((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) arr_8 [i_3 - 3] [i_1] [i_1])) == (((/* implicit */int) (unsigned char)7))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) 0);
                var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) (signed char)6)), (min((((/* implicit */short) arr_4 [i_0])), ((short)-32756))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_18), (((unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)194))))))));
}
