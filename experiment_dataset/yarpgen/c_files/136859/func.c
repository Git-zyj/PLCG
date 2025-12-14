/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136859
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((7390639916776371721LL) == (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) : ((~(((/* implicit */int) var_7))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_18 = ((/* implicit */long long int) min((((17060931805857486454ULL) * (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8399)) % (((/* implicit */int) var_14)))))));
            arr_7 [i_1] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) min((8638271246092651816ULL), (((/* implicit */unsigned long long int) var_11)))))))), ((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)8)) > (2147483647))))))));
        }
        for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-22420))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775794LL)) ? (((/* implicit */long long int) ((((/* implicit */int) ((3416516021U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164)))))) % (((/* implicit */int) var_9))))) : (min((-1586533309197129961LL), (((/* implicit */long long int) max((var_4), (((/* implicit */int) (_Bool)0)))))))));
                            arr_21 [i_0] [i_2 - 1] [i_3 - 1] [i_4] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_7 = 1; i_7 < 22; i_7 += 3) 
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */int) var_14)) ^ (((/* implicit */int) (short)-18893)))) : (((/* implicit */int) var_5)))))));
                    arr_26 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_7 - 1])) ? (var_13) : (((/* implicit */long long int) (-2147483647 - 1)))))) ? (var_17) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (-2083594503) : (((/* implicit */int) (_Bool)1)))))));
                    var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)-28158)) ? (-7511523963223464514LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                }
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 5015381489982638929ULL)) ? (((/* implicit */unsigned long long int) -4429126908917737730LL)) : (((12059469635688612719ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47)))))));
                    arr_31 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)0))));
                }
                arr_32 [i_6] [i_2] [i_0] = ((/* implicit */signed char) (_Bool)1);
                var_24 = ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) (signed char)66)) < (((/* implicit */int) arr_18 [i_6] [i_6] [i_6] [i_2 + 1] [i_0]))))), ((unsigned short)15281)))), (((min((((/* implicit */long long int) (unsigned short)34676)), (arr_5 [i_6] [i_6]))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_15)), ((short)-15227)))))))));
            }
            var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (1873781627U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116)))))), ((+(arr_30 [i_2 + 1])))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)28)))))))) : (((((/* implicit */long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned short)0))))) + (-2601556416726218283LL)))));
        }
        var_26 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)248)))) / (((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */int) (short)10545)) : (-1)))));
    }
    for (short i_9 = 2; i_9 < 12; i_9 += 4) 
    {
        var_27 = ((/* implicit */unsigned long long int) (unsigned char)8);
        arr_36 [i_9 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 72238109)) || (((/* implicit */_Bool) 4542613815519432957LL)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))))) : (var_3)));
    }
    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
    var_29 = ((/* implicit */short) (_Bool)1);
}
