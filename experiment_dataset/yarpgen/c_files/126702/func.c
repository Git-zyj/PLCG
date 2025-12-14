/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126702
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1605153266)))))))) + ((+(8569564207189847645ULL)))))));
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) -1605153275);
        var_18 -= arr_1 [i_0];
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        for (int i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 10; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_2]))));
                                arr_15 [i_3] [i_4] [i_3] [i_2] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1512492860U)) ? (var_9) : (1605153275)))) ? (((/* implicit */long long int) ((int) (short)10766))) : (arr_11 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3] [i_2])) && (((/* implicit */_Bool) arr_5 [i_3])))))) : (((unsigned int) (~(((/* implicit */int) (short)-17556)))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] = ((/* implicit */int) var_8);
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(((long long int) (~(var_7)))))))));
                }
            } 
        } 
    } 
    var_21 = var_6;
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) -2199023255552LL))));
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1605153255)) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_15)) >= (39667554U)))) : (((/* implicit */int) (unsigned short)47842)))))));
}
