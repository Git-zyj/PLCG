/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159397
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
    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) (short)-27924))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 0U)) : (2ULL)))) ? (max((((/* implicit */unsigned int) ((int) -1LL))), (arr_3 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((_Bool) var_11))))));
                    arr_11 [i_2] [i_0 - 2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)27492)) >= (-190172862))))) >= (((arr_2 [18ULL] [18ULL]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))))))))));
                    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-30756)) : (((/* implicit */int) (short)-1))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-7766951979909331290LL) : (((/* implicit */long long int) 580514480))))) ? ((~(1ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-8500)))))))))));
                    var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_7 [i_2] [10ULL] [10ULL])))) ? (((/* implicit */unsigned long long int) ((-580514480) & (((/* implicit */int) (_Bool)1))))) : (min((0ULL), (((/* implicit */unsigned long long int) 8386560U)))))), (((/* implicit */unsigned long long int) (~(arr_1 [(_Bool)1] [(_Bool)1]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 0U)) > (10ULL)));
}
