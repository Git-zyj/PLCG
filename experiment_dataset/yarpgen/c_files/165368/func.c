/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165368
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) (short)27358)) : (1748335387)));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1748335396)))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? ((+(((/* implicit */int) (unsigned char)241)))) : (1748335387)));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((int) 0ULL));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)243)))))));
                    arr_8 [(signed char)8] [i_2] = ((/* implicit */_Bool) ((524287) << ((((+(-1748335381))) + (1748335386)))));
                    var_18 ^= -1748335389;
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_3 = 3; i_3 < 8; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    {
                        arr_16 [i_3] [i_5] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1748335405)) ? (1748335387) : (((/* implicit */int) (unsigned char)226))));
                        arr_17 [i_0] [i_5] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1748335405)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)120))))) : (1053909206));
                        arr_18 [i_4] [i_4] [i_3] [i_3 + 1] [i_3 + 2] [i_4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((16561302707522716400ULL) >> (((-6897779208801708024LL) + (6897779208801708062LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((unsigned int) (unsigned char)12))));
                        var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-24202))));
                    }
                } 
            } 
            arr_19 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -1748335406)) ? (((/* implicit */long long int) 6)) : (-1007604152761993972LL)));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7088791255323462520LL)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (unsigned char)216))));
        }
    }
    var_21 = ((/* implicit */unsigned int) (~(((var_10) ? (((/* implicit */unsigned long long int) (~(-1007604152761993956LL)))) : (var_0)))));
}
