/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110036
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
    var_13 = 2724036976235169307ULL;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_16 [19ULL] [19ULL] = ((unsigned long long int) (~(min((var_6), (8603763776066914491ULL)))));
                                arr_17 [14ULL] [i_1] [i_2] [i_3] [i_4 - 2] = ((((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) 3421360604227718670ULL)) : (4155565821799952589ULL))) + (var_0));
                                var_14 = ((unsigned long long int) ((((unsigned long long int) 8624404942626900041ULL)) / (15623458766619534004ULL)));
                                var_15 = 11691567248000020039ULL;
                                var_16 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6981406737723560206ULL))));
                            }
                        } 
                    } 
                    var_17 -= 2724036976235169310ULL;
                    var_18 += ((unsigned long long int) 15722707097474382325ULL);
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((unsigned long long int) max((var_4), (var_2)))) == (((((/* implicit */_Bool) var_8)) ? (max((var_8), (var_7))) : (((unsigned long long int) var_2))))));
                }
            } 
        } 
    } 
    var_19 &= var_8;
}
