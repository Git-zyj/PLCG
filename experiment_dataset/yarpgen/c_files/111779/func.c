/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111779
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-28473))));
        arr_4 [i_0] = (-((((~(-1583593333))) << ((((((~(((/* implicit */int) (unsigned char)40)))) + (69))) - (28))))));
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)30))));
        var_18 *= ((/* implicit */short) (-(((/* implicit */int) var_14))));
        var_19 += ((/* implicit */signed char) (-((~(((/* implicit */int) (!((_Bool)1))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 18; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_7))));
                            var_22 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
                        }
                        arr_17 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)255))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (+(((((-1583593315) + (2147483647))) << (((((/* implicit */int) (short)164)) - (164))))))))));
        var_24 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned char)201))))));
    }
    var_25 = ((/* implicit */long long int) (-(((/* implicit */int) var_15))));
    var_26 ^= ((/* implicit */long long int) (-(((/* implicit */int) (!(((((/* implicit */_Bool) var_2)) || ((_Bool)1))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        arr_21 [i_6] = ((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned short)65525))))));
        arr_22 [i_6] = ((/* implicit */long long int) (~(((((-1768037528) + (2147483647))) << (((((/* implicit */int) (unsigned char)201)) - (201)))))));
    }
}
