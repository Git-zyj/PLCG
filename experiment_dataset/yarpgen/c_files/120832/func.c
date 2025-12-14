/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120832
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(3777704626466821401LL)))))) ? (max((min((arr_6 [i_0]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_0 + 2]))))));
                    var_19 = ((/* implicit */long long int) var_3);
                    var_20 = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) (short)32743)))))));
    /* LoopSeq 3 */
    for (long long int i_3 = 1; i_3 < 10; i_3 += 1) /* same iter space */
    {
        arr_12 [(signed char)1] |= (+(max((var_2), (((/* implicit */unsigned int) var_9)))));
        var_22 = ((/* implicit */unsigned char) ((int) (unsigned short)25376));
    }
    for (long long int i_4 = 1; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_23 += ((/* implicit */unsigned int) (_Bool)1);
        /* LoopNest 3 */
        for (short i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            for (long long int i_6 = 2; i_6 < 10; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1501499692U)) ? (var_6) : (((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) ? ((-(((long long int) var_2)))) : (((/* implicit */long long int) ((unsigned int) arr_9 [i_4 + 2]))))))));
                        arr_24 [i_4] [i_5] [i_5] = ((/* implicit */int) 5U);
                    }
                } 
            } 
        } 
        arr_25 [i_4] = ((/* implicit */unsigned short) max((((2ULL) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)144))))))), (((/* implicit */unsigned long long int) (short)14385))));
    }
    for (long long int i_8 = 1; i_8 < 10; i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_1 [(unsigned char)3])), (11795977963499687739ULL)));
        arr_29 [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [8U] [i_8 + 1] [i_8 + 1] [(_Bool)1]))))), (max((((/* implicit */unsigned long long int) ((short) (short)-1417))), (((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86)))))))));
        arr_30 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */int) max((var_4), (var_3)))) : (((((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_8] [i_8])) ? (var_9) : (((/* implicit */int) var_12))))))) ? ((((+(((/* implicit */int) (short)32750)))) << ((((+(var_0))) - (240216067U))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) % (((/* implicit */int) var_5))))));
    }
    var_25 = ((/* implicit */long long int) ((var_2) ^ (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_7)))))))));
    var_26 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)112)) ^ ((+((-(1966080)))))));
}
