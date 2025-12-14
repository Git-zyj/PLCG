/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160964
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
    var_12 = var_5;
    var_13 &= var_7;
    var_14 = ((/* implicit */int) var_9);
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (short)-27928))));
        var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_2))))) || (var_1)))), (((signed char) min((arr_2 [i_0]), (((/* implicit */unsigned int) 2147483647)))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1]);
            arr_7 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)0)), (4153916049647103638LL)));
        }
        var_18 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (signed char)-80))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    arr_13 [(short)19] [(short)19] [i_3] = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned char) (-(2147483647))))), (((((/* implicit */_Bool) -7731845403730236191LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_0]))) : (7731845403730236167LL)))));
                    var_19 = ((/* implicit */short) arr_3 [i_0]);
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_16 [i_4]) : (((/* implicit */unsigned int) -2147483635))))) ? (((/* implicit */int) ((unsigned short) arr_16 [i_4]))) : ((((-2147483647 - 1)) % (((/* implicit */int) arr_15 [i_4])))))))));
        var_21 ^= ((/* implicit */short) (~(((/* implicit */int) min((arr_15 [i_4]), (arr_14 [i_4]))))));
        arr_17 [i_4] [i_4] = ((/* implicit */_Bool) 2147483647);
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)23611))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_15 [i_4]), (arr_15 [i_4])))) ? (((/* implicit */int) max((arr_15 [i_4]), (arr_15 [i_4])))) : ((~(((/* implicit */int) arr_15 [i_4]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) arr_19 [i_5]))));
        arr_21 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_5])) ? (var_4) : (((/* implicit */int) arr_19 [i_5]))));
        var_24 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_5]))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned char) var_0);
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        arr_26 [(short)0] &= min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_0 [i_6]))))), (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6]))) : (10596424310157860391ULL))));
        var_25 -= min((((/* implicit */int) ((_Bool) min((arr_4 [i_6] [i_6]), (((/* implicit */short) var_2)))))), (min((((/* implicit */int) arr_6 [i_6] [0] [i_6])), (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) arr_4 [i_6] [i_6])) : (((/* implicit */int) var_1)))))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)23611))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (((/* implicit */long long int) arr_11 [i_6])) : (7731845403730236169LL))))))) : ((-(arr_11 [i_6])))));
    }
}
