/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189175
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)220)) | (((/* implicit */int) (unsigned char)253))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1] [i_1]))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */int) ((((/* implicit */int) (unsigned char)243)) >= (((/* implicit */int) (unsigned char)20))))) ^ (((/* implicit */int) arr_4 [i_4] [i_3] [i_2 - 1]))))));
                                var_21 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_4] [i_2])) | (((/* implicit */int) (signed char)(-127 - 1))))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) >> (((((/* implicit */int) var_8)) - (11214)))))) : (((((/* implicit */_Bool) -5239045314309378397LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [3] [3] [i_4])) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) arr_7 [i_4] [i_3] [i_2 - 1]))))) : (arr_3 [i_0] [i_0] [i_4])))));
                                var_23 += ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((-182082282157272214LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))))) % (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_1 + 3])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_14);
}
