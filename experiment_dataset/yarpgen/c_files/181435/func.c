/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181435
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
    var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) / (max((-1823220568812079626LL), (((/* implicit */long long int) -317352825))))))) ? (-1823220568812079626LL) : (var_0)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) 1823220568812079625LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)5)));
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned short) min((var_4), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) -317352825)) & (1823220568812079594LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 4; i_2 < 19; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) (+((-(((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (unsigned char)5)))))))));
                    arr_13 [i_1] [i_2] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (max((var_5), (((/* implicit */long long int) 317352803))))))) || ((!(((/* implicit */_Bool) (~(arr_5 [i_1] [i_1]))))))));
                }
            } 
        } 
        var_16 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) -317352803)) && (((/* implicit */_Bool) 317352781)))))));
        var_17 = ((/* implicit */int) arr_9 [i_1]);
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) -1823220568812079595LL))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned long long int) ((signed char) ((var_0) / (((/* implicit */long long int) -2010886280)))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_20 += ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)251))));
                    var_21 = ((/* implicit */_Bool) 14271719165669282592ULL);
                }
            } 
        } 
    }
}
