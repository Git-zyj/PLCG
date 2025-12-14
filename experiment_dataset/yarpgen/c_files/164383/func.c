/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164383
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65521))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_16 = (unsigned short)35462;
                            arr_11 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [(_Bool)1])) ? (738518994792706059ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 738518994792706064ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62))) : (var_6)))))) ^ (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)16)) != (1023)));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((unsigned long long int) (unsigned short)54682))));
    var_19 = ((/* implicit */int) ((((((/* implicit */unsigned int) -78281203)) > (((unsigned int) var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(2327489967U)))))))) : (var_1)));
}
