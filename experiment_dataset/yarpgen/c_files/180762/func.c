/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180762
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
    var_14 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1690436564)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (short)31612))))) || (((((/* implicit */_Bool) (unsigned char)202)) || (((/* implicit */_Bool) arr_12 [15] [i_3] [15] [6U] [i_0] [i_0])))))), (((((/* implicit */_Bool) (short)20246)) && (((/* implicit */_Bool) (short)-20574))))));
                                arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1683184409)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_3]))) : (arr_0 [i_1 + 2] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)31624)) / (((/* implicit */int) (short)31624))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) min(((short)31611), (((/* implicit */short) arr_1 [i_0]))))), (arr_6 [i_0])))) : (((((/* implicit */_Bool) arr_3 [(unsigned short)4] [i_3] [i_0])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)208)), (arr_5 [i_0] [i_4])))) : (((((/* implicit */_Bool) (short)20566)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) arr_6 [i_0]))))))));
                                var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26791))) : (727147200U)));
                                var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)151)) * (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [i_4 - 1]))))) ? (((/* implicit */int) (short)7583)) : (((/* implicit */int) (short)-3157)))), (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)-31630))) < (((/* implicit */int) (unsigned char)167)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) ((short) 1660205585));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((1084865091U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130)))))) - (((((/* implicit */_Bool) arr_5 [i_2] [i_1 + 2])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 1])) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_1 - 1]))))));
                }
            } 
        } 
    } 
}
