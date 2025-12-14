/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158680
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (~((~(((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_5))))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) (~((~(((6165056515902446302ULL) & (5405860394586349077ULL)))))));
                var_16 = ((/* implicit */unsigned char) (signed char)2);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+((+(max((8388607U), (((/* implicit */unsigned int) (unsigned char)19))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (unsigned char)19);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) var_8);
                                var_19 = ((/* implicit */unsigned long long int) min((max(((+(((/* implicit */int) (unsigned char)237)))), (((/* implicit */int) (unsigned char)207)))), (((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) (unsigned char)18))))))));
                                var_20 = ((/* implicit */signed char) var_8);
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)236)) + (((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (unsigned char)17))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
