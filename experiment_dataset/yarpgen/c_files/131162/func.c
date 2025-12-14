/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131162
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
    var_10 = ((/* implicit */short) min((var_10), ((short)-664)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) (unsigned char)64);
                                arr_11 [i_4] = ((/* implicit */signed char) max((15177392622803024559ULL), (((/* implicit */unsigned long long int) max((131584161), (3145728))))));
                                var_12 = ((/* implicit */short) max((max((-748339001959932408LL), (((/* implicit */long long int) min((-623402226), (623402225)))))), (max((5483704241998301157LL), (((/* implicit */long long int) -623402225))))));
                                var_13 = ((/* implicit */short) (unsigned char)59);
                                arr_12 [i_0] [i_4] [i_2] [7U] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)20382))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) -23LL);
                    var_15 = ((/* implicit */int) (signed char)-85);
                    var_16 = 623402225;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_17 = ((/* implicit */short) max((max((max((-16), (((/* implicit */int) (unsigned short)65533)))), (max((-623402215), (-623402245))))), (946604067)));
                    var_18 = ((/* implicit */unsigned char) -2038228679);
                }
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (unsigned short)65531))));
                var_20 *= ((/* implicit */short) max((((/* implicit */long long int) (signed char)108)), (4610560118520545280LL)));
            }
        } 
    } 
}
