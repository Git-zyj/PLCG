/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106537
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_20 -= ((/* implicit */signed char) (unsigned short)17425);
        arr_3 [(_Bool)1] = ((/* implicit */int) 10951340138512228354ULL);
        var_21 |= ((/* implicit */unsigned char) ((var_9) << (((((/* implicit */int) (signed char)70)) - (56)))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) min(((~(var_0))), (var_0)));
        var_23 = ((/* implicit */long long int) ((int) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        arr_7 [i_1] = ((/* implicit */int) max(((!(((/* implicit */_Bool) ((unsigned long long int) var_9))))), (((_Bool) var_12))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((signed char) (short)-8405));
            var_25 |= ((/* implicit */_Bool) ((int) (unsigned char)255));
        }
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            arr_17 [i_2] [i_2] [6LL] &= ((/* implicit */int) var_15);
            var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 17447503380397609485ULL)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)39))));
            var_27 = ((/* implicit */unsigned char) (short)-22888);
            arr_18 [i_2] [(signed char)2] [7ULL] &= ((/* implicit */_Bool) ((int) ((var_4) * (var_14))));
        }
        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            arr_21 [i_5] [i_2] [i_5] = ((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_0 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48110))));
            arr_22 [3] [i_5] [1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_19) : (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)86)) >> (((((/* implicit */int) var_11)) + (83)))))) : (-6134767134522584910LL)));
        }
        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            arr_26 [i_6] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)30233))));
            var_28 = ((/* implicit */long long int) ((_Bool) var_16));
            arr_27 [12] [12] = ((/* implicit */unsigned char) ((signed char) (unsigned short)31737));
        }
        arr_28 [i_2] [(signed char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7787713270716779987LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))) : (-3908397196017090317LL)));
        arr_29 [(unsigned char)6] [(_Bool)1] &= -6712897960259372488LL;
        arr_30 [i_2] |= ((/* implicit */unsigned char) arr_14 [(unsigned short)5] [i_2] [i_2]);
    }
    var_29 &= ((/* implicit */unsigned char) var_3);
    var_30 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) 1644919903)) / (-30975464977320963LL)))));
    var_31 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_6)), (var_12))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (signed char)-112)))))))), (((long long int) var_9))));
}
