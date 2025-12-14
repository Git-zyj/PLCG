/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137767
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = arr_2 [i_1];
                var_21 -= ((/* implicit */long long int) ((unsigned short) 288230376151711743ULL));
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2 + 2])) || (((/* implicit */_Bool) arr_0 [i_0 + 2])))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */long long int) -557750505);
                    var_23 = ((/* implicit */unsigned char) var_10);
                }
                for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [(_Bool)1])))))))) ? (min((((((/* implicit */_Bool) -1012125730417709780LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))) : (8769219968477891961LL))), ((-(arr_2 [i_0]))))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)0)))))));
                    arr_13 [i_1] [i_1] [i_3] = -1453305848287774709LL;
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        for (short i_5 = 1; i_5 < 23; i_5 += 4) 
                        {
                            {
                                arr_20 [i_1] [i_5] [21ULL] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((short) var_0))) ? (((((/* implicit */_Bool) 288230376151711743ULL)) ? (((/* implicit */int) var_16)) : (557750505))) : ((+(((/* implicit */int) var_10))))))));
                                var_25 = ((((((/* implicit */int) arr_16 [i_0 - 1] [i_1] [i_3] [i_5 - 1])) % (((/* implicit */int) arr_16 [i_0 + 3] [i_4] [i_5] [i_5 + 1])))) >> (((((/* implicit */int) (unsigned short)7821)) - (7795))));
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_3] |= ((/* implicit */int) max((max((((/* implicit */long long int) (short)25228)), (min((((/* implicit */long long int) (short)192)), (arr_2 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-66))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 173585263U))))))))));
                }
                for (int i_6 = 1; i_6 < 23; i_6 += 1) 
                {
                    var_26 = ((/* implicit */short) max((min(((~(var_14))), (((/* implicit */unsigned long long int) arr_16 [i_6 - 1] [i_6 - 1] [i_6] [i_6])))), (18158513697557839872ULL)));
                    var_27 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) 1914692660U)), (-7178922622914320252LL)));
                    var_28 = min((((/* implicit */long long int) arr_6 [i_1] [i_1] [i_6])), (((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_15))))) ? (max((-1453305848287774709LL), (-3343054856961704131LL))) : (-1453305848287774709LL))));
                }
            }
        } 
    } 
    var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_19))))) | (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (var_17)))) ? (((/* implicit */int) var_12)) : (var_17)))) : (((long long int) var_3))));
    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) 8980780846727849880LL))));
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 1; i_10 < 16; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)32))))))) - (arr_33 [i_9] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1])));
                                arr_37 [i_7] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) max((arr_33 [(unsigned char)13] [i_9] [(short)12] [i_10 + 1] [(short)11]), (((/* implicit */long long int) (_Bool)1)))))) ? (((((/* implicit */_Bool) 1982797526)) ? (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))) : (arr_31 [i_7] [i_8] [i_9] [i_10]))) : (((/* implicit */long long int) (~(var_15)))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-8)))));
                            }
                        } 
                    } 
                    arr_38 [i_7] [i_7] = ((/* implicit */short) ((_Bool) (signed char)-50));
                    var_32 = ((/* implicit */unsigned long long int) (unsigned short)65535);
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)185)), ((unsigned short)29477)));
}
