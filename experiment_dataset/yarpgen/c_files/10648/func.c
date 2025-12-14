/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10648
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
    var_17 = ((unsigned short) (~(((/* implicit */int) ((short) var_14)))));
    var_18 = ((/* implicit */int) ((_Bool) 6130962970266872532LL));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) min(((-(((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (unsigned short)0)))))), ((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [5])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_19 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_2 [(unsigned short)3])) * (((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_1 [(unsigned char)4])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) (+(((1854573773) - (((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (short)-1))))))));
        var_21 = ((/* implicit */signed char) (-((~(((((/* implicit */int) arr_5 [i_1])) << (((((/* implicit */int) arr_6 [i_1] [i_1])) - (22836)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 3; i_2 < 11; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_5 [(unsigned char)8]))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (int i_5 = 2; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_17 [i_1] [i_2] [i_2] [i_3] [i_2] [i_4] [i_5] = arr_13 [i_5] [i_2] [(signed char)11] [i_3] [i_2] [i_2] [i_1];
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)0)) * (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_2] [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 3] [(unsigned short)2] [(unsigned short)2])) ? (((/* implicit */int) ((unsigned short) arr_7 [i_1] [i_1] [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39562))))))))));
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                arr_22 [i_6] = ((/* implicit */long long int) (signed char)92);
                arr_23 [i_1] [i_2 - 2] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [(_Bool)1] [i_6] [(_Bool)1] [i_1] [i_6] [i_6]))) == ((~(arr_16 [i_6] [i_6] [i_6] [i_2] [i_2] [i_1])))));
                var_25 -= (unsigned short)16204;
            }
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                arr_26 [i_1] [i_2 + 1] [(unsigned short)3] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)86))))));
                var_26 = ((/* implicit */unsigned short) arr_5 [i_2 - 2]);
            }
        }
    }
    var_27 = ((((/* implicit */int) (unsigned short)65529)) >> (((/* implicit */int) ((max((var_10), (((/* implicit */long long int) var_5)))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12))))))));
    var_28 = ((/* implicit */signed char) var_4);
}
