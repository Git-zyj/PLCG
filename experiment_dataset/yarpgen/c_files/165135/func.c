/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165135
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
    var_20 = ((/* implicit */signed char) (+((-(max((((/* implicit */unsigned long long int) var_13)), (16783516471624187934ULL)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16783516471624187929ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(2147483647)))))) : ((+(max((1663227602085363672ULL), (((/* implicit */unsigned long long int) (signed char)-125))))))));
            var_22 ^= ((/* implicit */int) arr_2 [i_0 + 1]);
        }
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_23 = arr_4 [i_0];
            var_24 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]);
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (-10) : (7))) >= ((~(((/* implicit */int) (signed char)124))))))), (16783516471624187934ULL))))));
        }
        for (short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((2147483645) << (((((arr_6 [i_3] [i_0]) + (544279763))) - (23))))) / ((~(((/* implicit */int) var_2))))))))))));
            var_27 ^= ((/* implicit */unsigned long long int) arr_2 [i_0]);
        }
        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_28 ^= min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) * (10146091699342218573ULL)))) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_4])) : (arr_3 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_3 [i_0]))))));
            var_29 ^= ((/* implicit */unsigned char) arr_10 [i_0] [i_4]);
        }
        /* vectorizable */
        for (short i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2147483647)))))));
            var_31 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_5]))) + (var_12)))));
            var_32 ^= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (arr_12 [i_5] [i_5] [12]) : (((/* implicit */int) var_18)))));
            var_33 ^= ((/* implicit */unsigned long long int) arr_10 [11ULL] [i_5]);
        }
    }
}
