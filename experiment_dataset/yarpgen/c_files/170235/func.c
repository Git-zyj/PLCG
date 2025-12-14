/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170235
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
    var_17 |= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) var_3);
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */unsigned short) (unsigned char)52);
                            arr_12 [i_1 + 1] [i_0] [i_2] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) (_Bool)1)), (arr_7 [i_0] [i_0]))), (((/* implicit */unsigned short) ((_Bool) max(((unsigned char)32), (((/* implicit */unsigned char) arr_0 [i_1 - 1]))))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned char)224))) ? (-3201306594838786357LL) : (min((((/* implicit */long long int) arr_0 [i_1])), (arr_3 [i_1] [i_1 - 1] [i_1 + 2])))));
                            var_20 |= ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]);
                            var_21 = ((/* implicit */short) (~(var_2)));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */int) (unsigned char)16)) * (((/* implicit */int) (unsigned char)224))))));
                var_22 = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_1 + 1] [i_0]))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (var_11)));
    var_24 = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned int) var_2)))))))));
    var_25 = ((/* implicit */int) max((min((((/* implicit */long long int) var_12)), ((+(var_8))))), (((/* implicit */long long int) var_13))));
}
