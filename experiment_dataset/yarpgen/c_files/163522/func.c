/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163522
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
    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)22986)) > (((/* implicit */int) (unsigned short)23002))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_22 += ((/* implicit */_Bool) ((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22986))) == (var_14))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_14)) : (arr_0 [i_0])))) : (max((((/* implicit */unsigned long long int) (unsigned short)8)), (10392994454685213578ULL))))) << (((var_19) - (3966450084U)))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+(((max((((/* implicit */unsigned long long int) var_7)), (17343953958374826485ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42533)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) arr_8 [i_0 - 2] [i_0 + 2] [i_1] [i_0 + 2] [i_3] [i_0])))))))));
                                var_23 = ((/* implicit */int) (unsigned short)65531);
                                var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)55930))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((((/* implicit */_Bool) 17)) ? (582356208) : (((/* implicit */int) arr_10 [i_0] [i_0])))) / (((/* implicit */int) (signed char)107)))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_21 [i_7] [i_7] [i_6] [i_0] [i_1] [i_0] [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((18389717725526144401ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71)))))) == (((/* implicit */int) var_13))))) >> (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)176)) == (((/* implicit */int) (unsigned short)37263))))) <= (((((/* implicit */_Bool) arr_8 [i_0] [7LL] [i_5] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))))));
                                var_26 &= ((/* implicit */short) var_14);
                                arr_22 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_1 + 1] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_16 [i_7] [i_7] [i_6] [i_5] [i_1 - 1] [i_0 + 2])) : (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (var_5))))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65530)) > (((/* implicit */int) arr_19 [i_0] [i_6] [i_0]))));
                                arr_23 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14))) / (-5124071513942683456LL));
                            }
                        } 
                    } 
                    var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (var_18) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -5789411164473401955LL)))) : ((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_5] [i_5] [(short)2]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_7 [i_5] [i_5] [i_1] [i_1] [i_0] [i_0 + 3]), (((/* implicit */short) var_7))))) ? (max((((/* implicit */unsigned int) (signed char)-103)), (var_19))) : (var_19))))));
                    var_29 |= ((/* implicit */unsigned long long int) var_5);
                }
                var_30 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-6139259462859978977LL)));
            }
        } 
    } 
}
