/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189261
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 3718385335U)) & (3515940811233874072ULL)));
    var_11 = ((/* implicit */long long int) (+(min((max((((/* implicit */unsigned long long int) (signed char)96)), (2977633392872057545ULL))), (((/* implicit */unsigned long long int) min(((unsigned short)1024), (((/* implicit */unsigned short) var_9)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 2643978335U))))), (arr_0 [i_0])));
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned short)136), (((/* implicit */unsigned short) var_5)))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((long long int) ((max((432345564227567616ULL), (((/* implicit */unsigned long long int) var_8)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9794)) ? (((/* implicit */long long int) 917310149U)) : (arr_7 [i_2] [i_1] [i_1] [i_0])))))));
                    arr_9 [i_0] [i_1] [i_2] [i_0] = max(((short)20794), ((short)8078));
                    arr_10 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_6 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-73)))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))) : (0ULL)))));
                }
                for (unsigned short i_3 = 4; i_3 < 15; i_3 += 3) 
                {
                    arr_14 [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 12433849625403723449ULL)) ? (min((((/* implicit */unsigned long long int) -8958829582548152949LL)), (288230376151711743ULL))) : (((unsigned long long int) var_8)))));
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)1488))) + (((max((((/* implicit */long long int) var_7)), (var_8))) / (((((/* implicit */_Bool) arr_6 [(unsigned char)16])) ? (var_8) : (((/* implicit */long long int) var_3)))))))))));
                    var_14 = ((/* implicit */signed char) arr_13 [i_1]);
                    arr_15 [14] [i_1] [14] &= ((/* implicit */unsigned short) max((max((0LL), (((/* implicit */long long int) (signed char)49)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3 - 1] [(_Bool)1])) ? (((/* implicit */int) arr_11 [i_3 - 1])) : (var_3))))));
                    arr_16 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_3]));
                }
            }
        } 
    } 
}
