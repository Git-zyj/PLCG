/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123916
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_14))))) & (min((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)57760))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)7776)) + (-2097152)));
                        var_20 = ((/* implicit */unsigned char) ((_Bool) (unsigned short)57760));
                        arr_10 [i_0] [i_2] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_2])) || (((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1]))))), (arr_9 [i_1] [i_2] [i_2] [i_3])));
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)57759))))) ? (((/* implicit */int) (unsigned short)7776)) : (((((/* implicit */_Bool) (unsigned short)29332)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))));
                    }
                } 
            } 
        } 
    }
    var_22 *= ((/* implicit */_Bool) (+(var_7)));
    var_23 = ((/* implicit */int) (_Bool)1);
    var_24 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (13054362373812742230ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
}
