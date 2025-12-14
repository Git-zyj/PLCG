/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12413
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
    var_20 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 15U)) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))), (((/* implicit */unsigned int) max(((signed char)12), ((signed char)70))))))) ? (max((var_14), (((/* implicit */long long int) ((2U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53)))))))) : (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) (short)2928)))))))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_19))))))) == (7313636058139450158ULL))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_22 = (signed char)112;
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((-5463624742857981106LL), (((/* implicit */long long int) var_6)))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 2; i_2 < 6; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    arr_12 [i_1 + 1] [i_1] [i_1] [i_1 - 2] = ((unsigned int) min((max((-5LL), (((/* implicit */long long int) (unsigned char)237)))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-19)) / (arr_0 [i_3] [i_3]))))));
                    var_24 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */unsigned long long int) arr_9 [4U] [3U])) : (18055544717426986371ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4035734141U)) ? (3644116135U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) != (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                }
            } 
        } 
    } 
}
