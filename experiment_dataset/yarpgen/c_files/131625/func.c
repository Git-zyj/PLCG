/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131625
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
    var_16 = ((((/* implicit */int) var_3)) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) (short)15840)) > (((/* implicit */int) (short)-15840))))) : (((/* implicit */int) var_0)))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) var_1)) | (((/* implicit */int) ((unsigned char) var_12)))))));
    var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_11)) ? ((~(var_12))) : (((((/* implicit */int) var_3)) | (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned short) arr_13 [i_1 - 2] [i_1] [i_4] [i_4] [i_4]);
                                arr_14 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) ((3112301875U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                                arr_15 [i_0] [i_0] [0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max((min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_11 [i_1])))), (((/* implicit */unsigned short) min(((short)-23311), ((short)-15840)))))))) * (((((/* implicit */_Bool) (short)23311)) ? (3532884601U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] = ((/* implicit */unsigned int) var_5);
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned int) var_3);
}
