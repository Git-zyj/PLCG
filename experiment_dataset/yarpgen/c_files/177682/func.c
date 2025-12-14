/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177682
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
    var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) -787039214))));
    var_21 = ((/* implicit */signed char) ((long long int) max((((/* implicit */int) (_Bool)1)), (var_12))));
    var_22 &= ((/* implicit */unsigned short) var_12);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) ((((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)29))))) > (((((/* implicit */_Bool) (unsigned short)53415)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))))))) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (signed char)125))))) : (812916716)));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) 1588227703)) ? (1102029784) : (((/* implicit */int) arr_1 [i_2])))) : (var_12))))))));
                    var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_26 = var_16;
                                var_27 = ((/* implicit */short) ((int) arr_12 [i_1] [i_1] [i_1] [12ULL] [i_3 - 3]));
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_3 - 2] [i_1] [(signed char)9] [i_3])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_17))))))) * (max((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) / (var_2)))), (max((3441917651U), (((/* implicit */unsigned int) (unsigned short)6606))))))));
                            }
                        } 
                    } 
                    var_29 -= ((((/* implicit */_Bool) (+(1705477526)))) ? (((/* implicit */unsigned long long int) min((853049645U), (((/* implicit */unsigned int) var_0))))) : (((unsigned long long int) 853049645U)));
                }
            } 
        } 
    } 
}
