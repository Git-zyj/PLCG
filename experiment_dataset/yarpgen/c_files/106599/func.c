/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106599
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
    var_11 = ((/* implicit */signed char) (~((-((+(1600769848509444371LL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] [7] = (-(((/* implicit */int) (unsigned char)140)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_12 = (-(((/* implicit */int) (unsigned short)24)));
                    arr_10 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23640)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)235))));
                                var_14 = ((/* implicit */unsigned char) (_Bool)0);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) min((var_15), ((short)(-32767 - 1))));
                }
            } 
        } 
    }
    var_16 *= ((/* implicit */unsigned char) (unsigned short)58288);
}
