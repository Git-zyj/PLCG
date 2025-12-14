/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112514
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
    var_12 = ((/* implicit */short) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */short) max((max((-755628788), (((/* implicit */int) (unsigned short)12860)))), (max((arr_12 [i_1] [i_1] [i_1]), (arr_12 [i_0] [i_1] [i_4])))));
                                arr_14 [i_0] [i_1] [9LL] [i_3] [i_4] = ((/* implicit */unsigned long long int) var_6);
                                arr_15 [i_4] [i_1] [i_2] [17U] [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 1436590609)), ((~(12428055216167877057ULL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_14 = ((/* implicit */long long int) var_3);
                        var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_2])), (-1436590609)))) : (max((((/* implicit */unsigned int) arr_4 [i_0] [5ULL] [i_1])), (857237677U)))))));
                    }
                    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) (~(0ULL))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)40)), (var_9)))) - (var_3))) - (15407290505771771112ULL)));
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        for (int i_7 = 3; i_7 < 20; i_7 += 4) 
        {
            for (unsigned short i_8 = 1; i_8 < 17; i_8 += 4) 
            {
                {
                    arr_27 [i_6] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */int) var_10)) < (((/* implicit */int) (unsigned char)233)))) ? (((/* implicit */unsigned int) max((-1436590614), (((/* implicit */int) var_8))))) : (max((arr_21 [i_6] [i_6]), (368121908U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    arr_28 [i_7] [i_7] [i_7] = ((/* implicit */long long int) arr_26 [i_7] [i_8]);
                    arr_29 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25238))) > (3632181010U))))) ? (574876314U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) > ((-2147483647 - 1))))))));
                    arr_30 [i_6] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_7] [i_7])) ? (var_11) : (((/* implicit */int) arr_22 [i_6] [i_6] [i_6]))))) != (((long long int) arr_22 [i_8] [i_8] [i_8])))))) > ((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6])) ? (-1436590609) : (307785648)))) : (max((7832709847573137554ULL), (((/* implicit */unsigned long long int) arr_26 [i_6] [i_8]))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-7849)) > (var_9)))), (var_4)))));
}
