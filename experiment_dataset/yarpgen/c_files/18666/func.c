/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18666
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
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (var_18)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22276))) : (arr_2 [i_0 - 1])));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(arr_1 [i_0 - 2]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_8 [i_1] = (-(((arr_7 [i_1]) & (arr_7 [i_1]))));
        arr_9 [i_1] = ((/* implicit */long long int) arr_6 [i_1]);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_5 [i_1]))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                var_23 -= ((/* implicit */unsigned long long int) ((((min((((/* implicit */long long int) arr_12 [i_2] [i_2] [i_2])), (arr_10 [i_2] [i_2]))) >= (((/* implicit */long long int) (-(65535)))))) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_13 [i_3] [i_3]))))))) : ((~(arr_11 [i_2] [i_3])))));
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 112)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [15ULL] [i_3]))))) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2])))))), (((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (arr_12 [i_2] [20U] [i_2]))))) : (max((((/* implicit */unsigned int) arr_13 [i_2] [i_2])), (1973971904U))))))))));
                arr_14 [i_3] = ((/* implicit */unsigned char) var_15);
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])) ? (max((((/* implicit */long long int) arr_16 [i_4] [i_4] [i_4] [i_4])), (arr_10 [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_18 [i_2] [i_2] [i_2] [i_2]) < (((/* implicit */unsigned long long int) arr_17 [i_2] [i_2]))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) 2401009592491242234LL)))))) : (((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)-21225)))))) + (arr_10 [i_2] [(unsigned short)6])))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -9223372036854775785LL)) ? (((((/* implicit */unsigned int) (+(626353825)))) ^ (((var_15) ? (var_12) : (((/* implicit */unsigned int) 5)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2182058991350980713LL)) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (arr_16 [i_2] [i_3] [i_3] [i_3])))))))))))));
                }
            }
        } 
    } 
}
