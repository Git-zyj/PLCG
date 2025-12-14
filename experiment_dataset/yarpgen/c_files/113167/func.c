/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113167
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
    var_15 = ((/* implicit */int) var_8);
    var_16 = ((/* implicit */short) var_14);
    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_13)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((var_4) <= (((unsigned int) arr_1 [i_0])))))));
        var_19 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 2120046094U)) ? (1505314321U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        arr_8 [i_0] [(signed char)12] [3ULL] [i_3 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -180138564)) ? (2147483637) : (((/* implicit */int) (unsigned char)147))));
                        arr_9 [i_0] [i_1] [i_1] [i_3 - 2] [i_3 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_2 - 1] [i_2 - 1] [i_3 - 2]))))) || (((/* implicit */_Bool) ((long long int) var_6)))));
                        arr_10 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2147483637)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))) : (16440510210969002206ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((4294967288U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)5)))))))));
                    }
                    arr_11 [i_0] [i_1] [1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned short)18820)))))) - (((/* implicit */int) ((unsigned short) -4539373255347170794LL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_5] = ((/* implicit */unsigned long long int) ((short) (unsigned char)10));
                                arr_18 [i_5] [i_5] [i_5] [i_1] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)12)) ? (var_10) : (((var_8) << (((min((((/* implicit */long long int) 4294967277U)), (var_14))) + (8689825023044199008LL)))))));
                                arr_19 [i_0] [i_1] [i_5] [i_0] [i_0] = ((/* implicit */short) max((arr_0 [12U] [i_2 - 1]), (((/* implicit */unsigned int) -2147483637))));
                                var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_9)), (var_6)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)35506)))))));
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (short)32761))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
