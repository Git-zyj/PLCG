/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156905
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((17988960840083311602ULL) % (3103628596902733258ULL)))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((14956918323544974881ULL) == (14956918323544974873ULL))))))), ((+(4608706342785236958ULL)))));
                    arr_9 [i_0] = ((((/* implicit */_Bool) ((((arr_0 [i_1] [i_0]) != (((/* implicit */unsigned long long int) var_11)))) ? (3489825750164576737ULL) : (((unsigned long long int) var_1))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)45718)), (arr_6 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))));
                    arr_10 [i_0] [i_0] [i_2] [i_0] = min((min((arr_7 [i_0]), (var_14))), (3489825750164576737ULL));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (+((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (arr_12 [i_0] [i_1] [i_1] [i_0] [12U])))))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((_Bool) var_8)) ? (((/* implicit */unsigned long long int) -5490885399554826522LL)) : (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                                var_17 = ((/* implicit */_Bool) max((min((3489825750164576736ULL), (((/* implicit */unsigned long long int) (signed char)68)))), (((unsigned long long int) 3489825750164576735ULL))));
                                arr_20 [i_0] [i_0] [i_2] [i_3 - 2] [2ULL] [i_0] = ((/* implicit */long long int) 3489825750164576734ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = var_12;
    var_19 = ((/* implicit */unsigned int) var_7);
}
