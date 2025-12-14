/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184407
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */unsigned long long int) -8706087042634531671LL)) : (2809088306143012847ULL)));
    var_14 |= ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) (~(var_7)));
                var_16 = ((/* implicit */long long int) (+(((unsigned int) var_6))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_17 = var_10;
        var_18 = ((/* implicit */_Bool) 2809088306143012847ULL);
    }
    for (short i_3 = 2; i_3 < 15; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) ((long long int) 2809088306143012841ULL));
            arr_13 [i_3] = ((/* implicit */short) (~(((/* implicit */int) var_8))));
        }
        arr_14 [i_3] = ((/* implicit */unsigned char) ((long long int) (-(2809088306143012824ULL))));
        arr_15 [i_3] = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) 16125920958329062662ULL)) ? (15637655767566538791ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (15637655767566538768ULL)))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (15637655767566538788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)5)))))) & (min((15637655767566538768ULL), (((/* implicit */unsigned long long int) var_1)))))))));
        var_21 = ((/* implicit */unsigned short) (+(15637655767566538769ULL)));
    }
}
