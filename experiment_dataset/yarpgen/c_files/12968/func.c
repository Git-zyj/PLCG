/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12968
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((unsigned int) arr_3 [i_1]));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) 9223372036854775800LL);
                        var_18 = ((/* implicit */unsigned int) -1108286880269250914LL);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((~(arr_14 [i_0] [i_0] [(unsigned short)9] [i_4]))) : (max((8578665580478057579LL), (((/* implicit */long long int) arr_2 [i_0] [i_1])))))), (((/* implicit */long long int) ((short) min((8578665580478057579LL), (-8578665580478057568LL)))))));
                        arr_16 [i_0] [i_1] [i_2] [i_4] [i_1] [i_4] = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]);
                        var_19 = ((/* implicit */long long int) arr_10 [i_4] [i_4] [i_0] [i_4] [i_0] [i_4]);
                    }
                    arr_17 [i_0] = ((/* implicit */unsigned short) ((long long int) max(((-(arr_5 [3U] [i_0] [i_1] [i_1]))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))))));
                    arr_18 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)26337)))) % (((/* implicit */int) (unsigned char)228))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
    var_21 = ((/* implicit */unsigned char) ((signed char) min((var_5), (((/* implicit */long long int) var_11)))));
    var_22 = ((/* implicit */long long int) var_3);
    var_23 = ((/* implicit */unsigned short) (-(min((((((/* implicit */int) var_6)) % (((/* implicit */int) var_4)))), ((-(((/* implicit */int) var_0))))))));
}
