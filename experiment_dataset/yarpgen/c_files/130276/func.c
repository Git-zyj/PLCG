/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130276
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_14 = (~(((/* implicit */int) (short)-2278)));
        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) > (((((/* implicit */_Bool) 3801072163597192078LL)) ? (7ULL) : (7ULL)))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57837))) % (4024978028U))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), ((unsigned short)41813)));
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)56726)), (631706294)))), (var_5))) : ((+(((1257539285099751305LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7698)))))))));
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            {
                arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) var_10);
                var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((3895468447683799585LL), (((/* implicit */long long int) (short)12424))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_2))))) >= (max((((/* implicit */long long int) var_0)), (-4718036870970381073LL))))))) : (4024978028U)));
                /* LoopNest 2 */
                for (unsigned short i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((((((((/* implicit */_Bool) ((var_12) >> (((((/* implicit */int) (unsigned short)53705)) - (53704)))))) ? ((+(((/* implicit */int) (short)-1512)))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)1024)) : (((/* implicit */int) (unsigned short)480)))))) + (2147483647))) << (((((/* implicit */int) (short)19067)) - (19067)))));
                            arr_15 [(unsigned char)2] [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_2))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_11))))) : ((((+(3895468447683799585LL))) % (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)2046)))))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1]))))) : ((+(((/* implicit */int) arr_0 [i_1 + 1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
