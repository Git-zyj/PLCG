/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144592
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
    var_12 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)243)))))))));
    var_13 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_14 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) max((arr_2 [(_Bool)0]), (((/* implicit */unsigned char) var_2))))))) || (((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967282U))))))))));
        var_15 += ((/* implicit */signed char) min((var_10), (((/* implicit */unsigned long long int) var_1))));
        var_16 |= ((/* implicit */int) max((arr_0 [i_0 + 1]), (((/* implicit */unsigned short) ((_Bool) 13388537973368191483ULL)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1 + 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 3817607341376816292ULL)) && (((/* implicit */_Bool) (unsigned short)0))))) > (((/* implicit */int) min(((short)32767), (((/* implicit */short) arr_3 [i_0] [i_2])))))));
                    arr_11 [i_0] [3ULL] [i_2] [(signed char)8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) * (14629136732332735346ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (14629136732332735324ULL))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_10))))) == (((/* implicit */unsigned long long int) (~(-2257945794436080754LL))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */long long int) 4194288U)) : (2257945794436080752LL))))) ? (2257945794436080763LL) : (((long long int) arr_17 [(signed char)5] [i_3] [i_3 + 1] [i_1] [i_1] [i_1] [i_1])));
                                var_18 ^= ((/* implicit */unsigned char) min((min((14522844259885390816ULL), (((/* implicit */unsigned long long int) (unsigned char)184)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)64)) ? (4237978539230122772LL) : (((/* implicit */long long int) 2433903125U)))))));
                                var_19 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) ((signed char) -10LL)))));
                            }
                        } 
                    } 
                    var_20 = (_Bool)0;
                }
            } 
        } 
    }
}
