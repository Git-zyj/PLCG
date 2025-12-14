/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167428
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
    var_11 = ((/* implicit */int) ((var_8) ? (min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) max((((_Bool) (_Bool)1)), ((!(var_8)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) ((short) (_Bool)1))) >= ((((_Bool)1) ? (arr_2 [11ULL]) : (((/* implicit */int) (_Bool)1)))))))));
            var_12 += ((/* implicit */unsigned char) max((1995768723U), (((/* implicit */unsigned int) (((+(var_10))) / (((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0]) : (arr_2 [i_0]))))))));
        }
        for (unsigned short i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            arr_10 [i_2] [(short)1] [i_2] = ((/* implicit */signed char) min((min(((+(((/* implicit */int) (signed char)127)))), (((((/* implicit */int) (_Bool)1)) >> (0U))))), (((/* implicit */int) (_Bool)1))));
            arr_11 [i_2] [i_2 + 1] [i_2 + 1] = ((signed char) max((((/* implicit */long long int) max((1003405418), (var_10)))), (var_4)));
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_2 + 2] [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned int) max((arr_0 [i_2 - 1]), (((/* implicit */signed char) var_8)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))) % (var_6)))) ? (((/* implicit */int) arr_6 [i_2] [i_2 - 1])) : (-694957486))) : (var_10)));
            arr_12 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_8 [i_0])))));
        }
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_17 [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [(unsigned char)12] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max(((-(4294967295U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))))));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_0])) ? ((~(((/* implicit */int) arr_15 [i_3] [i_0])))) : (((/* implicit */int) var_1))))) || ((!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)120))))))));
        }
        for (short i_4 = 3; i_4 < 12; i_4 += 3) 
        {
            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
            arr_21 [i_4] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (arr_16 [i_0] [i_0] [i_4])));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
    {
        arr_26 [i_5] = ((max((((/* implicit */int) (unsigned char)240)), (((((/* implicit */int) (unsigned char)139)) + (((/* implicit */int) (short)16357)))))) / (((/* implicit */int) min((var_7), ((signed char)113)))));
        var_16 ^= var_3;
    }
    var_17 = ((/* implicit */unsigned char) var_8);
}
