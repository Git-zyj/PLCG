/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156149
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */long long int) arr_2 [i_0] [13ULL])) : (arr_5 [(signed char)17] [i_1] [i_2 + 3])))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)18399)))) >> (((arr_1 [i_2 - 2] [0]) - (418343427)))))) : (max((((/* implicit */unsigned long long int) var_11)), (((1254054984969886973ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48982)))))))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-27823);
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */long long int) ((/* implicit */int) (short)24572))) >= (max((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) (short)-27823)), (var_8))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            {
                arr_15 [i_3] [i_3] [17ULL] = ((/* implicit */unsigned int) arr_10 [i_3]);
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24576)) ? ((+((-(((/* implicit */int) var_12)))))) : (max(((+(((/* implicit */int) (short)27809)))), ((-(((/* implicit */int) (unsigned short)57700))))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((arr_13 [i_3]) ? ((-(((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) var_6)) : (var_3))))) : (((/* implicit */int) (short)27809))));
                            arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) 1847957815);
                            arr_23 [i_3] [i_3] [(signed char)22] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_3] [i_5] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_3) ^ (((/* implicit */int) (short)-27823))))) || (((/* implicit */_Bool) (+(var_9)))))))) : (min((((/* implicit */unsigned long long int) (short)384)), (arr_12 [i_3] [i_4])))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-466)) ? ((+(((/* implicit */int) arr_21 [i_5 - 2] [i_5 + 2] [i_5] [24])))) : (((/* implicit */int) (_Bool)0))));
                            arr_24 [20ULL] [18ULL] [i_5] [(signed char)17] [(signed char)17] = ((/* implicit */unsigned int) arr_16 [i_3] [(signed char)2] [(short)0]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            for (short i_9 = 1; i_9 < 22; i_9 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (~(arr_25 [i_7])));
                    arr_32 [i_9] = ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
    } 
}
