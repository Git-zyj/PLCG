/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119608
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
    var_15 -= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) ((unsigned long long int) var_6))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) << (((((((/* implicit */_Bool) max((1120239998U), (1120239994U)))) ? (((((/* implicit */_Bool) 8067083156291366539ULL)) ? (var_7) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((10379660917418185077ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))) - (294060224883486170ULL)))));
                                arr_10 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_4] |= ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))) ^ (14465709384229780820ULL))), (((((((/* implicit */_Bool) var_14)) ? (3981034689479770798ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) & (((/* implicit */unsigned long long int) 3174727300U))))));
                                arr_11 [(short)12] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 1120239995U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_0)))))) / (((1120239988U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-5292)))))))) : (((((/* implicit */_Bool) ((short) var_1))) ? (((((/* implicit */_Bool) 418317146895214302ULL)) ? (3981034689479770792ULL) : (((/* implicit */unsigned long long int) 1120239997U)))) : (((((/* implicit */_Bool) 1120239995U)) ? (14465709384229780823ULL) : (14465709384229780820ULL)))))));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_4 [i_4] [i_4]))));
                                var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (1120239995U)))) ? (3174727298U) : (((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)155)))))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) >= (((((/* implicit */_Bool) var_0)) ? (var_5) : (var_8))))) ? (((((var_1) << (((var_13) - (6338527880931533339ULL))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_1] [i_0 - 1] [(_Bool)1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 14465709384229780817ULL))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((14465709384229780827ULL) < (8067083156291366546ULL))) ? ((-(((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (8067083156291366546ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) arr_1 [i_2]))))))))))))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_7) + (3981034689479770793ULL))) - (((/* implicit */unsigned long long int) ((unsigned int) 402653184U)))))) ? (((((/* implicit */int) ((10379660917418185049ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) << (((min((var_6), (((/* implicit */unsigned long long int) var_9)))) - (58ULL))))) : (((/* implicit */int) ((((_Bool) var_14)) || (((/* implicit */_Bool) var_4))))))))));
                }
            } 
        } 
    } 
}
