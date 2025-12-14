/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141098
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_3 [i_1 - 1] [i_1 - 1]))) ? (((((/* implicit */int) ((unsigned short) arr_4 [i_0] [(unsigned short)6] [i_0]))) + ((+(((/* implicit */int) (unsigned short)65535)))))) : ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0]))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) max(((~(arr_2 [i_0]))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) | (((/* implicit */int) (short)-30187)))) | (max((((/* implicit */int) (signed char)53)), (arr_3 [i_1] [i_0]))))))));
                var_12 &= ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) 6493818678882272008LL))))))));
                var_13 = ((/* implicit */unsigned short) max((max((((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 3])), ((-(((/* implicit */int) (unsigned char)89)))))), (max((arr_3 [i_1 + 2] [i_1]), (962484708)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        for (unsigned int i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (short i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_11 [i_5]))));
                            var_15 = ((/* implicit */unsigned short) max((((int) 10692592462582033300ULL)), ((~(((/* implicit */int) (short)7792))))));
                            arr_17 [i_2] [(unsigned short)3] [i_4] [i_4] = ((/* implicit */unsigned char) arr_16 [i_2] [i_3] [i_4] [i_5] [i_5]);
                            var_16 = ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)65535)));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (short)-20424))));
                arr_18 [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_3 + 2] [i_2 - 1])) ? (max((var_6), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (unsigned char)98)))))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63488)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (var_4)))) ? (((((/* implicit */int) (_Bool)1)) >> (((var_1) + (8282126546662034306LL))))) : (((((/* implicit */_Bool) 421988111U)) ? (1845684510) : (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
