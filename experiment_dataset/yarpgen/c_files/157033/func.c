/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157033
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
    var_11 = ((/* implicit */unsigned char) -1419520786754805188LL);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) && (((((/* implicit */_Bool) (unsigned short)30516)) || (((/* implicit */_Bool) arr_0 [i_0]))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1419520786754805171LL)) ? ((((~(1419520786754805162LL))) | (((1419520786754805167LL) << (((((((/* implicit */int) arr_1 [i_0])) + (31932))) - (37))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_14 -= ((/* implicit */unsigned short) arr_0 [(unsigned short)4]);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_15 = ((/* implicit */_Bool) max(((((~(3005109697U))) | (((1289857598U) ^ (1289857598U))))), ((((~(3005109697U))) ^ (((/* implicit */unsigned int) (~(-1856464745))))))));
            var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) (unsigned short)49479)))))));
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_6 [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_2] [i_0])))) || (((1419520786754805188LL) >= (-5433098720192674748LL))));
            var_17 ^= ((/* implicit */unsigned short) max((3005109688U), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)3)))))));
            arr_7 [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_0]);
        }
    }
    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
    {
        var_18 -= ((unsigned short) 12263509558154391923ULL);
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            for (long long int i_5 = 4; i_5 < 13; i_5 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4]))) / (((((/* implicit */_Bool) -1419520786754805188LL)) ? (arr_11 [i_3 + 1] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3 - 1] [i_5 + 2])))))));
                    var_20 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) arr_5 [i_5] [i_5])), (min((((/* implicit */unsigned int) (signed char)23)), (3005109697U))))), (((/* implicit */unsigned int) 749308695))));
                    var_21 ^= ((/* implicit */short) (!(((_Bool) 9565594168613310574ULL))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) ((short) var_6))) != (((/* implicit */int) ((short) var_4)))))))))));
}
