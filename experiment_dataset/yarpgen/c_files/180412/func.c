/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180412
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [15U] [i_0] [15U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2515418343U))));
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_6))));
                    arr_8 [i_0] [10U] [i_0] [i_0] = ((/* implicit */unsigned short) (+(1779548952U)));
                    var_14 = arr_0 [i_1];
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 3064724671U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)512))) : (1779548949U)))));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((((/* implicit */int) var_8)), (((((/* implicit */int) ((((/* implicit */_Bool) 2515418343U)) || (((/* implicit */_Bool) (unsigned short)39059))))) & (((/* implicit */int) arr_4 [i_2] [i_2])))))))));
                        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) % ((-(((((/* implicit */_Bool) 1779548953U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)62))))))));
                        var_18 -= ((/* implicit */short) ((1779548965U) - (2515418343U)));
                        var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_6))));
    var_21 = (+((+(2515418336U))));
    var_22 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-8)) < (((/* implicit */int) ((((/* implicit */int) var_7)) > (var_12)))))))) ^ (max((((/* implicit */long long int) (+(var_12)))), (var_1))));
    var_23 += ((/* implicit */short) ((-1014135158) <= (((/* implicit */int) var_7))));
}
