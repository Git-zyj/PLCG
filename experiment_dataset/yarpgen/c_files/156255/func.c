/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156255
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_12 = ((/* implicit */long long int) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (36028797018963967ULL))), (((/* implicit */unsigned long long int) (-(var_8)))))) != (((/* implicit */unsigned long long int) (+(((var_7) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9)))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [(short)12] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8)))) - ((((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (_Bool)1)) >> (((3312804411509096822ULL) - (3312804411509096798ULL))))))) : (((/* implicit */int) ((_Bool) var_2)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_15 [i_3] [i_2] |= ((/* implicit */signed char) var_6);
                                var_13 &= ((/* implicit */short) arr_6 [(unsigned char)19] [i_1] [i_2] [i_3]);
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (+(4294966272U))))) & (((/* implicit */int) ((_Bool) min((var_5), (arr_4 [i_0]))))))))));
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((int) var_3)))));
                                var_16 = ((/* implicit */int) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) min((((((/* implicit */int) ((short) 2408875526U))) ^ (((/* implicit */int) ((4294966284U) >= (((/* implicit */unsigned int) -595338577))))))), (((/* implicit */int) arr_1 [i_0 - 1]))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && ((!(((/* implicit */_Bool) 562400197607424LL))))));
                        arr_25 [i_0] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 626841241))) && (((/* implicit */_Bool) (((((_Bool)1) ? (-2565867784216342097LL) : (5630674765831399844LL))) + (((/* implicit */long long int) ((/* implicit */int) ((595338576) == (((/* implicit */int) (signed char)25)))))))))));
                        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */short) ((signed char) ((((/* implicit */int) ((unsigned char) 595338553))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (var_2)))))));
    var_20 = ((/* implicit */int) var_7);
}
