/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164968
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
    var_12 = ((/* implicit */_Bool) min((((/* implicit */int) var_1)), (min((((/* implicit */int) var_5)), (-63270092)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [4LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [11])));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((max((-3534692010521620931LL), (((/* implicit */long long int) (short)22402)))) / (arr_6 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (arr_4 [i_0] [i_0] [i_1])))))));
            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [10U])) ? (-2019103039641877794LL) : (arr_6 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) + (((/* implicit */long long int) 1896953704))))) ? (((/* implicit */unsigned int) (-(2080389524)))) : (2761271932U)))) : (max((((/* implicit */long long int) ((arr_3 [i_0]) + (((/* implicit */int) arr_1 [11]))))), (((var_11) - (((/* implicit */long long int) var_0)))))))))));
            var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(2380013375U))))));
        }
        for (int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) max(((unsigned short)7450), ((unsigned short)25069)));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (!(((/* implicit */_Bool) ((3534692010521620930LL) ^ (((/* implicit */long long int) arr_9 [i_2] [i_2] [i_0]))))))))));
        }
        arr_10 [i_0] [9] = (~(((/* implicit */int) ((arr_6 [i_0]) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_0) : (arr_8 [8U]))))))));
        arr_11 [3LL] [11LL] = var_4;
    }
    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
    {
        arr_14 [8ULL] = ((/* implicit */long long int) var_3);
        var_17 = ((/* implicit */unsigned long long int) (!(((min((arr_6 [(unsigned short)8]), (((/* implicit */long long int) (_Bool)1)))) >= (arr_0 [i_3 - 1])))));
        arr_15 [i_3] = ((((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */int) arr_13 [i_3] [11U])) * (((/* implicit */int) (short)-30135)))) - (328531758))))) ^ ((((+(((/* implicit */int) arr_12 [i_3] [i_3])))) + (((((/* implicit */_Bool) arr_3 [(signed char)9])) ? (((/* implicit */int) arr_12 [i_3] [i_3])) : (((/* implicit */int) var_1)))))));
    }
    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
    {
        arr_18 [(short)2] = ((/* implicit */unsigned short) ((((_Bool) -2010488762)) ? ((-((~(13559845931450992184ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1343416209)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(unsigned short)0] [4LL]))) : (9195912447689688925ULL)))) ? (((/* implicit */long long int) (+(3319673997U)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_0)) : (3534692010521620936LL))))))));
        var_18 &= ((/* implicit */_Bool) var_6);
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6604)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)13455))))) != (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (2761271936U)))) ? (((((/* implicit */_Bool) arr_20 [i_5])) ? (arr_19 [i_5] [i_5]) : (((/* implicit */unsigned long long int) var_6)))) : (min((arr_19 [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_20 [24LL]))))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1040532895114991396LL)) ? (arr_20 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13455)))))) ? (((arr_20 [(unsigned short)1]) % (arr_20 [i_5]))) : (((((/* implicit */_Bool) arr_20 [i_5])) ? (arr_20 [i_5]) : (arr_20 [i_5])))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)8551)) << (((1896953717) - (1896953708)))))) ? (((((/* implicit */long long int) arr_20 [(short)13])) & ((~(var_11))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(_Bool)1] [(_Bool)1])) ? (arr_20 [4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19088)) ? (var_11) : (((/* implicit */long long int) -190656680)))))))))));
    }
}
