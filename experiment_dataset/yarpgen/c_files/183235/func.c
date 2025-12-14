/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183235
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = arr_3 [i_0] [i_0] [i_1];
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) ((_Bool) (unsigned short)28918)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)255)) : (144345561)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)21770)))))))), (var_11)));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (144345533)))) ? (((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2])) ? ((((_Bool)1) ? (arr_8 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_8 [i_2])))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_23 [i_5] [i_3] [i_4] |= ((/* implicit */unsigned char) arr_18 [i_5] [i_5] [i_4] [i_6 + 1]);
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) -1026965234))));
                                arr_24 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 1124840113269206917ULL)) || (arr_1 [6ULL]))))) ? (min((max((((/* implicit */long long int) var_5)), (arr_18 [i_2] [i_3] [i_4] [(signed char)14]))), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)125)))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_2])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 21; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5418914933078133287LL)))), (((((/* implicit */_Bool) arr_5 [i_2] [i_2] [(unsigned char)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3974514091633445737ULL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)47))))) : (15393162788864ULL)));
                                var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (arr_17 [(unsigned char)20] [i_7] [(unsigned char)20] [(unsigned char)20] [i_2])))) ? (((/* implicit */long long int) (+(3304192443U)))) : (arr_8 [i_8])))) ? (min(((~(((/* implicit */int) arr_16 [i_7 + 1])))), (((/* implicit */int) ((_Bool) (signed char)5))))) : (((arr_29 [i_7 + 1] [i_3] [i_7 + 1] [i_7] [i_8] [i_3 + 2] [i_7]) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) arr_0 [i_7 - 1]))))));
                                var_16 = ((/* implicit */signed char) arr_25 [i_2] [i_2] [i_2]);
                            }
                        } 
                    } 
                    var_17 *= max((((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_6)))))), (10727589407289599698ULL));
                }
            } 
        } 
    }
    for (short i_9 = 2; i_9 < 17; i_9 += 2) 
    {
        arr_33 [i_9] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)221)), (var_7))))))) ? (((/* implicit */long long int) ((int) arr_20 [i_9 + 3]))) : (max((((/* implicit */long long int) arr_31 [i_9])), (-8352608291006515946LL)))));
        var_18 &= ((/* implicit */short) (unsigned char)100);
    }
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5688)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (unsigned char)15))))) ? ((~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)12984)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -843831213)) ? (18085124552224483342ULL) : (((/* implicit */unsigned long long int) 336344342))))) ? (min((-1114479504), (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (11403332954983682035ULL))))))));
}
