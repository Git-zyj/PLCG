/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17684
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
    var_16 = ((/* implicit */unsigned long long int) var_13);
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(25)))) > (var_6))))));
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((39) < (((/* implicit */int) var_15))))))) + ((~(((/* implicit */int) var_13))))));
    var_19 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((min(((~(((/* implicit */int) (unsigned char)216)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)216)) && (((/* implicit */_Bool) arr_0 [i_0]))))))) >= (((((/* implicit */int) var_5)) & (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]))))));
                var_20 |= ((/* implicit */signed char) (unsigned short)65535);
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    var_21 = 65528U;
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_22 |= ((/* implicit */signed char) (unsigned char)40);
                                arr_15 [i_0] [i_1] [(signed char)16] [(signed char)16] [i_3] [i_2] [13ULL] = (~(arr_8 [i_0] [i_1] [i_2] [7U] [i_4] [i_2 + 1]));
                            }
                        } 
                    } 
                    var_23 ^= max((max((((/* implicit */unsigned int) (!(var_13)))), ((~(169972736U))))), (((/* implicit */unsigned int) (unsigned char)216)));
                }
                arr_16 [i_0] [i_1 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((max((arr_3 [i_0]), ((unsigned char)215))), (((/* implicit */unsigned char) var_13))))) - (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == ((-(var_4))))))));
            }
        } 
    } 
}
