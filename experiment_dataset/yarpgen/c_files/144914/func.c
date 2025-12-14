/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144914
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
    var_10 = ((/* implicit */short) var_3);
    var_11 = ((/* implicit */unsigned char) (-(((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_12 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65415)) == (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)65402))))) <= ((~(14006648717709244404ULL)))));
        var_14 = ((/* implicit */unsigned short) min(((-((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_0)))))), (((((/* implicit */int) var_7)) - (((/* implicit */int) ((_Bool) 4440095356000307212ULL)))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_9))) >> (((/* implicit */int) var_8))));
        var_16 -= ((/* implicit */unsigned char) ((max(((~(11582152719215902020ULL))), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), ((unsigned char)169)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_17 = ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_4 [i_1]))))) <= (min((((/* implicit */int) (short)32736)), ((-(((/* implicit */int) (unsigned char)188)))))));
        arr_6 [i_1] &= ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (arr_4 [i_1]))), (((/* implicit */unsigned long long int) var_5)))) / (min((arr_4 [i_1]), ((-(4503599627370495ULL))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((unsigned long long int) ((((/* implicit */int) (short)-8207)) ^ (((/* implicit */int) var_4))))));
            arr_10 [i_2] [i_2] = ((max((((/* implicit */unsigned long long int) ((unsigned short) (short)32744))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (4440095356000307211ULL))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) var_2))))));
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
            var_19 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (arr_7 [i_1] [i_2])));
            var_20 *= ((/* implicit */unsigned short) ((max((((2290257354365915525ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384))))), (var_0))) || (((((/* implicit */_Bool) ((unsigned char) (unsigned char)195))) || (min((var_8), (var_4)))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_4 [i_1]))));
            var_22 &= ((/* implicit */unsigned char) arr_9 [i_1] [i_1]);
            var_23 *= ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) arr_7 [(unsigned char)9] [(unsigned char)9])));
        }
    }
}
