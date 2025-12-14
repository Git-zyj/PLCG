/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112185
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
    var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)0)) / (-723923722)))));
    var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) (_Bool)1)) / ((~(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(short)21] = ((/* implicit */signed char) ((unsigned long long int) var_6));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 3) 
                            {
                                var_18 = ((/* implicit */short) min((((/* implicit */int) (_Bool)0)), (-723923722)));
                                arr_14 [i_0] [i_1 + 1] [(short)20] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1)))))));
                                arr_15 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_8 [i_1 - 1] [i_0] [i_3])) & (((/* implicit */int) arr_8 [i_1 - 1] [i_0] [i_3]))))));
                                arr_16 [i_0] [21U] [i_2] = ((/* implicit */unsigned char) var_13);
                                arr_17 [i_4] [(unsigned short)9] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((max((((/* implicit */unsigned int) (unsigned short)65516)), (var_3))) << ((((((_Bool)0) ? (((/* implicit */int) arr_1 [i_4 + 1])) : (((/* implicit */int) arr_13 [i_0] [i_1 + 3] [i_2] [i_2] [i_4 - 1])))) + (30756)))))));
                            }
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)35370)) ? (((/* implicit */int) min((min((((/* implicit */short) var_9)), (var_15))), (((/* implicit */short) arr_1 [i_1 - 1]))))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-107)), (arr_13 [i_1 + 1] [i_1 + 1] [i_1] [16U] [i_1 + 3]))))));
                            arr_18 [i_0] [i_1 + 1] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 2] [i_0] [i_1] [i_1 + 2] [i_1 + 1] [i_0] [i_1 + 2])) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (arr_10 [17U] [i_0] [i_1 + 1] [(short)10])))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((9223372036854775807LL) - (((/* implicit */long long int) 0U))))));
                        }
                    } 
                } 
                arr_19 [i_0] = ((/* implicit */unsigned char) (signed char)-65);
                /* LoopSeq 1 */
                for (long long int i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    var_20 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26))) <= (4U)));
                    arr_23 [i_0] [i_1] [i_5] = ((/* implicit */signed char) var_4);
                    arr_24 [i_0] [i_0] = var_9;
                    arr_25 [i_0] [i_1 - 1] [i_0] [3LL] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_5]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (int i_7 = 3; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_21 = ((((/* implicit */_Bool) ((long long int) ((unsigned long long int) var_11)))) ? (((/* implicit */int) (unsigned short)23975)) : (((((/* implicit */int) arr_8 [i_0] [i_0] [i_5])) >> (((/* implicit */int) (_Bool)0)))));
                                arr_33 [(_Bool)1] [i_0] [i_5] [i_6] [i_7] = (_Bool)1;
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_4);
    var_23 *= ((/* implicit */unsigned int) (~((-(((((/* implicit */_Bool) var_2)) ? (var_0) : (var_10)))))));
}
