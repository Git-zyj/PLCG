/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177158
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_11) : (arr_3 [i_0]))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)186)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_9)), (arr_2 [i_1 - 2] [i_1 + 1]))))) : (((unsigned int) ((int) 440642597)))));
                arr_4 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) max((((((/* implicit */int) arr_1 [i_0])) ^ (-18))), (((/* implicit */int) (unsigned char)200)))));
                var_14 = ((/* implicit */signed char) ((int) ((((/* implicit */int) (signed char)4)) & (((/* implicit */int) ((8149496261553128646LL) <= (((/* implicit */long long int) 484531173))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10858)))))))) ? ((~(-1688576248))) : ((~(((int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3]))))));
                            var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) ((var_12) ^ (((/* implicit */long long int) var_8))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)186))))) : ((~(arr_9 [13LL] [i_3] [i_3] [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) var_4)))))) + (arr_9 [i_1 - 2] [i_3] [i_1 + 3] [i_1 - 1])))));
                            var_16 = ((((/* implicit */_Bool) -1509648833)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -350236586)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((350236576) << (((((/* implicit */int) var_2)) - (76))))) : (arr_0 [i_0]))) : (((/* implicit */int) (signed char)6)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 11; i_4 += 2) 
    {
        for (short i_5 = 2; i_5 < 12; i_5 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (8862298559246683939ULL) : (1865172882219561428ULL))), (((/* implicit */unsigned long long int) (unsigned short)35004))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        arr_21 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4 + 2])) ? (((/* implicit */int) arr_13 [i_7])) : (var_1)));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) (unsigned char)108)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4 + 2] [i_4 + 2] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)35004))))));
                    }
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        var_19 += var_3;
                        arr_25 [i_5] [i_6] [i_5 - 2] [i_5] = ((/* implicit */short) var_7);
                    }
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25443))) : (3675723152U)));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((var_11) + (487057215)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (var_0)))) : ((~(var_3))))));
}
