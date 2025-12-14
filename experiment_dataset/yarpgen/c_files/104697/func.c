/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104697
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
    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))))));
    var_14 = ((/* implicit */long long int) var_8);
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (unsigned char)86)))), (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (signed char)-31))))))) ? (((((/* implicit */_Bool) var_3)) ? ((+(0))) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_3)) : (var_6)))))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_9))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [(unsigned char)17])) == (((/* implicit */int) var_2))))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned short) arr_2 [i_0] [i_0]))))) || (((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [10ULL] [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_19 = 4283315601373562809LL;
        var_20 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1] [i_1]))))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (9905652251338661430ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) arr_4 [i_1])) : (0))))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) ((var_10) ? (((/* implicit */int) var_0)) : (min((((/* implicit */int) var_1)), ((~(((/* implicit */int) arr_2 [i_2] [i_2]))))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_3))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_2]))) ? (arr_3 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2])))))))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_16 [i_2] [4] [4] |= ((/* implicit */signed char) ((short) ((9223372036854775807LL) - (((/* implicit */long long int) arr_3 [i_4])))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_0)), ((unsigned char)162)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) : (max((((/* implicit */long long int) (_Bool)1)), (arr_8 [i_3] [i_2])))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-98)) : (-3)))) ? (arr_7 [i_2]) : (min((((/* implicit */unsigned long long int) arr_6 [i_2])), (18446744073709551593ULL)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
        {
            arr_19 [i_5] [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_12 [i_5])), (((arr_14 [i_2] [i_2] [i_5] [i_2]) ^ (arr_14 [i_2] [i_2] [i_5] [i_5])))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 2; i_6 < 14; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 2) 
                {
                    {
                        arr_24 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (~(-10)));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) -1))) - (((/* implicit */int) ((((/* implicit */_Bool) max((arr_17 [i_6]), (((/* implicit */unsigned char) var_8))))) && (((((/* implicit */int) (short)19643)) > (((/* implicit */int) (short)17960))))))))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */short) -4);
        }
        for (short i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (14339166240534936104ULL) : (((/* implicit */unsigned long long int) var_3)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8])))))), ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 2164018037102729240LL))))) : (((/* implicit */int) var_9))))));
            arr_28 [i_8] [i_8] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_0 [i_8])) + (((/* implicit */int) arr_0 [i_2])))), (((/* implicit */int) min((max(((short)-10097), (((/* implicit */short) var_2)))), (((/* implicit */short) var_10)))))));
            var_27 ^= ((/* implicit */short) ((((((arr_26 [i_2] [i_8]) | (((/* implicit */int) (unsigned char)169)))) <= (((((/* implicit */_Bool) var_7)) ? (1700271232) : (((/* implicit */int) var_7)))))) ? (((/* implicit */int) ((signed char) ((var_11) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))))))) : ((~(((/* implicit */int) var_12))))));
        }
    }
}
