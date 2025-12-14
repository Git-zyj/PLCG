/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158151
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
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) var_15)), (max((var_14), ((~(var_1)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (arr_2 [i_1])));
            arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((5800672272979604177ULL) >> (((2781644485267301503ULL) - (2781644485267301449ULL)))));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 4294967295U)) * (2781644485267301483ULL)));
            var_22 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-1))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2781644485267301503ULL)) && (((12646071800729947438ULL) == (2781644485267301503ULL))))))));
        }
        arr_9 [(unsigned char)15] = ((/* implicit */unsigned int) arr_7 [17U] [i_0] [i_0]);
        var_24 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) != (((/* implicit */int) ((arr_4 [i_0]) <= (((/* implicit */long long int) var_1)))))));
        arr_10 [(_Bool)1] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
    }
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((min((((/* implicit */long long int) min((arr_11 [i_3]), (arr_2 [i_3])))), (((arr_4 [(_Bool)1]) % (((/* implicit */long long int) var_14)))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_3]))) : (min((var_7), (((/* implicit */unsigned int) var_6))))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 3) 
        {
            arr_15 [(signed char)14] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((var_7) > (arr_13 [i_4 - 1] [i_3])));
            arr_16 [i_4] [i_4 - 2] = ((/* implicit */unsigned int) ((_Bool) arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 2]));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_4 - 2])) << (((((/* implicit */int) arr_6 [i_4] [i_3] [i_3])) - (9253)))));
        }
        for (long long int i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            arr_19 [i_5] [i_3] &= arr_1 [i_3] [i_5];
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_4))));
        }
        var_28 *= ((((/* implicit */_Bool) 2781644485267301503ULL)) ? (((15665099588442250107ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))))) : (((/* implicit */unsigned long long int) arr_11 [i_3])));
    }
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3430364612U)), (var_13))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), (var_6)))), (min((((/* implicit */unsigned long long int) (signed char)127)), (var_13)))))));
        var_29 = ((/* implicit */_Bool) ((((4398046380032ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) arr_18 [i_6]))))) : (var_2)));
        var_30 = ((/* implicit */_Bool) min((max((arr_2 [i_6]), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
        var_31 = 12646071800729947439ULL;
    }
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((15665099588442250132ULL), (((/* implicit */unsigned long long int) var_7)))) >> (((((((/* implicit */_Bool) -6787739932567444734LL)) ? (2781644485267301503ULL) : (((/* implicit */unsigned long long int) 4778117619719948598LL)))) - (2781644485267301498ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)26677)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) 15665099588442250113ULL)) ? (5800672272979604168ULL) : (12646071800729947438ULL)))));
}
