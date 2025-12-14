/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134346
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) min((((/* implicit */short) var_0)), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3813779053U))) : (var_11)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (((/* implicit */int) (short)15143)) : (((/* implicit */int) (short)-15155))));
        var_14 = ((/* implicit */unsigned char) ((long long int) min((arr_0 [i_0]), (arr_0 [i_0]))));
        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) & (((/* implicit */int) var_3))));
        var_16 = ((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)4957)), (var_11)))) ? (((/* implicit */int) (!((!(var_5)))))) : (((((/* implicit */int) (_Bool)1)) | ((~(((/* implicit */int) arr_6 [i_1] [i_1]))))))));
            var_17 = ((/* implicit */int) arr_5 [i_1] [i_1] [i_2]);
            var_18 = ((/* implicit */_Bool) (short)15143);
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */short) min((((signed char) 2203773429465380059LL)), (((/* implicit */signed char) max((var_10), ((_Bool)1))))))), (arr_0 [i_2])));
        }
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_1] [i_3] [i_3])) : (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) ((((/* implicit */int) (short)15132)) != (((/* implicit */int) var_0)))))));
            var_20 = ((/* implicit */int) ((min((arr_11 [i_1]), (((/* implicit */long long int) (short)15119)))) & (((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) var_9))), (min((((/* implicit */unsigned int) arr_5 [i_3] [i_1] [i_1])), (var_11))))))));
            var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) (signed char)17)), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)52289)) ? (((/* implicit */int) arr_8 [i_1] [(_Bool)1] [(unsigned char)12])) : (((/* implicit */int) arr_2 [i_3]))))), (arr_4 [i_1])))));
            var_22 = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)52070)) ? (144115188075855871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_3]))))), (((/* implicit */unsigned long long int) min((arr_8 [i_1] [i_3] [i_3]), (arr_8 [i_1] [i_3] [i_3]))))));
            var_23 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_2 [i_3])))), (((/* implicit */int) ((short) arr_2 [i_3])))));
        }
        for (short i_4 = 2; i_4 < 12; i_4 += 2) 
        {
            var_24 = (+(((/* implicit */int) var_6)));
            arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1] [i_4] [i_4 + 1])) ? (arr_15 [i_1] [i_4] [i_4 - 2]) : (((/* implicit */unsigned long long int) min((((int) arr_11 [i_1])), (((/* implicit */int) ((arr_4 [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-15163)))))))))));
        }
        arr_19 [i_1] = ((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) ((short) min((arr_4 [i_1]), (((/* implicit */unsigned int) arr_0 [i_1]))))))));
    }
    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) arr_20 [i_5]);
        arr_24 [i_5] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)17467)))) / (min((min((((/* implicit */int) (unsigned short)13465)), (var_9))), (((/* implicit */int) arr_20 [i_5]))))));
    }
}
