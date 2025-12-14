/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161469
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
    var_15 = ((/* implicit */unsigned char) var_4);
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >> (((var_7) - (1517620848)))))) & (var_12)))) ? (((/* implicit */unsigned int) (+(var_7)))) : (var_0))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0] [i_0])), (arr_0 [i_0])))) ? (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))) : (var_13)));
        var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) -9070891574535520305LL)), (max((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */int) var_5)))))))));
        var_18 = ((/* implicit */unsigned long long int) var_10);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_6 [i_1] [(unsigned char)5] = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23778))) != ((-(arr_4 [i_1] [i_1])))))));
        arr_7 [i_1] = ((/* implicit */signed char) var_6);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)41756))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        var_19 = ((/* implicit */short) (~(((unsigned int) min(((unsigned short)41743), (((/* implicit */unsigned short) (short)-3112)))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */unsigned long long int) (+(arr_10 [i_2 - 1])))) & (((((/* implicit */_Bool) ((4024428570691730621ULL) << (((((/* implicit */int) var_1)) + (87)))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 2])))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */int) ((unsigned short) (short)29756));
    }
    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (unsigned char i_5 = 3; i_5 < 23; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) min((max((5854331507161928618LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_3])) ? (((/* implicit */int) (unsigned short)23772)) : (var_7)))))), (((/* implicit */long long int) min((((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65515))))))))));
                        var_22 = ((/* implicit */int) max((arr_12 [i_3 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_3 - 2] [i_3 + 2] [i_5 - 2])) && (((/* implicit */_Bool) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(_Bool)1])))))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) arr_13 [i_3 + 1]);
        var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_12 [15LL])))))) * (arr_14 [i_3] [i_3 - 1]))))));
    }
}
