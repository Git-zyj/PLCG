/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123587
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_20 = var_9;
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) min((max((var_1), (((/* implicit */int) ((short) (_Bool)1))))), (((((/* implicit */_Bool) min((3269783915U), (((/* implicit */unsigned int) -1136479406))))) ? (((/* implicit */int) arr_2 [i_0])) : (max((-2036328671), (((/* implicit */int) arr_0 [i_1])))))))))));
            arr_4 [(short)2] = ((_Bool) (~(((/* implicit */int) ((_Bool) arr_3 [(unsigned char)12] [i_1])))));
            var_22 = ((/* implicit */short) min((var_22), ((short)32256)));
        }
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (short)16382))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 7; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (short i_4 = 2; i_4 < 8; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) (short)32256);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_2] = ((/* implicit */long long int) (_Bool)0);
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((4294967284U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)13712))))))) * ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))) : (1025183391U))))))));
                                arr_20 [i_3] [(unsigned char)7] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) min((((((/* implicit */_Bool) 4294967295U)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)-32257))))), (((/* implicit */long long int) max(((short)-8363), (((/* implicit */short) (unsigned char)12))))))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) 104132217U))));
                            }
                        } 
                    } 
                    arr_21 [i_2] [2ULL] [i_4] = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) arr_11 [i_2] [i_3])) * (21ULL))) << (((((/* implicit */int) arr_17 [i_2] [7ULL] [i_2 + 3] [i_2] [i_2 + 2])) - (22105))))) <= (max((max((((/* implicit */unsigned long long int) 1136479408)), (18446744073709551596ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (-(((/* implicit */int) ((_Bool) ((signed char) (_Bool)1)))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((((((/* implicit */_Bool) (short)-16126)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_1 [(unsigned short)0])))) < (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (signed char)0))))))) ? (((/* implicit */unsigned int) 297158630)) : (((1025183404U) / (((/* implicit */unsigned int) -1945637272)))))))));
    }
}
