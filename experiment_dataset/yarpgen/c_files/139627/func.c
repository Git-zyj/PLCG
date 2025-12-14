/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139627
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
    var_18 = max((((/* implicit */long long int) min((max((165886810U), (165886826U))), (var_5)))), (5207584249444176881LL));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) arr_2 [i_0] [i_1 + 4]);
                    var_20 = (i_0 % 2 == zero) ? (((/* implicit */short) (~(((arr_2 [i_0] [i_1 + 4]) >> (((arr_2 [i_0] [i_1 + 3]) - (9276458122073050233ULL)))))))) : (((/* implicit */short) (~(((arr_2 [i_0] [i_1 + 4]) >> (((((arr_2 [i_0] [i_1 + 3]) - (9276458122073050233ULL))) - (11466824106531251004ULL))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_3] [i_4] [16])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2))), (((/* implicit */unsigned int) min((var_7), (((/* implicit */signed char) arr_11 [i_3] [i_3])))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), ((~(arr_9 [i_3])))))) : (((((/* implicit */unsigned long long int) arr_9 [i_3])) - (min((7881299347898368ULL), (((/* implicit */unsigned long long int) (unsigned char)107))))))));
                    var_22 = ((/* implicit */unsigned int) (+((+(arr_12 [i_3] [i_4 + 1] [i_5])))));
                    var_23 = ((/* implicit */short) ((((((unsigned int) -1190136428)) > (((/* implicit */unsigned int) (~(arr_10 [i_3] [i_4])))))) ? (((/* implicit */int) var_0)) : (((int) arr_13 [i_3] [i_4 - 1] [i_4 + 1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 4; i_6 < 20; i_6 += 2) 
    {
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            {
                var_24 = min((8271211847911178599ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_20 [i_7])), (arr_5 [i_7]))))))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        for (int i_10 = 3; i_10 < 19; i_10 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */int) ((signed char) var_17));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9] [i_7]))) <= (((((/* implicit */_Bool) (+(2206160204U)))) ? (min((((/* implicit */unsigned int) (unsigned char)169)), (var_12))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 15456698920501166911ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_15 [i_9])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
