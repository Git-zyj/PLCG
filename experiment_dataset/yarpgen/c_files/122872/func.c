/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122872
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
    var_20 = ((/* implicit */int) (-(max((((((/* implicit */_Bool) 5202452130070074656LL)) ? (((/* implicit */unsigned long long int) -7023187494433215759LL)) : (var_1))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0 + 1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1] [i_0])) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((signed char) 8230836860478838291ULL))) : (((/* implicit */int) (short)-28774))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [1LL] [i_2])) || (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) arr_0 [i_1] [i_2]))))), (((((/* implicit */_Bool) 5037317120215595271LL)) ? (-3849256882565223218LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                    arr_11 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) ((_Bool) -7869445254956338359LL))) * ((~(((/* implicit */int) (_Bool)1)))))) / (((/* implicit */int) ((unsigned short) 5037317120215595271LL)))));
                    arr_12 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) max((-8852816898132941511LL), (arr_3 [2ULL] [i_0 - 2])));
                    var_22 = ((/* implicit */_Bool) (-(max((min((((/* implicit */int) var_14)), (arr_1 [i_0] [i_0]))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)28754))))))));
                    arr_13 [9U] [9U] [i_2] = ((/* implicit */unsigned long long int) min((((unsigned char) arr_5 [i_0 + 1] [i_1] [i_2])), (((/* implicit */unsigned char) arr_5 [i_0 - 1] [(_Bool)1] [i_2]))));
                }
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_17), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((((unsigned short) (signed char)-5)), (var_19))))));
    var_24 = ((/* implicit */long long int) var_9);
}
