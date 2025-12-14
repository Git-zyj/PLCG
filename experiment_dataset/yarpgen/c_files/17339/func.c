/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17339
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
    var_14 *= ((/* implicit */short) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_13)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)4951))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((arr_2 [i_0]), ((_Bool)1)))))) | ((~(((/* implicit */int) var_5))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) arr_8 [i_0] [i_1] [i_2] [i_2] [i_2] [(unsigned char)14]);
                            arr_11 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0]))))) ? (((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned char)145)))));
                            var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(short)12])) || (((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [(signed char)1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))) : (max((((((/* implicit */int) var_13)) % (((/* implicit */int) var_0)))), (((/* implicit */int) (_Bool)1))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_6 [i_0] [i_1] [(signed char)6] [i_3 + 1])) | (((arr_2 [i_0]) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (short)3402))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_20 [(unsigned short)11] [(short)7] [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_4 [i_0]));
                            arr_21 [i_0] [i_1] [i_1] [i_1] [i_0] [i_5] = var_4;
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) 18ULL))));
                        }
                    } 
                } 
                arr_22 [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0])) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (((-(((/* implicit */int) var_0)))) <= (((/* implicit */int) var_4))));
}
