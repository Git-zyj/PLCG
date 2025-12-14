/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136117
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
    var_19 = min((((((long long int) (_Bool)1)) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))))), (((/* implicit */long long int) var_7)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_20 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned short) 274341036032LL)))));
            arr_5 [i_0] [12ULL] = ((/* implicit */long long int) ((unsigned long long int) arr_3 [i_0] [i_1]));
            arr_6 [i_0] = ((/* implicit */unsigned char) ((int) arr_0 [i_1] [i_0]));
        }
        arr_7 [i_0] |= ((/* implicit */_Bool) -4395134860328482422LL);
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */short) max((var_14), ((+(((/* implicit */int) arr_2 [i_2]))))));
        /* LoopNest 2 */
        for (long long int i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            for (short i_4 = 4; i_4 < 10; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_21 [i_2] [6LL] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) ((_Bool) min(((-(-8880434094025276352LL))), (((/* implicit */long long int) arr_12 [i_2] [i_3])))));
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_4 [i_3 + 1] [i_4 + 2]))) ^ ((-(((/* implicit */int) arr_4 [i_3 - 1] [i_4 - 4])))))))));
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_3] [(unsigned char)7] = ((/* implicit */signed char) arr_18 [i_2] [i_3] [i_4] [i_3] [i_4 - 1] [i_3]);
                }
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        var_23 *= ((/* implicit */unsigned int) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) (_Bool)1))));
        arr_25 [(_Bool)1] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)178)) > (((/* implicit */int) arr_24 [4LL]))))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_24 [i_7]))))));
        arr_26 [i_7] [i_7] = ((/* implicit */_Bool) 19LL);
    }
    var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_8)), (((var_9) << ((+(((/* implicit */int) var_3))))))));
    var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
    var_26 = ((/* implicit */int) var_13);
}
