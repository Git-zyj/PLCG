/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15812
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
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */int) var_2)) - (((/* implicit */int) (short)2320)))), (((/* implicit */int) var_14)))))));
    var_19 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) (short)-19128);
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16452)) ? (((((/* implicit */_Bool) (signed char)-21)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [8]))))) : (arr_2 [i_0] [i_0])));
        }
        for (signed char i_2 = 1; i_2 < 7; i_2 += 1) 
        {
            arr_10 [i_2] [i_2 + 2] = ((/* implicit */short) arr_6 [i_2 + 3] [i_2 + 3]);
            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_2 + 3] [i_2 + 1]))));
            var_23 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) arr_9 [i_0] [(unsigned char)4])))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((~(2119368453U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_0] [i_2]))))));
        }
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */signed char) ((3648924644683744372ULL) <= (1237078021867319911ULL)));
            arr_14 [i_0] = ((signed char) (short)-23055);
        }
        for (short i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
        {
            arr_17 [i_0] [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
            var_26 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [(signed char)2]))));
            arr_18 [(_Bool)1] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)32765)))))));
        }
    }
    for (unsigned int i_5 = 3; i_5 < 10; i_5 += 1) 
    {
        arr_23 [i_5] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned char)58)), (((((/* implicit */_Bool) ((short) arr_19 [10ULL] [10ULL]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (var_9))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)0)))))))));
        arr_24 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) var_9)))));
        var_27 -= ((/* implicit */unsigned long long int) ((_Bool) (-(max((((/* implicit */long long int) (unsigned char)253)), (var_4))))));
        var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)162))));
    }
    var_29 += ((((/* implicit */_Bool) var_5)) ? (max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_2))))))) : (((/* implicit */unsigned long long int) min((max((var_17), (((/* implicit */int) (short)27923)))), (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_15)))))))));
}
