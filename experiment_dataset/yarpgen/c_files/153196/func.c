/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153196
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
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_2 [i_0])))) * ((-(((/* implicit */int) arr_2 [i_0 + 3]))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (((((-6619554550384504171LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((((-218696049) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))))));
        arr_5 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 - 1]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_11 [i_1] [i_2] [i_3]) != (18446744073709551593ULL)))), (arr_8 [i_3 - 1]))))));
                    var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_7 [i_1])) - (-505381430))))) ? (((((/* implicit */_Bool) min((arr_13 [i_1] [i_2] [i_1]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0)))))) : ((+(((((/* implicit */_Bool) arr_8 [i_1])) ? (var_7) : (var_7)))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_15))) | (-4638413977253730421LL)));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_13)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (_Bool)1)))) : (((var_12) - (((/* implicit */int) arr_7 [i_1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_12 [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1]))) : (((((/* implicit */long long int) 25173410U)) / (6485168911756613307LL)))))));
        arr_15 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~((-(-2140893379)))))), ((-(((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */unsigned long long int) arr_12 [i_1] [i_1])) : (var_3)))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((((((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1])) ? (0ULL) : (((/* implicit */unsigned long long int) var_7)))) >> (((((arr_8 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) - (13765772274464534451ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [9])) & (((/* implicit */int) arr_6 [i_1]))))))))));
        arr_16 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) - (arr_14 [i_1] [i_1] [i_1] [i_1]))))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [2])) ? (((/* implicit */unsigned long long int) -5697847922159351608LL)) : (18198219311521224727ULL)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)24890)), (1610850952131553191ULL)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)61))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4])) && ((_Bool)1))))) & (((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */unsigned long long int) var_8)) : (248524762188326865ULL))))))))));
        var_22 ^= ((/* implicit */long long int) 322398781U);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 15547511235999472502ULL))));
        arr_21 [i_5] [i_5] = arr_20 [i_5] [i_5];
        arr_22 [i_5] [i_5] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6859))) : (5117468017027248807LL)));
    }
    var_24 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((4269793906U) / (((/* implicit */unsigned int) var_7))))), (((18198219311521224749ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((((/* implicit */long long int) 2736125908U)) != (5117468017027248807LL)))))));
    var_25 = ((/* implicit */int) ((var_4) | (var_4)));
}
