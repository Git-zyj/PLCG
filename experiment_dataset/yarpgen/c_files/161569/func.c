/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161569
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 4915759054707851740ULL))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)16970)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)48566)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) var_11))));
    var_16 = ((/* implicit */unsigned char) var_14);
    var_17 |= ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (unsigned char)239);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)251))))) ? (((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (unsigned short)60601)) : ((-2147483647 - 1)))) : (((((/* implicit */_Bool) (unsigned short)48566)) ? (((/* implicit */int) (unsigned short)40162)) : (((int) var_9))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60608)) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) (unsigned short)48566))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4935)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (unsigned char)156))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16376))) : (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57344))) : (3955953309U)))))));
                arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3242))) : (1758724998U)))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)30303)))))));
            }
        } 
    } 
}
