/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17273
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (unsigned char)255);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_19 *= (-(((/* implicit */int) arr_10 [i_4] [i_3] [(_Bool)1] [i_1] [16U])));
                                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_6 [i_0] [i_1])))) && ((_Bool)1)));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0 + 4] [i_1] [i_0 - 1]))) % (max((((/* implicit */long long int) var_10)), (5918980804432694087LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23771))) : (var_11)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_3);
    var_22 = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) 4294967295U)))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            {
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~((+(((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)254)))))))))));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    var_24 = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) % (7388758211933706201LL)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        arr_22 [i_5] [i_5] = ((/* implicit */int) (unsigned short)42416);
                        var_25 = ((/* implicit */int) max((var_25), (max((var_5), (((((/* implicit */int) ((var_10) > (var_10)))) & (((/* implicit */int) var_7))))))));
                        var_26 = ((/* implicit */signed char) var_16);
                        var_27 = ((/* implicit */_Bool) (-2147483647 - 1));
                        arr_23 [i_5] [i_7] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5]))) > (var_15))));
                    }
                    var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_5] [i_6] [i_7])) <= (((/* implicit */int) ((signed char) var_14)))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) 9007199254740991ULL);
                                var_30 = ((/* implicit */unsigned char) ((_Bool) arr_19 [i_10 - 1] [i_6] [i_5]));
                                var_31 = ((/* implicit */unsigned char) ((short) (_Bool)1));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                }
                var_33 ^= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) var_16)), (((var_9) << (((var_15) - (2403363618U))))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)49)) << (((((/* implicit */int) var_3)) - (34066))))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) / (((((/* implicit */_Bool) (unsigned char)184)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_1) : (((/* implicit */unsigned long long int) -331361722)))) : ((+(var_11))))))))));
}
