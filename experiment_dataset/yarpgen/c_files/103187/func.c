/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103187
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((!(((((/* implicit */_Bool) 233060383)) && (((/* implicit */_Bool) (short)-5681)))))) || (((((/* implicit */_Bool) arr_3 [i_0])) && ((!(((/* implicit */_Bool) arr_0 [i_1])))))))))));
                var_19 += ((/* implicit */_Bool) 1857677319U);
                arr_5 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned long long int) var_11);
            }
        } 
    } 
    var_20 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)214))))) == (var_2)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) -1037230804)) : (-3751585735151228826LL)))))))));
    var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)-5681)) < (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_0))));
}
