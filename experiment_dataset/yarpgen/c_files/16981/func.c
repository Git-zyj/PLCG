/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16981
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-((+(var_1))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_10))))) << ((((+(arr_2 [i_0] [10U]))) + (403875255914465416LL)))));
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (((long long int) var_1))));
            var_22 |= ((/* implicit */int) ((unsigned char) ((arr_8 [i_1 - 1] [i_1 - 1]) >> (((arr_0 [i_1 - 1]) - (1411112398774876424LL))))));
        }
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_11 [i_0] = ((/* implicit */int) var_4);
            var_23 = var_0;
            var_24 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)147)) : (var_2)))))) ? (((((((arr_1 [i_0]) & (((/* implicit */long long int) arr_5 [i_0] [(unsigned char)1] [i_0])))) + (9223372036854775807LL))) >> (((((((/* implicit */int) (unsigned short)32605)) | (var_2))) + (491552781))))) : (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) arr_5 [15] [15] [i_2])) : (-3338261293935831027LL)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) arr_7 [i_2])) : (3758895103271865515LL))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [i_0]))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            arr_15 [12] [i_3] = ((/* implicit */unsigned short) min((((min((var_9), (((/* implicit */long long int) (_Bool)1)))) & (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)18)), ((unsigned short)12007))))))), (((/* implicit */long long int) max((arr_5 [i_0] [i_0] [i_3]), (((/* implicit */int) ((unsigned short) var_10))))))));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -345855585031311694LL)) ? (41107472096052442LL) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) arr_12 [i_3] [i_0]))))))));
            arr_16 [i_0] [i_0] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (arr_10 [i_0]) : (((/* implicit */int) arr_6 [(unsigned char)16])))));
        }
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-13005)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (70368744177663LL))))))) : (min((max((((/* implicit */int) (unsigned char)133)), (1081740207))), (((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned char)255))))))));
    var_27 = ((/* implicit */unsigned short) ((long long int) 14863816105585843122ULL));
    var_28 = ((/* implicit */short) max((((((((/* implicit */long long int) ((/* implicit */int) var_19))) + (var_18))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))))), (((/* implicit */long long int) var_2))));
}
