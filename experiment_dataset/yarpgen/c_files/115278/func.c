/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115278
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+(((((/* implicit */int) ((unsigned char) (short)(-32767 - 1)))) & (((/* implicit */int) (unsigned char)62)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 2; i_4 < 16; i_4 += 2) 
                            {
                                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)24275)) ? (((/* implicit */long long int) var_2)) : (arr_6 [i_1]))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                                arr_12 [i_0] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */int) var_6);
                            }
                            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2913457003550949165ULL)) ? (2147483647) : ((-(max((arr_9 [i_0] [i_2] [i_2] [i_3] [i_5] [i_1] [0LL]), (((/* implicit */int) (signed char)(-127 - 1)))))))));
                                var_18 = ((/* implicit */short) ((min((((/* implicit */int) (signed char)-74)), ((-(((/* implicit */int) var_6)))))) > (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)4))))) ? (((/* implicit */int) max(((short)4), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)36969)) ? (((/* implicit */int) (short)10487)) : (((/* implicit */int) (unsigned char)60))))))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (-(var_2))))));
                                var_20 = ((/* implicit */short) arr_17 [i_0] [i_6]);
                                arr_19 [i_1] [i_2] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((min((3848747750U), (((/* implicit */unsigned int) -1)))), (((/* implicit */unsigned int) (_Bool)0)))))));
                            }
                            var_21 = ((/* implicit */_Bool) min((16966596024356262160ULL), (((/* implicit */unsigned long long int) (short)12225))));
                            /* LoopSeq 1 */
                            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                            {
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32761))) & (((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (3164934150U) : (((/* implicit */unsigned int) min((arr_9 [i_0] [i_0] [i_3] [(unsigned short)4] [i_7] [(unsigned short)14] [i_0]), (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))))))));
                                var_23 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)13844)), (min((1075652750432887560LL), (((/* implicit */long long int) (signed char)-123))))));
                            }
                            arr_22 [i_1] = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    arr_25 [i_0] [i_1] = ((/* implicit */long long int) arr_1 [9ULL]);
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 3; i_9 < 14; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            {
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1] [i_1] [4U] [i_9])) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (short)-1409))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((0) + (((/* implicit */int) (unsigned short)32768)))));
                                var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)4))));
                                var_26 += ((/* implicit */int) 18446744073709551615ULL);
                                var_27 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 65534U)) || (((/* implicit */_Bool) arr_23 [i_10] [i_1] [i_0])))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) arr_18 [(short)12] [i_0] [i_9 - 3] [i_0] [i_9 - 2]))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */_Bool) var_12);
                    var_29 = (+(((/* implicit */int) (short)4)));
                }
            }
        } 
    } 
}
