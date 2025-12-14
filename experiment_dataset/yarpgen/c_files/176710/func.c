/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176710
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
    var_10 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 &= ((((/* implicit */int) ((((/* implicit */_Bool) min((5410785770238771941ULL), (((/* implicit */unsigned long long int) arr_5 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3155852216U)) ? (((/* implicit */int) arr_2 [3ULL])) : (var_4))))))) > (((int) ((((/* implicit */_Bool) var_9)) ? (13035958303470779675ULL) : (var_5)))));
                var_12 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))), (((/* implicit */unsigned int) arr_3 [i_1] [i_1]))));
                var_13 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32726)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))) : (((((/* implicit */_Bool) -833419716)) ? (13035958303470779674ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))) : (((((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13035958303470779674ULL))) << (((/* implicit */int) min(((_Bool)0), (arr_2 [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (unsigned short)51046))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_10 [i_3] [i_2]) || (((/* implicit */_Bool) 13102667725014522412ULL)))) ? (5410785770238771937ULL) : (9457824412735523554ULL)))) || (((/* implicit */_Bool) var_6))));
                var_16 = ((/* implicit */signed char) ((arr_6 [i_2]) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (5344076348695029207ULL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)22159)), (1509652920U)))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_2] [i_2]), (arr_10 [i_3] [i_2])))))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111))) : (2785314390U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned int) 1745644927)), (arr_7 [i_3]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-92)))))))) : (13102667725014522412ULL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) arr_7 [i_4])) ? (1829175536) : (((/* implicit */int) arr_11 [i_6] [7U])))))), (((((/* implicit */_Bool) (short)16512)) ? (((/* implicit */int) (unsigned short)3917)) : (((/* implicit */int) arr_11 [i_4 - 1] [i_4 + 2]))))));
                    arr_20 [(unsigned char)8] [(unsigned char)8] [i_5] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [4U]))) : (542008944U))), (((/* implicit */unsigned int) ((arr_6 [i_6]) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) arr_6 [i_4])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 4; i_7 < 9; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 4) 
                        {
                            {
                                var_20 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8]))) | (12643198711431994969ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) : (2785314367U)))) : (10983952513234815851ULL))), (((/* implicit */unsigned long long int) arr_2 [i_5]))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_23 [(signed char)2] [(signed char)2] [i_8 - 3] [i_8] [i_8 - 2] [(_Bool)1]) ? (((/* implicit */int) arr_25 [i_8] [i_8] [(_Bool)1] [i_8] [i_8 - 3])) : (((/* implicit */int) arr_23 [i_8] [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_8 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_7])) ? (var_7) : (((/* implicit */unsigned long long int) arr_13 [i_4] [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7 + 1] [i_5] [i_8 - 2]))) : (2133940316U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((arr_19 [i_4 + 2] [i_4]), (((/* implicit */unsigned short) (_Bool)1))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
