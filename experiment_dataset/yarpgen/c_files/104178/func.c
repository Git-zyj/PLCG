/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104178
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)38)) ? (17041666404737682008ULL) : (17041666404737682008ULL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) 17041666404737682008ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (8750875968984371485ULL)))))))))));
                                arr_15 [i_2 + 2] [i_0] [(short)18] = max((((/* implicit */unsigned int) ((_Bool) (unsigned char)156))), (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) (short)-24530)) : (((int) var_6))))) ? (((unsigned long long int) (short)11280)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)103))))));
                arr_22 [i_5] [i_5] [i_5] = ((((long long int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned char)87))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_9 [i_6] [(unsigned char)14] [i_5] [i_5])) == (((/* implicit */int) (short)12293))))))));
                /* LoopNest 3 */
                for (short i_7 = 1; i_7 < 12; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */long long int) ((max(((+(5970566458404713541ULL))), (((/* implicit */unsigned long long int) (unsigned char)87)))) >= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)156)) ? (1086852517602880086LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164)))))), (arr_29 [i_7 - 1] [i_7 + 2])))));
                                arr_31 [i_8] [i_6] = ((/* implicit */signed char) ((_Bool) 8750875968984371485ULL));
                            }
                        } 
                    } 
                } 
                arr_32 [i_6] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((var_1) << (((var_12) - (1161894820U))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) ((unsigned short) var_0)))))) >= (((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)24458)))))) : (((((/* implicit */_Bool) -727795853)) ? (1634586988U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87)))))))));
}
