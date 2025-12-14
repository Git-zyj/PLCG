/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112199
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
    var_19 = ((/* implicit */_Bool) var_10);
    var_20 -= ((/* implicit */unsigned char) var_14);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) ((_Bool) (unsigned short)0));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((var_0) >= (((/* implicit */int) var_13))))), (var_14)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) (unsigned short)50066))), (((long long int) (unsigned short)8))));
                                var_24 *= ((/* implicit */short) 1048574);
                                var_25 = ((/* implicit */unsigned long long int) ((1048574) >= (((/* implicit */int) ((_Bool) (unsigned short)26364)))));
                                var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1678249017)) & ((((_Bool)0) ? (16864205849287127590ULL) : (((/* implicit */unsigned long long int) 3633817094U))))));
                                var_27 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)8144)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            for (long long int i_6 = 1; i_6 < 12; i_6 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 3; i_7 < 13; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)198))) < (var_14)))) | (((/* implicit */int) var_12))))) / (max((((/* implicit */unsigned long long int) (signed char)41)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))) : (var_17)))))));
                        var_29 = ((/* implicit */long long int) ((((var_1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)65198)))) / (((/* implicit */int) var_18))));
                        var_30 = ((/* implicit */unsigned int) var_16);
                    }
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_15)))), (((/* implicit */int) ((10870514681280376788ULL) >= (4744226745104954554ULL)))))))));
                }
            } 
        } 
    }
}
