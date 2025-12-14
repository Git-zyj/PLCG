/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156923
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-31805)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))))) : ((-(((((/* implicit */_Bool) (short)-15532)) ? (((/* implicit */int) (short)-1726)) : (((/* implicit */int) (short)-31805))))))));
                var_18 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-11369)))))));
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-56))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)21467)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28431))) : (11761858277864344132ULL)));
                    }
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (short)1284);
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 23; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_4] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (unsigned short)32764)))), (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10927193075141040515ULL)) ? (((/* implicit */int) (unsigned short)37230)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (17060723365991841400ULL)))));
                                arr_17 [i_2] [i_4] = ((/* implicit */long long int) min(((+(17060723365991841400ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-256)))))) : (min((-4326653586903412974LL), (((/* implicit */long long int) var_4)))))))));
                                var_22 &= ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22855))) : (-1105091359651664639LL))), (((/* implicit */long long int) (+(((/* implicit */int) (short)-14458)))))))));
                                var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((((/* implicit */_Bool) 3041946048768849534LL)) ? ((~(6362159195027208658ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-256))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31805)))));
                                var_24 = ((/* implicit */signed char) ((long long int) (~(9007199254216704LL))));
                            }
                        } 
                    } 
                }
                for (short i_6 = 3; i_6 < 22; i_6 += 4) 
                {
                    var_25 = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)-99)))) ? (((((/* implicit */_Bool) 9007199254216704LL)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (unsigned short)19980)))) : (((/* implicit */int) ((short) (unsigned short)2857)))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -4902001641923587864LL)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (unsigned short)19980))))));
                                var_27 = ((((/* implicit */_Bool) max((-871674157003081906LL), (-412721619123825638LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6445)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (unsigned short)49614)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) (signed char)-19))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) -9007199254216714LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (635129106857151526LL))))));
                                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-((-(((/* implicit */int) (short)31805)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_29 = var_6;
}
