/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132853
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
    var_14 = max((3530569312U), (((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) * (((((/* implicit */int) (signed char)-20)) / (((/* implicit */int) var_4))))))));
    var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((740200101187709763ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_4 [i_0] [i_2] [i_3]))))));
                        var_17 = ((/* implicit */signed char) (_Bool)1);
                        var_18 = ((/* implicit */unsigned long long int) ((signed char) max((arr_7 [i_0] [i_0] [i_3]), (arr_7 [i_3] [i_0] [i_1]))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 2832720827U)), (var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)4])) : (((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */_Bool) arr_11 [5U] [23ULL] [i_0] [i_0] [i_0] [5LL])) ? (16269092759564982104ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_9 [i_0] [i_0]))))))))));
        /* LoopSeq 2 */
        for (short i_4 = 3; i_4 < 24; i_4 += 1) 
        {
            var_20 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) -1823460025331937663LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28466))) : (1462246469U))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_4])))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((((((/* implicit */_Bool) arr_6 [(unsigned char)22] [i_4 - 1])) ? (arr_10 [i_4 - 2] [i_4 + 1]) : (((/* implicit */unsigned int) ((int) (short)8084))))) - ((+(((((/* implicit */_Bool) (short)2632)) ? (1064817881U) : (1467200474U)))))))));
        }
        for (signed char i_5 = 3; i_5 < 21; i_5 += 2) 
        {
            var_22 = ((/* implicit */short) ((((((/* implicit */long long int) arr_10 [i_5 - 3] [i_5 + 3])) != (2142354616164194695LL))) ? (min((((/* implicit */unsigned long long int) (~(var_10)))), (((((/* implicit */_Bool) 3768593626U)) ? (3296318785224605589ULL) : (16575233952518740367ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5 - 3] [i_0] [i_5])))));
            arr_21 [i_0] = ((/* implicit */long long int) (~(max((max((((/* implicit */int) (_Bool)0)), (arr_8 [(short)10] [(short)10] [(short)10] [(short)10]))), (1320011307)))));
            var_23 = ((/* implicit */_Bool) (~(1658550661)));
        }
    }
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        arr_25 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (short)2632))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((((/* implicit */int) arr_20 [i_6])) <= (((/* implicit */int) (short)9173)))))))) && (((/* implicit */_Bool) ((((-8168118690483236187LL) + (9223372036854775807LL))) >> (((((2304457259376616157ULL) | (12729048047806314861ULL))) - (13834983198221663195ULL))))))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)0)))) != (((((3255816043U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)88))))) ? ((((_Bool)0) ? (arr_6 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31346))))) : (max((8056956751503913096ULL), (((/* implicit */unsigned long long int) var_13))))))));
        arr_26 [i_6] [2ULL] = arr_17 [i_6] [i_6];
        var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)20))));
    }
    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        var_27 = ((_Bool) -1339084779);
        var_28 = ((/* implicit */long long int) arr_18 [i_7] [i_7]);
        var_29 = ((/* implicit */unsigned char) 4518921109919799091ULL);
    }
    var_30 = ((/* implicit */long long int) ((int) min(((signed char)20), (var_4))));
    var_31 ^= (+(((/* implicit */int) (_Bool)0)));
}
